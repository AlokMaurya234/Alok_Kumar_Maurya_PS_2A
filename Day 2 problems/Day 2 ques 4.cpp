#include <iostream>
using namespace std;

int main() {
   char ch='A';
   int n;
   cin>>n;
   for(int i=1 ; i<=n ; i++)
   {    int count=0;
       for(int j=1 ; j<=i ; j++)
       {
           cout<<ch;
           ch++;
           count++;
       }
       ch=ch-count+1;
       cout<<endl;
   }

    return 0;
}
