#include <iostream>
#include <iomanip>
#include <cstring>
 
#define SIZE 10
using namespace std;
 
int main(){
  char *pa, *pb, temp;
  char a[SIZE];
  int i = 0, j;
  
  cout<<"Input string: ";
  cin.getline(a, SIZE);
 
  j = strlen(a);
  pa = &a[0];  
  pb = &a[j-1];
  
  cout<<"Original: ";
  for (int k=0; k < j; k++, pa++){
    cout<<setw(3)<< *pa;
  }

  
  pa = &a[0];
  for(int i = 0; i< j/2; i++){
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    i++;
    pa++;
    pb--;
  }
  
  pa = &a[0];
  cout<<endl<< "Reverse:  ";
  for (int k=0; k < j; k++, pa++){
    cout<<setw(3)<< *pa;
  }
  cout << endl;
}