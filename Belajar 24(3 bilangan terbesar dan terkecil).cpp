#include <iostream>

using namespace std;

int main ()
{
	int a,b,c,min,max;
	//inputan untuk angka
		cout<<"input Bilangan pertama : ";
			cin>>a;
		cout<<"input Bilangan Kedua : ";
			cin>>b;
		cout<<"input Bilangan Ketiga : ";
			cin>>c;
	//rumus
	max=a;
	min=a;
	max=b;
	min=b;
	max=c;
	min=c;
	//IF
	{
	if(a>max)
		max=a;
	else if(a<min)
		min=a;
		if(b>max)
			max=b;
		else if(b<min)
			min=b;
				if(c>max)
					max=c;
				else if(c<min)
					min=c;
				}
	cout<<"bilangan terbesar "<<max<<endl;
	cout<<"bilangan terkecil "<<min<<endl;
	
	cin.get();
	return 0;
}
