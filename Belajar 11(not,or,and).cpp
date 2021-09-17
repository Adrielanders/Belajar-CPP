#include <iostream>

using namespace std;

int main()
{
	int a= 3;
	int b= 2;
	
	bool hasil;
	
	// logika  not,and,or
	/*
	//and ; kedua nilai harus benar untuk menghasilkan true
	cout<<"untuk and \n";
	hasil = (a==3)and (b==2);
	cout<<hasil<<endl;
	hasil = (a==4)and (b==2);
	cout<<hasil<<endl;
	hasil = (a==4)&& (b==3);
	cout<<hasil<<endl;
	hasil = (a==2)&& (b==3);
	cout<<hasil<<endl;
	*/
	
	/*
	//or = jika salah satu variabel bernilai benar
	cout<<"untuk or \n";
	hasil = (a==3)or (b==2);
	cout<<hasil<<endl;
	hasil = (a==4)or (b==2);
	cout<<hasil<<endl;
	hasil = (a==4)|| (b==3);
	cout<<hasil<<endl;
	hasil = (a==2)|| (b==3);
	cout<<hasil<<endl;
	*/
	
	//not
	cout<<"untuk not\n";
	hasil= !(a==2);
	cout<<hasil<<endl;
	
	cin.get();
	return 0;
	
}
