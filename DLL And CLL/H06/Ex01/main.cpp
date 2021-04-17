#include"Ex01.h"
int main()
{
	LinkedList lst;
	bool result = load("E:/input.txt", lst);
	if (!result)
	{
		cout << "Unable to load data from file" << endl; return 0;
	}
	int min = searchNodeSmallest(lst);
	deleteNodeSmallest(lst, min);
	result = save("E:/output.txt", lst);
	if (!result) cout << "Save error!!!" << endl;
	else cout << "Saved successfully!!!" << endl;
	deleteAll(lst);
	system("pause");
	return 0;
}