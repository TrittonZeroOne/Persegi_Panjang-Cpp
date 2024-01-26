#include<iostream>

using namespace std;

int main(){
	int panjang;
	int lebar;
	int luas;
	
	cout<<"================================\n";
	cout<<"##Program Luas Persegi Panjang##\n";
	cout<<"================================\n";
	cout<<endl;
	
	cout<<"Masukkan Panjang= ";
	cin>>panjang;
	cout<<"Masukkan Lebar= ";
	cin>>lebar;
	luas = panjang * lebar;
	cout<<"Hasil Luas Persegi Panjang = "<<luas <<endl;
	
	return 0;
}
