# include <iostream>

using namespace std;

int main()
{
	int a=40;
	int b=2;
	
	float hasil;
	//penjumlahan
	hasil = a + b;
	cout<<a<<"+"<<b<<"="<<hasil<<endl;
	
	//pengurangan
	hasil = a - b;
	cout<<a<<"-"<<b<<"="<<hasil<<endl;
	
	//perkalian
	hasil = a * b;
	cout<<a<<"x"<<b<<"="<<hasil<<endl;
	
	//pembagian
	hasil = a / b;
	cout<<a<<"/"<<b<<"="<<hasil<<endl;
	
	//modulus //tidak bisa antara int dan float
	hasil = a % b;
	cout<<a<<"%"<<b<<"="<<hasil<<endl;
	
	// urutn eksekusi
	hasil = a+b*a;//kalau ada kurung duluan
	cout<<hasil<<endl;
	cin.get();
	return 0;
}
