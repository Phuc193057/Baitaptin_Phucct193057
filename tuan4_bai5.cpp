#include<iostream>

using namespace std;

int main()
{
	char s[100];
	cout << "Nhap chuoi: ";
	cin.getline(s,100);
	char s1[100][100];
	int i,j=0,k=0;
		while(s[i] != '\0')
		{
			if(s[i] != 32 && s[i+1] == 32)
			{
				s1[j][k]=s[i];
				j++;
				k=0;
			}
			else if(s[i] != 32)
			{	
			    s1[j][k]=s[i];
				k++;	
			}
			i++;
			}	
				
		cout << "Mang chuoi: " << endl;
		for(int n=0;n<j;n++)
		cout << s1[n] << endl;
		return 0;
}
		
		
		
		
		
		 
