#include <iostream>

using namespace std;

int main()
{
	int a;
	
	cout<<"masukan nilai=";
	cin>>a;
	
	switch (a==1){
		case 1:
			cout<<"a=1 \n"<<endl;
		break;//agar tidak di eksekusi semua
		case 2:
			cout<<"a= 2 \n"<<endl;
		break;	
		case 3:
			cout<<"a= 3 \n"<<endl;
		break;
		case 4:
			cout<<"a= 4 \n"<<endl;
		break;
		case 5:
			cout<<"a= 5 \n"<<endl;
		break;	
		case 6:
			cout<<"a= 6 \n"<<endl;
		default://jika di luar nilai case akan muncul default
		cout<<"hahahahaha salah\n"<<endl;
	}
	cout <<"akhir program"<<endl;
	
	cin.get();
	return 0;
}
