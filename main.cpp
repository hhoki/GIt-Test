#include <iostream>
using namespace std;

int sum(int factor);

int main(){
  int user_number = 0;
  cout << "Hello!\n";
  cout << "Please enter a number: ";
  cin >> user_number;
  cin.get();
  int user_number_sum = 0;
  user_number_sum = sum(user_number);
  cout << user_number << "'s Sum from 1 to " << user_number << "\n: "<< user_number_sum << endl;
  return 0;
}

int sum(int factor){
  int sum = 0;
  for(int i = 0; i<=factor; i++){
    sum += i;
  }
  return sum;
}
