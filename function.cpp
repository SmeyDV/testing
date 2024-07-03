#include <iostream> 

using namespace std;

int loop(int num1 , int num2){
  int sum = 0;

  for (int i = num1 ; i < num2; i++ ) {
    sum += i;
  }
  return sum;
}

int main(){
  int a = 0;
  int b = 10;
  int total_loop = loop(a,b);
  cout << "(" << a << "," <<b << ") = " << total_loop << endl;

  
}