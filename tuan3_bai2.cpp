#include<iostream>

using namespace std;

char *SubString(char *s, int index, int length){
	char *A= new char[length];
	for(int i = 0;i<length;i++)
	A[i]= *(s + (i+index-1));
	return A;
	delete[]A;
	}
	
int main()
{
	char A[50];
	int a,b;
	cout << "Nhap chuoi: ";
	cin.getline(A,100);
	cout << "Nhap vi tri va do dai: ";
	cin >> a >> b;
	cout << "Chuoi can tim: " << SubString(A , a , b);
	return 0;
}
	
	
