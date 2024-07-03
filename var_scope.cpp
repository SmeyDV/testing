#include <iostream>

using namespace std; 

int factorial(int n){
  if (n == 0 || n == 1){
    return 1;
  }
 return n * factorial(n - 1);
 }

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int factorial_n = factorial(n);
  cout << "Factorial of " << n << " is " << factorial_n << endl;
  

}