#include <iostream>
using namespace std;

//variabel dan type data
int panjang, lebar,luas,keliling, a=1, bilangan = 1,b=1;

//main program
int main() {
	//inputoutput
	cout<<"Masukkan nilai panjang : ";
	cin>>panjang;
	cout<<"masukkan nilai lebar :";
	cin>>lebar;
	
	luas = panjang*lebar;
	keliling = 2*(panjang + lebar);
	
	cout<<"Luas Persegi Panjang     : "<< luas<<"cm";
	cout<<endl;
	cout<<"Keliling Persegi panjang : "<<keliling<<"cm";
	
	cout<<endl;cout<<endl;cout<<endl;
	//for
	cout<<"contoh perulangan for :";
	for (int i=1;i<=10;i++){
		cout<<i<<"";
	}	
	cout<<endl;
	// while
	cout<<"contoh perulangan while :"<<endl;
	while(b <= 10) {
		cout<<b<<endl;
		b++;
	}

	cout<<endl;
	//dowhile
	cout<<"contoh perulangan do while : "<<endl;
	do{
		cout<<bilangan;
	}while(bilangan>=5);
	cout<<endl;
	//if
	cout<<"contoh perulangan if : "<<endl;
	if(a==1){
		cout<<"angka memasukkan nomor 1";
	}
	
	// << comment
}
