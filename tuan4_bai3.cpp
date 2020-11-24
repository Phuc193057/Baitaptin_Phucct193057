#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s1[100],s2[100];
	cout << "Nhap chuoi s1: ";
	cin >> s1;
	strcpy(s2,s1);
	cout << "Chuoi s2: " << s2;
	return 0;
}
