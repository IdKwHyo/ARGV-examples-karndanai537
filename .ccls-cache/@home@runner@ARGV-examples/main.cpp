#define SIZE 10
#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char   **argv){
 
 int i;
 cout<<"My number of arguments input is "<<argc<<endl;
 int N=argc-1;
 int * a=new int[N];
	for(i=0;i<N;i++) {
			    a[i]=atoi(argv[i+1]);
		         cout<< "a[" << i <<"]="<< a[i]<<endl;
		}
   delete[] a;

  return 0;
}
