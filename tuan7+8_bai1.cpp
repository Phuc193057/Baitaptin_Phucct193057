#include<iostream>

using namespace std;

typedef int MT[20][20];

void nhapMT(MT a, char* ten, int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << "Phan tu " << "["<<i+1<<"]["<<j+1<<"]: ";
			cin >> a[i][j];
		}
	}
}

void inMT(MT a, char* ten, int m, int n)
{
	cout <<"Ma tran "<< ten << ": "<< endl<<endl;
		for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
}
	
void nhapMT(MT a, char* ten, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << "Phan tu " << "["<<i+1<<"]["<<j+1<<"]: ";
			cin >> a[i][j];
		}
	}
}


void inMT(MT a, char* ten, int n)
{
	cout <<"Ma tran "<< ten << ": "<< endl<<endl;
		for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
}
	
void nhanMT(MT a, MT b, MT c, int n, int m, int p)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			for(int k=0; k<m; k++)
			a[i][j] += b[i][k]*c[k][j];
		}
	}
}

void nhanMT(MT a, MT b, MT c, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<n; k++)
			a[i][j] += b[i][k]*c[k][j];
		}
	}
}

int main()
{
	MT a,b,c;
	char A[20]="Tich",B[20]="1",C[20]="2";
	int ib,jb,ic,jc;
	cout << "Nhap so hang va cot cua ma tran 1: ";
	cin >> ib >> jb;
	cout << endl << "Nhap ma tran 1: " <<endl;
	nhapMT(b, B , ib, jb);
	inMT(b, B, ib, jb);
	cout << "Nhap so hang va cot cua ma tran 2: ";
	cin >> ic >> jc;
	cout << endl << "Nhap ma tran 2: " <<endl;
	nhapMT(c, C , ic, jc);
	inMT(c, C, ic, jc);
	if(jb==ic)
	{
		nhanMT(a, b, c, ib, jb, jc);
		cout <<endl << "Tich cua ma tran 1 va 2: " << endl;
	    inMT(a, A, ib, jc);
	    }
	else
	cout << "Hai ma tran khong nhan duoc.";
	
	return 0;
}














	
	
	
	
