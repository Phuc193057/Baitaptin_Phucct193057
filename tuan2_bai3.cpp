#include<iostream>

using namespace std;

int main()
{
	int n = 25;
    float n3 = 11;
    const double p = 3.1412;
    unsigned q = 63000;
    char c = 'n';
    enum WeekDay{Mon = 2,Tue, Wed, Thu, Fri, Sat, Sun = 1 };
    double y = 12.3456789e16;
    char str[20] = "welcome C++";
    char *ch = &str[0];
    int *a = &n;
    float n1 = n3/3;
cout << "value of n1 : "<< n1 << "\n";
cout << "value of p : "<< p+5 << "\n";
cout << "value of q : "<< q << "\n";
cout << "value of x : "<< WeekDay(Sat) << "\n";
cout << "value of y : "<< y << "\n";
cout << "value of ch : "<< ch << "\n";
cout << "addr of n : "<< a << "\n";
cout << "addr of ch : "<< (void*)ch << "\n";
return 0;
}
