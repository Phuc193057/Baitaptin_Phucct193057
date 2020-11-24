#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<double> A(1);
	int size=1;
	int i=1;
	while(i==1)
	{
		cout << "Nhap so thu " << size << ": ";
		cin >> A[size-1];
		cout <<"Ban co muon nhap tiep khong? an 1 neu 'co', 0 neu 'khong': ";
		cin >> i;
		if(i==0)
		break;
		size++;
		A.resize(size);
	}
	cout << endl << "Mang ban vua nhap co " << size << " phan tu" << endl;
	cout << "Mang A: " << endl;
	for(int j=0;j<A.size();j++)
	{
		cout << "Phan tu thu " << j+1 << ": " << A[j] << endl;
	}
	return 0;
}
	
