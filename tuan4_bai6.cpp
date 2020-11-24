#include<iostream>

using namespace std;

int main()
{
    float A1[50],A2[50];
    int a1,a2;
    cout << "Nhap so phan tu mang 1 va 2: ";
    cin >> a1 >> a2;
    cout << "Nhap mang 1: " << endl;
    for(int i=0;i<a1;i++)
    {
    	cout << "Phan tu so" << i+1 << ": ";
    	cin >> A1[i];
    }
    cout << "Nhap mang 2: " << endl;
    for(int i=0;i<a2;i++)
    {
    	cout << "Phan tu so" << i+1 << ": ";
    	cin >> A2[i];
    }
    float B[100],b=a1+a2;
    for(int i=0;i<a1;i++)
    B[i]=A1[i];
    for(int i = 0;i < a2; i++)
    B[i + a1] = A2[i];
    
    int m;

    for(int i=0;i<b-1;i++)
    {
    	for(int j=i+1 ; j<b ; j++ )
    	{
    		if(B[i]>=B[j])
    		{
    			m=B[i];
    			B[i]=B[j];
    			B[j]=m;
    		}
    	}
    }
    
    cout << "Ta co mang moi sau khi sap xep: " << endl;
    for(int i=0;i<b;i++)
    cout << B[i] << endl;
    return 0;
    }
    
    
    
    
    
    
    
    
    	
