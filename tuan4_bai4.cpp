#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s1[100], s2[100];
	cout << "Nhap chuoi s1: ";
	cin >> s1;
	cout << "Nhap chuoi s2: ";
	cin >> s2;
	int i = strcmp(s1,s2);
	if(i == 0)
	cout << "Hai chuoi giong nhau.";
	else
	cout << "Hai chuoi khong giong nhau.";
	return 0;
}
