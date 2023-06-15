#include <iostream>
using namespace std;
int main()
{
	int a [100],j,n,count1=0,count2=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
		
	}
	for(int j=0;j<n;j++)
	{
		if(a[j] % 2==0)
		{
			count1++;
		}
		else 
		{
			count2++;
		}
	}
	if(count1 > count2)
	{
		cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
		cout<<"NOT READY"<<endl;
	}
	return 0;
}
