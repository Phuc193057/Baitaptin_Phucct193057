#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

struct PS{
	int a;
	int b;
	};

ostream &operator<<(ostream& os, PS p);
istream &operator>>(istream& is, PS &p);
int ucln(int a, int b);
PS rutgon(PS p);
PS operator+(PS p1, PS p2);
PS operator-(PS p1, PS p2);
PS operator*(PS p1, PS p2);
PS operator/(PS p1, PS p2);

ostream& operator<<(ostream& os, PS p){
	os << p.a << '/' << p.b;
	return os;
}

istream& operator>>(istream& is, PS &p){
	cout << endl << "Nhap tu va mau: ";
	is >> p.a >> p.b;
	return is;
	}
	
int ucln(int a, int b)
{
	if(a*b== 0)
	return 1;
	else{
		while(a!=b)
		{
			if(a>b)
			a-=b;
			else
			b-=a;
		}
		return a;
	}
	}

PS rutgon(PS p){
	int i=ucln(p.a, p.b);
	PS q;
	q.a= p.a/i;
	q.b= p.b/i;
	return q;
	}
	
PS operator+(PS p1, PS p2){
	PS q;
	q.a = p1.a*p2.b + p2.a*p1.b;
	q.b = p1.b*p2.b;
	rutgon(q);
	return q;
	}
	
PS operator-(PS p1, PS p2){
	PS q;
    q.a = p1.a*p2.b - p2.a*p1.b;
	q.b = p1.b*p2.b;
	rutgon(q);
	return q;
	}
	
PS operator*(PS p1, PS p2){
	PS q;
	q.a = p1.a*p2.a;
	q.b = p1.b*p2.b;
	rutgon(q);
	return q;
	}
	
PS operator/(PS p1, PS p2){
	PS q;
	q.a = p1.a*p2.b;
	q.b = p1.b*p2.a;
	rutgon(q);
	return q;
	}
	
	
int main()
{
	PS p,q,z,u,v;
	PS s;
	cout << "Nhap vao cac phan so p,q,z,u,v: ";
	cin >> p >> q >> z >> u >> v;
	s=(p - q*z)/(u + v);
	cout << endl << "phan so s la: " << rutgon(s);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
