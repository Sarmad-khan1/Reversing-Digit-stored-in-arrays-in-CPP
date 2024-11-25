#include <iostream>
using namespace std;
void reverser(int number);
int main()
{
	system("cls");
	int number[1];
	cout<<"Enter the number: ";
	cin>>number[1];
	reverser(number[1]);
}
void reverser(int number)
{

	for(int i=number; i != 0; i--)
	{
		cout<<"The reverse of a number is: "<<i<<endl;
	}
}
