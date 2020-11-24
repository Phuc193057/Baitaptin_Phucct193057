#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int *A= new int[n];
	for(int i=0;i<n;i++)
	{
		cout << "Nhap so thu " <<i+1 <<": ";
		cin >> A[i];
	}
	cout << "Mang A sau khi thay doi: " << endl;
	for(int i=0;i<n;i++)
	cout << "So thu " << i+1 << ": " << A[n-(i+1)] << endl;
	return 0;
}
