#include <iostream>
#include <limits>//umtuk melihat limits 
using namespace std;//kalau ada ini tidak perlu std di bagian body

int main()
{
	int a = 1;//32 bit
	
	cout<<a<<endl;
	cout<<sizeof(a)<<"byte"<<endl;
	cout<<numeric_limits< int>::max()<<endl;
	cout<<numeric_limits< int>::min()<<endl;
	/*
	1 byte = 8 bit
	int have 32 bit
	*/
	
	
	cin.get();
	return 0;
}
