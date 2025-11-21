#include<iostream>
#include<vector>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point() { x = rand() % 10; y = rand() % 10; }
	Point(int _x, int _y) { x = _x; y = _y; }
	void Print()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}
};

int main()
{

	vector<Point> arr;
	for (int i = 0; i < 10; i++)
	{
		arr.push_back(Point());
	}

	for ( auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		ptr->Print();
	}
	cout << endl;

	arr.insert(arr.begin() + 5, Point(10, 10));

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		ptr->Print();
	}
	cout << endl;

	arr.erase(arr.begin() + 5);

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		ptr->Print();
	}
	cout << endl;

}