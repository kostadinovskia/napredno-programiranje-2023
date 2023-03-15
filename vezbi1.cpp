#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[32] = {97,108,101,107,115,97,110,100,97,114,32,107,111,115,116,97,100,105,110,111,118,115,107,105,32,105,110,107,105,57,55,54};
   cout <<"Input list ...\n";
   for(i = 0; i<32; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<32; i++) {
   for(j = i+1; j<32; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<32; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}