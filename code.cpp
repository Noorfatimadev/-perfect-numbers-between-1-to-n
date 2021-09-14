#include <iostream> 
#include <cctype>
using namespace std; 

int main(){

  int n,i,sum;
  int mn,mx;
  cout<<"Input the starting range or number : ";
  cin>>mn;
 cout<<"Input the ending range of number : ";
  cin>>mx;
  cout<<"The Perfect numbers within the given range : ";
  for(n=mn;n<=mx;n++)
  {
    i=1;
  for(i=1;i<=n;i++) 
  {
      if(n%i==0)
         cout<<i<<",";  
          i++;
    }
    
    
  
    
}
return 0;}
