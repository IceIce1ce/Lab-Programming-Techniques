#include"Ex02.h"
void backTracking(int x, int y)
{
	if (k >= n * n) res++;
	else
	{
		for (int i = 0; i < 8; ++i)
		{
			int x1 = x + row[i];
			int y1 = y + col[i];
			if (0 <= x1 && x1 < n && 0 <= y1 && y1 < n && a[x1][y1] == 0)
			{
				k++;
				a[x1][y1] = k;
				backTracking(x1, y1);
				a[x1][y1] = 0;
				k--;
			}
		}
	}
}
int main()
{
	cout << "Enter n knight: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			k = 1;
			a[i][j] = 1;
			backTracking(i, j);
			a[i][j] = 0;
		}
	}
	cout << "Result: " << res << endl;
	system("pause");
	return 0;
}