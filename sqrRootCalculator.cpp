#include <iostream>
using namespace std;

// calculate the square root of a given double
// return the predection after a certain number of algoritmic revisions
// input needs to be a number when taken in as user entry
double mysqrtfunc(double a){
  
  // initialize variables b and c for use of Babylonian method of square root calculation of a
  double b = a+1;
  double c = a+2;
  b = ((1+a/1)/2);
  
  // number of times to rerun algorithm
  double end = 999999;
  int count = 0;
  
  // continuously run algorithm until it has run a large amount of times to assure accuracy of prediction 
  while (count < end){
    c = ((b+a/b)/2);
    b = c;
    count = count + 1;
  }
  // return final calculation
  return(c);
}

// main for user interface
// prints out final calculated square root of given number
int main(void) {
  
  // take in a number, and begin calculation  
  double n;
  cout << "Enter a number: ";
  cin >> n;
  double o = mysqrtfunc(n);
  
  // display the final calculated value   
  cout << "The square root of " << n << " is " << o;
}
