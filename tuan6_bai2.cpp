#include<iostream>
#include<string.h>

using namespace std;

struct SV{
	char ten[50];
	float diem;
};

void nhapDS(SV *p, int n)
{
	for(int i=0;i<n;i++)
	{
		cout << endl << "Sinh vien " << i+1 << ": " << endl;
		cout << "Ten: ";
		cin.getline(p[i].ten, 50);
		cout << "Diem: ";
		cin >> p[i].diem;
		cin.ignore();
	}
}

void swap(SV &a, SV &b)
{
	float diem0 = a.diem; a.diem = b.diem; b.diem = diem0;
	char ten0[50];
	strcpy(ten0, a.ten);
	strcpy(a.ten, b.ten);
	strcpy(b.ten, ten0);
}

void sapxep(SV *p, int n)
{
	for(int i=0; i<n-1 ; i++)
	   for(int j=i+1 ; j<n ;j++)
	      if(p[i].diem < p[j].diem)
	        swap(p[i], p[j]);
}

void in(SV a)
{
	cout << "Ten: " << a.ten << endl;
	cout << "Diem: " << a.diem << endl;
}
	

int main()
{
	SV A[50];
	int n;
	cout << "Nhap so sinh vien: ";
	cin >> n;
	nhapDS(A, n);
	sapxep(A, n);
	int dc;
	cout << endl <<"Nhap diem chuan: ";
	cin >> dc;
	cout << endl << "Danh sach sinh vien trung tuyen: ";
	for(int i=0;i<n;i++)
	{
		if(A[i].diem>= dc)
		{
			cout << endl <<"Ten: " << A[i].ten;
			cout << endl << "Diem: " << A[i].diem << endl;
		}
	}	
	return 0;
}
