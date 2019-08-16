// This program prints the number under 1000 which is multipliable by 3 or 5 and prints the sum of the numbers.

#include<iostream>
int main(){
  int a[100];
  int sum=0;
  for (int i=1;i<1000;i++){
    if (i % 3==0 || i % 5==0){
      *a = i;
      sum = sum + i;
      std::cout << "Numbers are " << *a << '\n';
    }
  }
  std::cout << "Sum is " << sum << '\n';
}
