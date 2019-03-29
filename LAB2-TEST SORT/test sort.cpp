#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<math.h>
using namespace std;

int *TA;
int *TB;
typedef void(*fun_sort)(int*,int);
bool test_sort(fun_sort sort, const int *A, int n)
{
	memcpy (TA,A,sizeof(int)*n);
	memcpy (TB,A,sizeof(int)*n);
	clock_t t=clock();
	sort(TA,n); //your sort
	float time=float(clock()-t)/CLOCKS_PER_SEC;
	std::sort(TB,TB+n); //std sort
	for (int i=0;i<n;i++)
		if(TA[i]!=TB[i])return false;
	cout<<time<<"  ";
	return true;
}
//---------------
	// ordenamiento bubble
void bubble_sort(int *A, int n)
{
	int aux,j;
	bool change=true;
	
	while (change)
	{
		change=false;
		for(int i=1;i<n;i++)
		{
			if (A[i]<A[i-1])
			{
				aux=A[i];
				A[i]=A[i-1];
				A[i-1]=aux;
				change=true;
			}
		
		}
	}
	
}

//ordenamiento selection

void selection_sort(int *A, int n)
{
	int i=0,j, pmin, min;
	while(i<n-1)
	{
		pmin=i;
		j=i+1;
		while(j<n)
		{
			if (A[j]<A[pmin])
			{
				pmin=j;
			}
			j++;
		}
	if (pmin!=i)
	{
		min=A[pmin];
		A[pmin]=A[i];
		A[i]=min;
	}
	i++;
	}
	
}


//ordenamiento insertion
void insertion_sort(int *A, int n)
{
	int j=1, i, aux;
	while(j<n)
	{
		i=j-1;
		aux=A[j];
		while (aux<A[i]&&i>=0)
		{
			A[i+1]=A[i];
			A[i]=aux;
			i--;
		}
		j++;
	}
	
}
//--------------------
int N=100000;
int main()
{
	int *A=new int[N];
	TA=new int[N];
	TB=new int[N];
	srand(time(NULL));
	fun_sort sort[3]={bubble_sort,selection_sort,insertion_sort};
	for(int n=100;n<N;n*=10)
	{
		for(int i=0;i<n;i++)
			A[i]=rand()%n;
		cout<<n<<"  ";
		for(int s=0;s<3;s++)
			if(!test_sort(sort[s],A,n))
			{	
				cout<<"FAIL\n";
				return 0;
			}
		cout<<endl;
	}
	delete[]TA;
	delete[]TB;
	return 0;
}
