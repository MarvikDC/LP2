#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

void n_prime(int *f_prime,int n, int *np)
{
	int *b;
	b=new int[n];
	memset(b,0,sizeof(int)*n);
	memset(f_prime,0,sizeof(int)*n);
	b[0]=1;
	b[1]=1;
	int q=0;
	for(int i=3;i<n;i+=2)
	{
		if(!b[i])
		{
			f_prime[q++]=i;
			
			for(int j=(i*i);j<n;j+=(2*i))
			{
				b[j]=1;
			}
		}
	}
	*np=q;

}

//-------------------
//busqueda binaria
int binary_search(int *A, int n, int x)
{
	int m,i=0, j=n-1;
	while (i<=j)
	{
		m=(i+j)/2;
		if (A[m]==x) 
		{
			return A[m];	
		}
		if (A[m]>x)
		{
			j=m-1;
		}
		else
		{
			i=m+1;
		}
		
	}
	return 0;
}
//------------------------
int main()
{
	//int n=20, np, *ptr_np=&np;
	//int *aprime;
/*	aprime=new int[n];
	n_prime(aprime,n,ptr_np);
	cout<<np<<endl;
	for(int i=0; i<n;i++)
	cout<<aprime[i]<<'\t';
	int m;
	cout<<'\n';
*/	
	
	int m, np, *ptr_np=&np;
	int *aprime;
	while(cin>>m)
	{
		if(m==0) break;
		aprime=new int[m];
		n_prime(aprime,m,ptr_np);
		int n1, n2;
		for(int i=0;i<np;i++)
		{
			//cout<<m-aprime[i]<<"<-------------"<<endl;
			n2=binary_search(aprime,np,m-aprime[i]);
			//cout<<n2<<">>>>>"<<endl;
			if(n2==0 && i==np-1)
			{
				cout<<"Goldbach's conjecture is wrong.\n";
				break;
			}
			if(n2!=0)
			{
				n1=aprime[i];
				cout<<m<<" = "<<n1<<" + "<<n2<<endl;
				break;
			}
		}
	}
	

	return 0;
}
