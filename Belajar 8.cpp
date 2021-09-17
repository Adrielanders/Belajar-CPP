#include <iostream>
#include <limits>
using namespace std;

int main()
{	
	//bilangan bulat
	//int a = 2147483647;//32 bit
	//unsigned int a= 5;//tidak ada minus 
	//long = 5; //32
	long long b = 6; //64bit
	//short c = 7;//2bit
	
	// bilangan desimal
	//float d = 1.5;
	//double e = 2.5;
	
	//character
	//char f = 'a';//char 1 bit
	
	//bolean
	//bool g=true; //true/false
	
	cout<<b<<endl;
	cout<<sizeof(b)<<"byte"<<endl;
	cout<< numeric_limits<long long >::max()<<endl;
	cout<<numeric_limits<long long>::min()<<endl;
	cin.get();
	return 0;
}
