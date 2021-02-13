#include <iostream>
#include <string>
using namespace std;
int main() {
  string story;
  string word;
  int x = 0;
  int y = 0;
  int n;
  cout << "Enter the number of sentences: ";
  cin >> n;
  while (y < n){
    int a = 1;
    while (x == 0){
      string s = " ";
      cin >> word;
      if (a == 1){
        word[0] = toupper(word[0]);
      }
      if (word == "." || word == "?" || word=="!"){
        story = story + word;
        cout << "     " << story << endl;
        y = y + 1;
        break;
      }
      if (word == ","){
        s = ",";
        word = "";
      }
      if (word == "seth"){
        word[0] = toupper(word[0]);
      }
      if (word == "cant"){
        word = "can't";
      }
      if (word == "wont"){
        word = "won't";
      }
      if (word == "shouldnt"){
        word = "shouldn't";
      }
      if (word == "dont"){
        word = "don't";
      }
      if (word == "i"){
        word = "I";
      }
      if (word == "sry"){
        word = "sorry";
      }
      if (word == "im"){
        word = "I'm";
      }
      story = story + s + word;
      cout << "     " << story << endl;
      a = a + 1;
    }
  }
  
}
