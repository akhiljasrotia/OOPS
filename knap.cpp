#include <iostream>
#include <cmath>
using namespace std;
void bin_add(int b[],int n)
{
	if(b[n-1]==0)
		b[n-1]=1;
	else if(b[n-1]==1)
	{
		b[n-1]=0;
		if(n-1>0)
			bin_add(b,n-1);
	}
}
int main()
{
	int n, max=0,wsum=0,psum=0,prof=0;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int p[n],w[n],f[n];
	cout<<"\nEnter "<<n<<" element Prices: ";
	for(int i=0;i<n;i++)
		cin>>p[i];
	cout<<"\nEnter "<<n<<" element Weights: ";
	for(int i=0;i<n;i++)
		cin>>w[i];
	cout<<"\nEnter Max Weight : ";
	cin>>max;
	int bin[n]={0};
	for(int i=0;i<pow(2,n);i++)
	{
		//cout<<endl;
		wsum=0;
		psum=0;
		for(int j=0;j<n;j++)
		{
			if(bin[j]==1)
			{
				wsum+=w[j];
				psum+=p[j];
			}
		}
		if(wsum<=max && psum>prof)
		{	
			prof=psum;
			for(int j=0;j<n;j++)
				f[j]=bin[j];
		}
		bin_add(bin,n);
	}
	for(int j=0;j<n;j++)
		if(f[j]==1)
			cout<<"Object "<<j+1<<" with Price: "<<p[j]<<" and Weight: "<<w[j]<<endl;
	cout<<"Profit: "<<prof;
	cout<<endl;
	return 0;
}
