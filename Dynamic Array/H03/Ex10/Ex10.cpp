#include "Ex10.h"
ticket::ticket()
{
	total = price_total = 0;
	int price;
	for (int row1 = 0; row1 < 15; row1++)
	{
		file1 >> price;
		for (int column1 = 0; column1 < 30; column1++)
		{
			theater[row1][column1].cost = price;
			file2 >> theater[row1][column1].avail;
		}
	}
}
ticket::~ticket()
{
	for (int row1 = 0; row1 < 15; row1++)
	{
		file3 << "Row " << left << setw(8) << row1 + 1;
		for (int column1 = 0; column1 < 30; column1++)
		{
			file3 << theater[row1][column1].avail;
		}
		file3 << endl;
	}
	file3 << "Seats sold: " << total << endl;
	file3 << "Seats Available: " << (15 * 30) - total << endl;
	file3 << "Money earned: $" << price_total << endl;
	file3.close();
}
void ticket::viewPrice()
{
	for (int row1 = 0; row1 < 15; row1++)
	{
		for (int column1 = 0; column1 < 30; column1++)
		{
			cout << theater[row1][column1].cost << " ";
		}
		cout << endl;
	}
}
void ticket::viewSeat()
{
	for (int row1 = 0; row1 < 15; row1++)
	{
		cout << "Row " << left << setw(8) << row1 + 1;
		for (int column1 = 0; column1 < 30; column1++)
		{
			cout << theater[row1][column1].avail;
		}
		cout << endl;
	}
}
void ticket::orderSeat(int num, int row2, int column2, char &purchase)
{
	bool order = true;
	for (int x = 0; x < num; x++)
	{
		if (theater[row2][column2 + x].avail == '*')
		{
			cout << "Sorry, this Seat was ordered by someone" << endl;
			order = false;
			purchase = 'N';
			break;
		}
	}
	if (order)
	{
		cout << "The number of requested seats: " << num << endl;
		cout << "The price for each seat in this row is: $" << theater[row2][0].cost << endl;
		cout << "The total cost you have to pay is: $" << theater[row2][0].cost * num << endl;
		cout << endl << "Confirm your purchase? (Y/N) ";
		cin >> purchase;
	}
}
void ticket::updateSeat(int number, int row3, int column3)
{
	for (int x = 0; x < number; x++)
	{
		theater[row3][column3 + x].avail = '*';
	}
}
void ticket::result()
{
	for (int row = 0; row < 15; row++)
	{
		for (int column = 0; column < 30; column++)
		{
			if (theater[row][column].avail == '*')
			{
				total++;
				price_total += theater[row][column].cost;
			}
		}
	}
	cout << "Seats sold: " << total << endl;
	cout << "Seats available: " << (15 * 30) - total << endl;
	cout << "Money earned: $" << price_total << endl;
}
int main()
{
	int choice, row, amount, col;
	char purchase;
	ticket theater;
	cout << fixed << setprecision(2);
	do
	{
		cout << "******   Welcome to our small theater   ******" << "\n" <<endl;
		cout << "Main Menu" << "\n" << endl;
		cout << "1. Show seating chart" << endl;
		cout << "2. Purchase ticket" << endl;
		cout << "3. Sales result" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice (1-4): " << endl;
		cin >> choice;
		while (choice < 1 || choice > 4)
		{
			cout << "Enter your choice (1-4): ";
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			cout << endl << "Show the seating chart of the theater: " << endl;
			cout << "                       Seats" << endl;
			cout << "            123456789012345678901234567890" << endl;
			theater.viewSeat();
			break;
		case 2:
			cout << endl << "How many seats do you want to buy: ";
			cin >> amount;
			cout << "Which row do you want to sit in?: ";
			cin >> row;
			cout << "Which column do you want to sit in?: ";
			cin >> col;
			theater.orderSeat(amount, row, col, purchase);
			if (toupper(purchase) == 'Y')
			{
				cout << "The seats have been purchased successfully" << endl;
				theater.updateSeat(amount, row, col);
			}
			else
			{
				cout << "The seat have not been purchased" << endl;
			}
			break;
		case 3:
			cout << endl << "Here is the sales result: " << endl;
			theater.result();
			break;
		case 4:
			cout << endl << "Thank you for your purchase, see you again!" << endl;
			break;
		}
		cout << endl;
	} while (choice != 4);
	file1.close();
	file2.close();
	return 0;
}