#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
ifstream file1("seatPrice.txt");
ifstream file2("seatAvailable.txt");
ofstream file3("result.txt");
struct Seat
{
	int cost;
	char avail;
};
class ticket
{
private:
	Seat theater[15][30];
	int total;
	int price_total;
public:
	ticket();
	~ticket();
	void viewPrice();
	void viewSeat();
	void orderSeat(int, int, int, char&);
	void updateSeat(int, int, int);
	void result();
};