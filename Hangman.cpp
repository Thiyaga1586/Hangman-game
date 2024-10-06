#include<bits/stdc++.h>
#include "function.h"
using namespace std;
int main()
{
  int t=1;
  while(t!=0 and t<5) {
    greet(t);
    string codeword = getrandomword(t);
    string answer = "";
    for(int i=0;i<codeword.size()/2;i++) {
        answer+="_ ";
    }
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;
    while(codeword!=answer && misses<7)
    {
      display_misses(misses);
      display_status(incorrect,answer);
      cout<<"\t\tPlease enter your guess:";
      cin>>letter;
      letter=(char)tolower(letter);
      for(int i=0;i<codeword.size();i++) {
        if(letter==codeword[i]) {
          answer[i] = letter;
          guess = true;
        }
      } 
      if(guess) {
        cout<<"\nCorrect!\n";
      }
      else {
        cout<<"\nIncorrect!\n";
        if(count(incorrect.begin(),incorrect.end(),letter)==0) incorrect.push_back(letter);
        misses++;
      }
      guess = false;
    }
    if(codeword==answer) {
        t+=1;
        misses=0;
    }
    else t=0;
    conclusion(answer,codeword,t);
  }
  return 0;
}
