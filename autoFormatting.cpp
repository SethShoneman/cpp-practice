#include <iostream>
#include <string>
using namespace std;
int main() {
  
  // hold the entire text, as well as the individual word added each time
  string story;
  string word;
  // run condition
  int x = 0;
  // number of current sentence  
  int y = 0;
  
  // only allow writing for a specific number of sentences 
  int n;
  cout << "Enter the number of sentences: ";
  cin >> n;
  while (y < n){
    
    // word count for sentence    
    int a = 1;
    
    // continuing taking in words until breaking    
    while (x == 0){
      string s = " ";
      cin >> word;
      // if beginning of sentence, then capitalize first word  
      if (a == 1){
        word[0] = toupper(word[0]);
      }
      // if end of sentence punctuation found, begin new sentence      
      if (word == "." || word == "?" || word=="!"){
        story = story + word;
        cout << "     " << story << endl;
        y = y + 1;
        break;
      }
      // if comma or semicolon, don't put space before next word      
      if (word == ","){
        s = ",";
        word = "";
      }
      if (word == ";"){
        s = ";";
        word = "";
      }
      
      // some simple punctuation and capitalization typos that the program will handle
      // hi, I'm in the program      
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
      
      // add new word and print story so far       
      story = story + s + word;
      cout << "     " << story << endl;
      a = a + 1;
    }
  }
  
}
