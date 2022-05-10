#define SIZE 10
#include <iostream>
#include <string.h>
using namespace std;
int main(void){

 int i, *ip;
 int n;

  cout<<"How many numbers?";
  cin>>n;
  ip=new int[n]; // ip=a[10];
  
  for(i=0;i<n;i++) {
    *ip= 2*i+1;
     ip++;
  }
  /*
i=0 --> 1
i=1. -->3
i=2 --> 5
i=3 --> 7

i=7 --> 15
i=8 --> 17
i=9 --> 19

*/
  ip-=n;
   //ip=&a[0];
   
  for(i=0;i<n;i++) {
    cout<<ip[i]<<endl;
    /* *(ip+i) */
    
  }

  //cout<<*ip<<endl;
  delete [] ip;
  return 0;
}
