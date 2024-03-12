#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
  if(n<=0){
    cout<<"N must be greater than zero."<<endl;
    exit(1);
  }
    int n1 = n / 100; // Number of 100s
    int mod1 = n % 100;
    int n2 = mod1 / 10; // Number of 10s
    int mod2 = mod1 % 10;
    int n3 = mod2; // Number of 1s

    cout << "100 ke note " << n1 << " chiye or 10 ke note " << n2 << " chiye or 1 ke note " << n3 << " chiye" << endl;

    return 0;
}
