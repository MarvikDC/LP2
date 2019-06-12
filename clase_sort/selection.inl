
template <class t>
void selection<t>::somesort(t*A, int n)
{
    int i=0,j, pmin;
    t min;
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

