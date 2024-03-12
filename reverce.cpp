#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n ";
cin>>n;
int ans =0;
while(n!=0){
    
     int digits = n%10;
     ans = ans*10 + digits;
     n=n/10;

}
cout<<ans;
return 0;
}