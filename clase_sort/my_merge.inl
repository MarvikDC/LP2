template <class t>
void my_merge<t>::somesort(t*A, int n)
{
    int i=0, j=n-1;
    merge_sort(A,i,j);
}
template <class t>
void my_merge<t>::merge_(t *A, int i, int m, int j)
{

	int in, p, k, A2[j-i+1];
	in = i;
	k = 0;
	p = m + 1;

	while (in <= m && p <= j)
	{
		if (A[in] < A[p])
		{
			A2[k] = A[in];
			k++;
			in++;
		}
		else
		{
			A2[k] = A[p];
			k++;
			p++;
		}
	}

	while (in <= m)
	{
		A2[k] = A[in];
		k++;
		in++;
	}

	while (p <= j)
	{
		A2[k] = A[p];
		k++;
		p++;
	}

	for (int ti = i; ti <= j; ti++)
	{
		A[ti] = A2[ti-i];
	}
}

template <class t>
void my_merge<t>::merge_sort(t *A, int i, int j)
{

	if (i == j) return;
	int m=(i+j)/2;
	merge_sort(A, i, m);
	merge_sort(A, m+1, j);
	merge_(A, i, m, j);

}

