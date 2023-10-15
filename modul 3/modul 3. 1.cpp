#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv){
	
	
	int Alas, Tinggi;
	float Sm, L , Kell;
	
	cout<<"Masukan Alas !"; cin>>Alas;
	cout<<"Masukan Tinggi !"; cin>>Tinggi;
	
	Sm =sqrt((Alas*Alas)+(Tinggi*Tinggi));
	L =1.0/2.0*Alas*Tinggi;
	Kell =Alas+Tinggi+Sm;
	
	cout<<"Luasnya="<<L<<" dan \nKelilingnya= "<<Kell;
	return 0;
}
