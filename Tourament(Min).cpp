#include<iostream>

using namespace std;
int m;
int na[100];
class ForNoReasonWhatever{

   public:
 

 /*void tournamentmax(int n1, int a1[])
   {
 
     int i,j; 
      
      while(m!=1)
    {
      j=0;
      m=n1/2;
      for(i=0;i<n1;i=i+2)
      {
         if(a1[i]<a1[i+1])
          { 
              a1[j]=a1[i+1];
               j++;   
          }
         else
          {
             a1[j]=a1[i];
               j++;
          }
      }
      for(i=0;i<m;i++)
      {
        cout<<a1[i]<<" ";
      }
      cout<<endl;
        n1=m;
        
        
    }

   }*/


  void tournamentmin(int n, int a[])
  {

	 int i,j; 
      
      while(m!=1)
    {
      j=0;
      m=n/2;
      for(i=0;i<n;i=i+2)
      {
         if(a[i]>a[i+1])
          { 
              a[j]=a[i+1];
               j++;   
          }
         else
          {
             a[j]=a[i];
               j++;
          }
      }
      for(i=0;i<m;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
        n=m;
        
        
    }




  }

};






int main()
{
  class ForNoReasonWhatever x;
  int n,n1;
  cout<<"Enter the number of elements of the order 2^k :";
  cin>>n;
   n1=n;
  int a[n];
  int a1[n1];
  cout<<"Enter the elements of the array ";
  
  int i;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
   for(i=0;i<n;i++)
  {
    a1[i]=a[i];
  }



   cout<<"The min of the array is"<<endl;
   x.tournamentmin(n,a);
   
 

   cout<<"The max of the array is"<<endl;
   x.tournamentmax(n1,a1);
   
 
}
