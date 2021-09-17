#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"masukan angka = ";
	cin>>a;
	
	if (a==5)
	{
		cout<< "nilai ini adalah 5" << endl;
	}
	else if (a==3)
	{
		cout<< "nilai ini adalah 3" << endl;
	}
	else 
	{
		cout<<"salah"<<endl<<endl;
	}
	cout<<"selesai"<<endl;
	
	cin.get();
	return 0;
	
}
