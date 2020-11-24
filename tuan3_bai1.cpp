#include<iostream>
#include<string.h>

using namespace std;

int IndexOf(char *s, char c)
{
	int i;
	for(i= 0;i<strlen(s);i++)
	{
		if(s[i] == c)
		{
			return i + 1;
			break;
		}
		if(i == strlen(s) - 1 && *(s + i) != c)
		return -1;
	}
}

int main()
{
	char A[100],k;
    cout << "Nhap chuoi: ";
    cin.getline(A,100);
    cout << "Nhap ki tu muon tim vi tri: ";
    cin >> k;
    cout << "Ki tu ' " << k << " ' nam o vi tri: " << IndexOf(A, k);
    return 0;
}
    
    
    

