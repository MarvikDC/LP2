#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<math.h>
#include"msort.h"
#include"bubble.h"
#include"selection.h"
#include"insertion.h"
#include"my_merge.h"


using namespace std;
//template <class t>
int *TA;
int *TB;
//typedef void(*fun_sort)(int*,int);
//template <class t>

bool test_sort(msort<int> *sort1, const int *A, int n)
{
	memcpy (TA,A,sizeof(int)*n);
	memcpy (TB,A,sizeof(int)*n);
	clock_t tc=clock();
	sort1->somesort(TA,n); //your sort
	float time=float(clock()-tc)/CLOCKS_PER_SEC;
	std::sort(TB,TB+n); //std sort
	for (int i=0;i<n;i++)
		if(TA[i]!=TB[i])return false;
	cout<<time<<"  ";
	return true;
}
int N=100000;
int main()
{
	int *A=new int[N];
	TA=new int[N];
	TB=new int[N];
	srand(time(NULL));
	msort<int> *sort1[4]={new bubble<int>, new selection<int>, new insertion<int>,new my_merge<int>};
	for(int n=100;n<N;n*=10)
	{
		for(int i=0;i<n;i++)
			A[i]=rand()%n;
		cout<<n<<"  ";
		for(int s=0;s<4;s++)
			if(!test_sort(sort1[s],A,n))
			{
				cout<<"FAIL\n";
				return 0;
			}
		cout<<endl;
	}
	delete[]TA;
	delete[]TB;
	delete[]A;
	//delete[]sort1;
	return 0;
}
