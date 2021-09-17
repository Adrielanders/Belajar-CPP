#include <iostream>

using namespace std;

int main ()
{
	float a,b,hasil;
	char aritmatika;
	cout <<"selamat datang di kalkulator kami \n \n";
	
	//kita memasukan input dari user
	cout << " Angka 1: ";
	cin>>a;
	cout<<"+,-,/,*: ";
	cin>>aritmatika;
	cout<<"angka 2: ";
	cin>>b;
	
	cout<<"\nhasil perhitungan : ";
	cout<<a<<aritmatika<<b<<endl;
	
	if (aritmatika=='+'){
	hasil = a + b;
	
}else if (aritmatika=='-'){
	hasil = a - b;
	
}else if (aritmatika=='*'){
	hasil = a * b;
	
}else if (aritmatika=='/'){
	hasil = a / b;
	
}
else 
{
	cout<<"mohon maaf tidak di temukan"<<endl;
}
	cout<<"= "<<hasil<<endl; 
	cin.get();
	return 0;
}
