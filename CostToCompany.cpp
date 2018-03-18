#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int n;

struct student{
	int rollno,ctc;
	char name[10];

}s[10];


void read()
{
	cout<<"Enter the details of the student"<<endl;
	for(int i=0;i<n;i++)
	{
	  cin>>s[i].rollno>>s[i].name>>s[i].ctc;
	}
}

void display()
{
	for(int i=0;i<n;i++)
	{
	  cout<<s[i].rollno<<" "<<s[i].name<<" "<<s[i].ctc<<endl;
	}
}

void csort()
{
  int b[10],a[100]={0};
 
  for(int i=0;i<n;i++)
	{
	  a[s[i].ctc]++;
  	}

  for(int i=1;i<100;i++)
	{
	  a[i]=a[i]+a[i-1];
	}

  for(int i=n-1; i>=0;i--)
	{
	  b[a[s[i].ctc]]=s[i].ctc;
	  a[s[i].ctc]--;
	}
	
	for(int i=1;i<=n;i++)
	{
	  s[i-1].ctc=b[i];
	}

}


void median()
{
   cout<<" MEDIAN ";
	if(n%2==0)
	{
	  cout<<s[(n/2)-1].ctc<<endl;
	}
 	else
	{
	 cout<<s[(n/2)].ctc<<endl;
	}

}

void min()
{
	csort();
	cout<<"MIN CTC: "<<s[0].ctc<<" MAX CTC: "<<s[n-1].ctc;
}


int main()
{
 cout<<"Enter the value of n ";
 cin>>n;
 read();
 display();
 min();
 median();
return 0;
}
