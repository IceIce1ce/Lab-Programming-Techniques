#include"Ex05.h"
int main()
{
	FILE* file1, * file2;
	char ch;
	file1 = fopen("input.bin", "r");
	if (file1 == NULL)
	{
		cout << "Can't open file";
		return 0;
	}
	file2 = fopen("output.bin", "w");
	while ((ch = getc(file1)) != EOF)
	putc(ch, file2);
	cout << "Copied sucessfully";
	fclose(file1);
	fclose(file2);
	return 0;
}