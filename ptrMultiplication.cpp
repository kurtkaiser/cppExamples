#include <iostream>
using namespace std;

int main()
{
	int x = 25, y = 50, z = 75;

	int *myPointer;

	cout << "Values of x, y, and z:\n";

	cout << x << " " << y << " " << z << endl;

	myPointer = &x;

	*myPointer *= 2;

	myPointer = &y;

	*myPointer *= 2;

	myPointer = &z;

	*myPointer *= 2;

	cout << "Again, the values"
		<< "of x 1 y, and z :\n";

	cout << x << " " << y << " " << z << endl;

	return 0;

}
