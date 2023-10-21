#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	int bilangan;
	
	cout<<"Masukan Sebuah Bilangan: ";
	cin>>bilangan;
	
	if(bilangan>50)
		bilangan=bilangan+10;
	else
	bilangan=bilangan-25;
	cout<<"Bilangan menjadi : " <<bilangan;
	
	return 0;
}
