#include"Ex01.h"
void input()
{
	cout << "Enter n queens: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		col[i] = true;
	}
	for (int i = 1; i < 2 * n; i++)
	{
		Pd[i] = true;
		Sd[i] = true;
	}
}
void output()
{
	cout << "Result " << ++res << ": ";
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void backTracking(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (col[j] && Pd[i + j - 1] && Sd[i - j + n])
		{
			a[i] = j;
			col[j] = false;
			Pd[i + j - 1] = false;
			Sd[i - j + n] = false;
			if (i == n) output();
			else backTracking(i + 1);
			col[j] = true;
			Pd[i + j -1] = true;
			Sd[i - j + n] = true;
		}
	}
}
int main()
{
	input();
	backTracking(1);
	system("pause");
	return 0;
}