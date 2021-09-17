#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"masukan Panjang pola : ";
	cin>>n;
	
	//segitiga dari kanan
	cout<<"pola 3\n";
	for(int i=1;i<=n;i++)//main loop
	{
		for(int j=1;j<i;j++)//loop 2
		{
			cout<<" ";
		}
		for(int k=n;k>=i;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	//segitiga dari bawah
	cout<<"pola 4\n";
	for(int i=1;i<=n;i++)//main loop
	{
		for(int j=n;j>i;j--)//loop 2
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	cin.get();
	return 0;
}
