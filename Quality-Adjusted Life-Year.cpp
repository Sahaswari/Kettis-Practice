#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Num,Year,Valu,Sum,Prduct ;
	Sum=0;
	Prduct =0;
	
	cin>> Num;
	cout<<setprecision(3)<<fixed; //print output in with only 3 decimal
	for (int i=0;i<Num;i++)
	{
		cin>>Year>>Valu;
		Prduct = Year*Valu;
		Sum=Sum+Prduct;
	}
	cout<<Sum;
}