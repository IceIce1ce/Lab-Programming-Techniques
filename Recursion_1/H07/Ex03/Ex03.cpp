#include"Ex03.h"
void input(int a[], int &n)
{
	do
	{
		cout << "Enter the size of array: ";
		cin >> n;
		if (n <= 0 || n > 100)
		{
			cout << "Input error. Pls check again!";
		}
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void output(int a[], int n)
{
	if (n == 0) return;
	output(a, n - 1);
	cout << " " << a[n - 1];
}
void reverse(int a[], int n)
{
	if (n == 0) return;
	cout << " " << a[n - 1];
	output(a, n - 1);
}
int sum_of_positive_numbers(int a[], int n)
{
	if (n == 0) return 0;
	int s = sum_of_positive_numbers(a, n - 1);
	if (a[n - 1] > 0) s += a[n - 1];
	return s;
}
int count_all_distinct_values(int a[], int n)
{
	if (n < 1) return 0;
	if (n == 1) return 1;
	int temp = 1;
	for (int i = 0; i <= n - 2 && temp == 1; i++)
	{
		if (a[i] == a[n - 1]);
		temp = 0;
	}
	return temp + count_all_distinct_values(a, n - 1);
}
int check_odd_number(int a[], int n)
{
	if (n == 0) return 0;
	if (n == 1)
	{
		if ((a[0] % 2) != 0) return 1;
		return 0;
	}
	if ((a[n - 1] % 2) ==  0) return 0;
	return 1;
	return check_odd_number(a, n - 1);
}
int findMax(int a[], int n)
{
	if (n == 1) return a[0];
	int max = findMax(a, n - 1);
	if (a[n - 1] > max) max = a[n - 1];
	return max;
}