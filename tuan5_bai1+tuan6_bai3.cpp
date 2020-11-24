#include<iostream>

using namespace std;

void nhap(int N, int* p)
{
	for(int i=0;i<N;i++)
	{
		cout << "Nhap phan tu thu " << i+1 << ": ";
		cin >> *(p + i);
	}
}

void swap(int &a, int &b)
{
	int i;
	i = a;
	a = b;
	b = i;
}

int *sapxep(int N, int *p)
{
	for(int i=0; i<N-1; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(*(p + i)>=*(p + j))
			swap(*(p + i), *(p +j));
		}
	}
	return p;
}

int soptkhacnhau(int N,int *p)
{
	int dem=0;
	for(int i=0;i<N;i++ )
	{
		if(*(p + i) != *(p + i+1 ))
		dem++;
	}
	return dem;
}

int **tansuat(int N, int *p)
{
	int i= soptkhacnhau(N,p);
	int **ts;
	ts = new int* [2];
	ts[0] = new int [i];
	ts[1] = new int [i];
	int k=0;
	for(int j=0;j<N;j++)
	{
		ts[0][k]= *(p + j);
		if(*(p + j) != *(p + j+1))
		k++;
	}
	for(int j=0; j<i; j++)
	{
		for(int t=0; t <N; t++)
		{
			if(ts[0][j]==*(p + t))
			ts[1][j]++;
		}
	}
	return ts;
}
			
int main()
{
  int n;
  cout << "Nhap so phan tu: ";
  cin >> n;
  int *A;
  A = new int[n];
  nhap(n, A);
  sapxep(n, A);
  int **TS;
  TS = tansuat(n, A);
  for(int i=0;i<soptkhacnhau(n, A);i++)
  {
  	cout << "So " << TS[0][i] << " xuat hien " << TS[1][i] << " lan " << endl;
  	}
  	delete[] A;
  	return 0;
}	
	
	
	
	
	
	


	
	
	
	
	
	
	
	
