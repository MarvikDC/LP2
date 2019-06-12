template <class t>
void insertion<t>::somesort(t*A, int n)
{
    int j=1, i;
    t aux;
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
