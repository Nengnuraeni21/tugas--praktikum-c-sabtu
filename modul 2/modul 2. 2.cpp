#include <stdio.h>
int main()
{
	//Mencari Volume Bola
	float d,v,r,pi;
	d= 15;
	pi = 3.14;
	r = d/2;
	//Menghitung Volume Bola
	v = pi*r*r*r*4/3;
	printf("Volume Bola");
	printf("\nd = 15", d);
	printf("\nv = pi*r*r*r*4/3");
	printf("\nVolume Bola :%.2f", v);
	return 0;
}
