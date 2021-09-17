#include <iostream>

using namespace std;

int main()
{
	
	cout << "loop1\n";
	for(int i=1;i<=10;i++)//increment // 
	{
		cout<<i<<endl;
	}
	
	cout<<"\nloop2\n";
	for(int i=1;i<=10;i+=2)
	{
	cout<<i<<endl;
}
	
	cout<<"\nloop3\n";
	for(int i=1;i>=-10;i--)//decrement
	{
	cout<<i<<endl;
}
	cout<<"\nloop4\n";
	int a=2;
	for(int i=1;i<=10;i++)//compaund
	{
	a+=i;
	cout<<i<<"||"<<a<<endl;
	}
	cin.get();
	return 0;
}
