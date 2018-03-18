#include<iostream>
#include<string.h>

using namespace std;

class x
{
  public:

  void check()
   {
     int n;
     cout<<"Enter the value of n ";
     cin>>n;
     char a[n];
     cout<<"Enter the string "<<endl;
     cin>>a;
     int m;
     cout<<"Enter the value of m ";
     cin>>m;
     char b[m];
     cout<<"Enter the string "<<endl;
     cin>>b;

     int i=0,j=0,flag=0,size;
     int comparisons;
  
     size=strlen(b);
 
     while(i<=size || j<n)
     {
        if(a[j]==b[i])
         {
 	   i++;
	   j++;	
		if(i==size)
			{
				flag=1;
                          	break;
			}
         }  
	else
	{
          j++;
        }
      comparisons++;
     }
    cout<<"The sum of N+M comparisons are "<<m+n<<endl;
    if(flag==1)
    {
	cout<<"YES It is a substring and the number of comparisons are "<<comparisons<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

   }


};

int main()
{ 
  class x s;

  s.check();

}

