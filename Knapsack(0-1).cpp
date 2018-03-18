#include<iostream>

using namespace std;

class knap
{


 public:

void sort(int size , int value[], int memory[])
{
	int i,j;
	int temp,temp1;
	int value1[size];
	int memory1[size];

	for(i=0;i<size;i++)
	{
		value1[i]=value[i];
		memory1[i]=memory[i];
	}	
	
	for(i=0;i<size;i++)
	  {
		for(j=i+1;j<size;j++)
		  {
		    if(value1[i]>value1[j])
			{
			  temp=value1[i];
			  value1[i]=value1[j];
			  value1[j]=temp;
 
  			  temp1=memory1[i];
			  memory1[i]=memory1[j];
			  memory1[j]=temp1;
				
			}
		  }	
	  }

	i=0;

	for(int j=size-1;j>=0;j--)
	   {
		value[i]=value1[j];
		memory[i]=memory1[j];
		i++;
	   }
}


int knapsack(int max,int value[],int memory[],int size)
	{
	
	 int profit=0;
	 int i=0;
	  while(1)
	  {
 		if(max<=0 || i==size)
		{
		  break;
		}
   		if(max-memory[i]>=0)
		{
	 		profit=profit+value[i];
			max=max-memory[i];
		}		
		i++;
		
	  }

	  cout<<"The maximum value that can be inserted is "<<profit;
	
	}

};

int main()
{
  
  class knap obj;

 int size;

 cout<<"Enter the number of tasks ";
 cin>>size;

 int value[size];

 cout<<"Enter the value of the task ";
  
 for(int i=0;i<size;i++)
	{
	  cin>>value[i];
	}

 int memory[size];

 cout<<"Enter the memory consumed by the tasks ";
 
 for(int i=0;i<size;i++)
	{
	  cin>>memory[i];
	}


  int max; 

 cout<<"Enter the size of the RAM ";
 cin>>max;


   obj.sort(size,value,memory);
   obj.knapsack(max,value,memory,size);
	
return 0;	
}
