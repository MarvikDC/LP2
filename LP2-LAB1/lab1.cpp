#include<iostream>

using namespace std;
void cambio_valor(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

int divide(int *array, int start, int end) {
    int left, right, pivot, temp;     
    pivot = array[start];
    left = start;
    right = end;
    while (left < right) 
	{
        while (array[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
 
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
 
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
    return right;
}
 

void quicksort(int *array, int start, int end)
{
    int pivot;
    if (start < end) {
        pivot = divide(array, start, end);
        quicksort(array, start, pivot - 1);
        quicksort(array, pivot + 1, end);
    }
}

int kmenor(int *array, int size, int k)
{
	quicksort(array, 0, size - 1);
	return array[k-1];
}




bool is_pal(char *str)
{
	int i,j;
	i=j=0;
	while(str[j])
	{
		j++;
	}
		j--;
	while(i<j)
	{
		if(str[i]!=str[j])return 0;
		i++;j++;
	}
	return 1;
}




int potencia(int base, int exp)
{
	if (exp==0) return 1;
	if (exp%2 !=0) return base*potencia(base,exp-1);
	return potencia(base*base,exp/2);
	
}

unsigned long long potenciaI(int base, int exp)
{
	if (exp==0||base==1) return 1;
	int cont=1, ex2=exp;
	unsigned long long aux=base;
	while (cont*2<=exp)
	{
		aux*=aux;
		cont*=2;
	}
	ex2-=cont;
	while (ex2>0)
	{
		aux*=base;
		ex2--;
	}
	return aux;
}
 
int main()
{
	int var1=9,var2=3;
	cambio_valor(var1,var2);
	cout<<var1<<endl;
	cout<<var2<<endl;
	
	
	int arraysize=8;
	int array[arraysize]={4,4,1,7,5,8,4,9};
	int k=6;
	
	cout<<kmenor(array,arraysize,k)<<endl;



	
	int prueba=potencia(2,4);
	cout<<prueba<<endl;
	
	
	unsigned long long prueba2=potenciaI(2,10);
	cout<<prueba2<<endl;	
	
	return 0;
	
	
}
