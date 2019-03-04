#include <iostream>
using namespace std;

int main () 
{
const int AMOUNT= 5 ;
int numbers[AMOUNT];
cout <<"Enter"<< AMOUNT<< " numbers: ";
for (int count = 0; count< AMOUNT; count++)
cin >> *(numbers+ count );
cout << "Here are the numbers you entered:\n";
for (int count = 0; count< AMOUNT; count++)
cout << *(numbers+ count) << "";
cout << endl ; 
return 0;
}
