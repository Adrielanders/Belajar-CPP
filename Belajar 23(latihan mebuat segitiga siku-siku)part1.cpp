#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"masukan Panjang pola : ";
	cin>>n;
	
	//segitiga dari kiri
	cout<<"pola 1\n\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	//segitiga dari bawah
	
	cin.get();
	return 0;
}
