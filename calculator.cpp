// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
  int a,b;
  cout<<"enter value of a";
  cin>>a;
  cout<<"enter value of b";
  cin>>b;
   char c;
  cout<<"what you want to perform ";
  cin>>c;
  
  switch(c){
      case '+': cout<<(a+b)<<endl; break;
      case '-': cout<<(a-b)<<endl; break;
      case '*': cout<<(a*b)<<endl; break;
      case '/': cout<<(a/b)<<endl; break;
      case '%': cout<<(a%b)<<endl; break;
  }
  
  
  
    return 0;
}