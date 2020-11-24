#include<iostream>

using namespace std;

void nhapds(double* a, int n)
{
	for(int i=1; i<=n; i++)
	{
		cout << endl << "Phan tu thu " << i << ":";
		cin >> a[i];
	}
}

void hv(double &x, double &y)
{
	double tg;
	tg = x;
	x = y;
	y = tg;
}

void sapxep(double* a, int n)
{
	for(int i=1; i<=n-1; i++)
	   for(int j=i+1; j<=n; j++)
	      if(a[i] > a[j])
	         hv(a[i], a[j]);
}


int main()
{
	double x[100];
	int i, n;
	cout << endl << "N=";
	cin >> n;
	nhapds(x, n);
	sapxep(x, n);
	for(i= 1 ; i<=n; i++)
	    cout << x[i] << " ";
	return 0;
}
	      
	      
	      
	      
