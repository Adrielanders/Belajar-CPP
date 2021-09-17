#include <iostream>

using namespace std;

int main()
{
	int a;
	
	cout<<"masukan angka = ";
	cin>>a;
	
	//if statement
	if(a<=3)//didalam kurung itu pasti boolean
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	cout<<"makasi"<<endl;
	
	cin.get();
	return 0;
}
