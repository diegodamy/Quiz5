#include <iostream>
#include <vector>
#include <stdio.h>
#include <ctype.h>
using namespace std;

char DisplayWord (vector<char> word){ //Outputs word in order
  int size = word.size();
  vector<char>word1;

  cout << "Your word: ";
  for (int i = 0; i<word.size(); i++){
    cout <<  word[i];
  }
}

vector<char> DisplayWordReversed (vector<char> word){ //Outputs word in inverse order
  int size = word.size();
  vector<char>word2;
  cout << endl << "Reversed: ";

  for (int i = word.size()-1; i >=0; i--){
    cout <<  word[i];
  word2.push_back(word[i]);
  }
  return word2;  //Returns value od reversed word (vector)
}

char FindPalindrome (vector<char> word, vector<char> word2){ //Compares indices of tow vectors: normal word and inversed word
  int size = word.size();
  cout << endl;
  for (int i = 0; i<word.size(); i++){
    if (word[i] == word2[i]){
        return 1; //If elements of indices match, return true for palindrome
    } else{
      return 0;
    }
  }
}

int ConvertLowerUpper (){
  int i=0;
  char str[]="Test String.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar (tolower(c));
    i++;
  }
  return 0;
}


int main(){
char letter;

cout << "Please enter letter by letter."<< endl;
cout << "To stop enter dot: ." << endl;
vector<char> word;


cout << endl << "Please enter the letters:" << endl;

int i=0;
char c;

while (1){
  cin >> letter;

  if(letter == '.') {
    break;
  }
  letter = tolower(letter);
  word.push_back(letter);

  }

 DisplayWord(word);

 vector<char> v2 = DisplayWordReversed(word);

 if (FindPalindrome(word,v2) == 1){
   cout << "It is palindrome!" << endl;
 } else {
   cout << "It's not a palindrome." << endl;
 }

}
