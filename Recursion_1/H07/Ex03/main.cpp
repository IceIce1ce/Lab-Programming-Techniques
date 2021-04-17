#include"Ex03.h"
int main()
{
	int a[100], n;
	input(a, n);
	cout << "This is the array: ";
	output(a, n);
	cout << endl;
	cout << "Array after reversing: ";
	reverse(a, n);
	cout << endl;
	int sum = sum_of_positive_numbers(a, n);
	cout << "Sum of positive numbers in the array is: " << sum;
	cout << endl;
	int count = count_all_distinct_values(a, n);
	cout << "Count all distinct values in the array: " << count;
	cout << endl;
	int check = check_odd_number(a, n);
	if (check) cout << "The array only contains odd numbers";
	else cout << "The arrary doesn't contain all odd numbers";
	cout << endl;
	int max = findMax(a, n);
	cout << "The maximum value in the array is: " << max;
	cout << endl;
	system("pause");
	return 0;
}