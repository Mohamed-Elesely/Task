#include <iostream>
using namespace std;


int main()
{
	string name;
	int age;

	cout << "Please enter your name : ";
	cin >> name;
	cout << "Hello " << name<<" Please enter your age : ";
	cin >> age;

	if (age < 18)
	{
		cout << "Yla ya under age mn hna ro7 shof mozakrtk";
	}
	else
	{
		cout << "Welcome yabo elshbaba ";
	}

}

