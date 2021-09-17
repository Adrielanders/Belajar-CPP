#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"masukan nilai :";
	cin>>a;
	
	do{
		cout<<"hore ";//aksi
		cout<<a<<endl;
		a++;
	}
	while (a<10);//syarat
	
	cout<<"selesai"<<endl;
	cin.get();
	return 0;
}
