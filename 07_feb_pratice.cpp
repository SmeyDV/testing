#include <iostream>

using namespace std;

int sum(int num1, int num2){
  int result = num1 + num2;

  return result;
}


int sub(int num1, int num2){
  int result = num1 - num2;

  return result;
}

int mul(int num1,int num2){
  int result = num1 * num2;

  return result;
}

int div(int num1,int num2){
  if (num2 == 0){
    cout << "Number can't be zero";
  }else {
    double result = num1 / num2;
  }

  return result;
}

int modl(int num1,int num2){
  int result = num1 % num2 == 0;

  return result;
}




int main(){
  int num1;
  int num2;
  int result;
  string input;
  cout << "Enter your first number: " << endl;
  cin >> num1;
  cout << "Enter your second number: " << endl;
  cin >> num2;
  cout << "Chose on (+,-,*,/)" << endl;
  cin >> input;
    if (input == "+"){
      int sum_result = sum(num1,num2);
      cout << "Total: "  << sum_result << endl;
    }

    if (input == "-"){
       int sub_result = sub(num1,num2);
       cout << "Total: " << sub_result << endl;
    }

    if (input == "*"){
       int mul_result = mul(num1,num2);
       cout << "Total: " << mul_result << endl;
    }

    if (input == "/"){
       double div_result = div(num1,num2);
       cout << "Total: " << div_result << endl;
    }
}