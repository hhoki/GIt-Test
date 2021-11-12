#include <iostream>
using namespace std;

int sum(int factor);
int product(int factor);
int main(){
  int user_number = 0;
  cout << "Hello!\n";
  cout << "Please enter a number: ";
  cin >> user_number;
  cin.get();
  int user_number_sum = 0;
  user_number_sum = sum(user_number);
  cout << user_number << "'s Sum from 1 to " << user_number << "\n: "<< user_number_sum << endl;
  int user_number_product = 0;
  user_number_product = product(user_number);
  cout << user_number << "'s Product from 1 to " << user_number << "\n: " << user_number_product << endl;
  return 0;
}

int sum(int factor){
  int sum = 0;
  for(int i = 1; i<=factor; i++){
    sum += i;
  }
  return sum;
}
int product(int factor){
  int product = 1;
  for(int i = 1; i<=factor; i++){
    product *= i;
  }
  return product;
}
