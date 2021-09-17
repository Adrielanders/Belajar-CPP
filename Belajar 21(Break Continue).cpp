#include <iostream>

using namespace std;

int main()
{
	int i=0;
	//for (int i=0;i<=10;i++)
	while (i<=10)//while increment di letakan di bawah
	{
		i++;
		if(i==5){
			continue;
			//break;
		}
		cout<<i<<endl;
	
	}
	cout<<"akhirnya"<<endl;
	
	cin.get();
	return 0;
}
