#include"Ex04.h"
void move(int n, char sourceA, char destC, char tempB)
{
	if (n == 1)
	{
		cout << "Move disk 1 from " << sourceA << " to " << destC << endl;
		return;
	}
	move(n - 1, sourceA, tempB, destC);
	cout << "Move disk " << n << " from " << sourceA << " to " << destC << endl;
	move(n - 1, tempB, destC, sourceA);
}