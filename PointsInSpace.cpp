#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

class sort{

 public:

void counting(int n,float d[])
   {
     int i,j,k;
 	
     int temp[n],cum[n];
  	cout<<"HELLO ";
	
     for(i=0;i<n;i++)
 	{
	  temp[i]=0;
	  cum[i]=0;
	}		

	j=0;
	k=0;
     while(1)
      {   
         if(k==n)
           { 
              break;
           }
	  
  	 if(k<n)
	   {
    	      if(d[j]==k)
 		 {
	      	   	temp[k]=temp[k]+1;
			cum[k]=cum[k]+1;
 		 }
		j++;
   	   }
 
	 if(j==n)
	   {
		j=0;
		k++;
	   }
      }

 
       


 	cout<<"The freq array is ";
  
  	 for(i=0;i<n;i++)
 	{
	  cout<<temp[i]<<" ";
   	}
	

     for(i=1;i<n;i++)
	{
		cum[i]=cum[i]+cum[i-1];
	}
	
	cout<<endl<<"The cumulative array is ";
	 
	for(i=0;i<n;i++)
  	{ 
	  cout<<cum[i]<<" ";
   	}

	int count=0;
	
	j=0;
	k=0;
	
	cout<<endl<<"THe sorted array is ";
	
	int x[n];
	while(1)
      {   
         if(j==n)
           { 
              break;
           }
	  
		
    	      if(count<cum[j])
 		 {
			
	      	   	cout<<j<<" ";
			count++;
 		 }
		
 
	 if(count==cum[j])
	   {
		j++;
		
	   }
      }



     
   }


};




int main()
{
 
 class sort s;
 
 int n,i;
 cout<<"Enter the value of n ";
 cin>>n;
 float d[n];
int x1[n],x2[n];
 for(i=0;i<n;i++)
	{
	  int p1,p2;
	  cout<<"Enter the points ";
	  cin>>x1[i]>>x2[i];
		p1=x1[i];
		p2=x2[i];
	   d[i]=sqrt(p1*p1 + p2*p2);

	} 

  for(i=0;i<n;i++)
	{
	  cout<<d[i]<<" ";
	
	}

  s.counting(n,d);

 return (0);

}
