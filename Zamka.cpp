#include<iostream>
#include<iomanip>
using namespace std;


int checksum(int a)
{
	int sumt=0;
	while (a>=1)
		{
		 
	 		int div = a%10;
	 		a=a/10;
		 	sumt=sumt+div;
			 	 
		}
		return sumt;
}

int main()
{
	int minli,maxli,minnum,maxnum,sum,i,j,sumt,newj;
	bool value= false;
	cin>>minli;
	cin>>maxli;
	cin>>sum;
	
	j= minli;
	i= maxli;

	
	while(j<maxli)
	{
	
		if (sum==checksum(j))
		{
			//value=true;
			cout<<j<<endl;
			break;
		}
		j++;
	}
	
	while(i>minli)
	{
	
		if (sum==checksum(i))
		{
			//value=true;
			cout<<i<<endl;
			break;
		}
		i--;
	}

}



