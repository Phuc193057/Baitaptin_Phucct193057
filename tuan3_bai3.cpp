#include<iostream>
#include<string.h>

using namespace std;

union testUnion
{
	int i;
	float f; 
	char chuoi[50];
};
 int main()
 {
 	union testUnion tenbien;
 	tenbien.i = 15;
 	printf("tenbien.i : %d\n",tenbien.i);
 	tenbien.f = 25.67;
 	printf("tenbien.f : %f\n",tenbien.f);
 	(char*)strcpy(tenbien.chuoi,"kiem tra gia tri chuoi");
 	printf("tenbien.chuoi : %s\n",tenbien.chuoi);
 	return 0;
}
