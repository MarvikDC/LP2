#include<iostream>
using namespace std;

// busqueda lineal
bool lineal_search(int *A, int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if (A[i]==x)
		{
			return true;
		}
		
	}
	return false;
}

//busqueda binaria
bool binary_search(int *A, int n, int x)
{
	int m,i=0, j=n-1;
	while (i<=j)
	{
		m=(i+j)/2;
		if (A[m]==x) 
		{
			return true;	
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
	return false;
}

//binario recursivo
bool binary_search_r(int *A, int n, int x, int i=0)
{
	int m=(i+n)/2;
	if(x==A[m]){return true;}
	else if(x<A[m])
	{
		return binary_search_r(A,m-1,x,i);
	}
	else
	{
		return binary_search_r(A,n,x,m+1);
	}
	
}


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
	int min, aux;
	for (int k=0;k<n;k++)
	{
		min=A[k];
		int i=k+1;
		for(i;i<n;i++)
		{
			if(A[i]<min)
			{
				min=A[i];
			}
			aux=A[k];
			A[k]=min;
			A[i]=aux;
		}
	}
	
	
}

//ordenamiento insertion
void insertion_sort(int *A, int n)
{
	int aux,j;
	for(int i=0;i<=n+1;i++)
	{
		j=i;
		while(A[j-1]>A[j]||j>=0)
		{
			aux=A[j];
			A[j]=A[j-1];
			A[j-1]=aux;
			j--;
		}
	}
}



int main()
{
	int array[5]={5,4,3,2,1};
	int size=5;
	int var=2, var1=3;
	
	
	cout<<"lineal="<<lineal_search(array,size,var)<<endl;
	//bubble_sort(array,size);
	selection_sort(array,size);
	cout<<"binary="<<binary_search(array,size,var1)<<endl;
	
	int arrayp[5]={5,4,3,2,1};
	int size2=5;
	bubble_sort(arrayp,size2);
	for(int t=0;t<size2;t++)
	{
		cout<<arrayp[t]<<'\t';	
	}
	cout<<"binary recursivo="<<binary_search_r(array,size,var1)<<endl;
	
	return 0;
	
}


























