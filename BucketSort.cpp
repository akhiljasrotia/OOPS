#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

const k=10;


struct node {
 
  int roll;
  char name[20];
  int marks;
  struct node* next;

};

struct node* head[5];
struct node* tail[5];

//class sort{


 // public:
	
	void display(int n)
	{
		int i;
		 struct node* temp;
		//for(i=0;i<n;i++)
		{
			temp=head[0];
			cout<<temp->roll<<" "<<temp->name<<" "<<temp->marks<<endl;


		}

	}
 	void bucket(int n,int a[])
	{
		int i;
		char nam[20];
		int m;
	    struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));

	
		  cout<<"Enter the roll ";
		  cin>>a[i];
		  temp->roll=a[i];
		  cout<<"Enter the name ";
		  cin>>nam;
		  strcpy(temp->name,nam);
		  cout<<"Enter the marks ";
		  cin>>m;
		  temp->marks=m;
		  head[i]=temp;
		  tail[i]=NULL;		
	
		
		
		display(n);
	}

//};




int main()
{
 
// class sort x; 

 struct node s[5];
	
 int n,i;
 cout<<"Enter the value of n ";
 cin>>n;

 int a[n];
  
 
  //x.
for(i=0;i<5;i++)
{
	s[i].bucket(n,a);
}
 return (0);

}
