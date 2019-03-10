#include<iostream>
#include<vector>
using namespace std;
void check(long long int n,int d)
{
	vector<int> v;
	long long int x=n;
	v.push_back(d);
	x=n;
	while(x!=0)
	{
		v.push_back(x%10);
		x=x/10;
	}
	int f=-1;
	for(int m=0;m<v.size()-2;m++)
	{
     if(v[m]<v[m+1])
      {
       f=m+1;
      }
	}
	int number =0,no=0;
	
	if(f==-1)
	{ 
		cout<<n;
	}
	int second;
	else
	{
		for(int h=v.size()-1;h>=0;h--)
		{   if(h==f&&f!=0)
                {h--;
                }
            if(f==0)
            	break;
			number=number*10+v[h];
		}
		for(int m=0;m<v.size()-1;m++)
		no=no*10+d;
	cout<<no<<" "<<number;
	}

}

int main()
{
	int t;
	cin>>t;
	int d;
	long long int n;
	while(t--)
	{
    cin>>n;
    cin>>d;
     check(n,d);
    cout<<endl;
	}
}