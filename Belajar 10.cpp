#include <iostream>

using namespace std;

int main ()
{
	int a = 2;
	int b = 2;
	
	bool hasil1,hasil2,hasil3,hasil4;
	
	//komperasi, relation expression
	//sebanding
	hasil1= (a==b);
	//tidak sembanding
	hasil2= (a!=b);
	//kurang dari sama dengan
	hasil3 = (a<b);
	//lebih dari
	hasil4 = (a>b);
	
	cout<< hasil1<<endl;
	cout<< hasil2<<endl;
	cout<< hasil3<<endl;
	cout<< hasil4<<endl;
	cin.get();
	return 0;
}
