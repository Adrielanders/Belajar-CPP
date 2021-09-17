#include <iostream>


using namespace std;

int main()
{
	//assignment //memanipulasi
	int a = 10;
	
	cout<<"nilai awal dari a adalah :"<<a<<endl;
	//assignment operator
	/* Rumus
	variable = variable operator ekspresi
	a   	 =    a      -  	  3
	variable operator = ekspresi
	a 			+	  = 3	
	*/	
	a+=3;//tidak bisa di balik 
	cout<<"ditambah 3 menjadi "<<a<<endl;
	
	a-=3;
	cout<<"dikurangi 3 menjadi "<<a<<endl;
	
	a/=3;
	cout<<"dibagi 3 menjadi "<<a<<endl;
	
	a*=3;
	cout<<"dikali 3 menjadi "<<a<<endl;
	
	a%=3;
	cout<<"dimodulus 3 menjadi "<<a<<endl;
	
	
	cout<<a<<endl;
	
	
	
	cin.get();
	return 0;
}
