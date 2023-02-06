#include<iostream>
using namespace std;

int main(){

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
  std::cout << food << "\n";
//   std::cout << &food << "\n";
  std::cout << ptr << "\n";
  
  return 0;

}
