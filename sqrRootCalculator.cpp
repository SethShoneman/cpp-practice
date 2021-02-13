#include <iostream>
using namespace std;
double mysqrtfunc(double a){
  double b = a+1;
  double c = a+2;
  int count = 0;
  b = ((1+a/1)/2);
  while (count < 999999){
    c = ((b+a/b)/2);
    b = c;
    count = count + 1;
  }
  return(c);
}
int main(void) {
  double n;
  cout << "Enter a number: ";
  cin >> n;
  double o = mysqrtfunc(n);
  cout << "The square root of " << n << " is " << o;
}
