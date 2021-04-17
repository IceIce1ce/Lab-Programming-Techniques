#include"Ex03.h"
void permutation(int k, int *num, int n, bool *permute)
{
	if (k >= n)
	{
		for (int i = 0; i < n; ++i)
		cout << num[i] + 1;
		cout << endl;
		return;
	}
	for (int i = 0; i < n; ++i)
	if (permute[i])
	{
		num[k] = i;
		permute[i] = false;
		permutation(k + 1, num, n, permute);
		permute[i] = true;
	}
}