#include<iostream>
#include <string>
#include <sstream> 
using namespace std;
int main()
{
	int a, b;
	int i;
	cin >> a >> b;
	stringstream ss_a, ss_b;
    ss_a << a;
    ss_b << b;
    string c = ss_a.str();
    string d = ss_b.str();
    
  	if (c.length() == d.length())
  	{
	  	for (i=0;i<=3;i++)
  	{
		if(c[i]!= d[i])
		{
			if(c[i]<d[i])
			{
				
				cout<<a<<" "<<b;
				break;
			}
			else
				{cout<<b<<" "<<a;
				break;}
			
		}
		else
			continue;	
  	}
	  }
	  
	  else if (c.length() < d.length())
	  {
	  	cout<<a<<" "<<b;
		break;	
  	}
  	else
  	{cout<<b<<" "<<a;
	break;}
  	
}