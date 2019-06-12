template <class t>
void bubble<t>::somesort(t*A, int n)
{
    t aux;
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
