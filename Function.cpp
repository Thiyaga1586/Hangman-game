#include<bits/stdc++.h>
#include "function.h"
using namespace std;
//define functions
void greet(int t)
{
  cout<<"==============================\n";
  cout<<"Hangman: Classic Word Game\n";
  cout<<"==============================\n";
  cout<<"Instructions: Save your friend from being hanged by guessing the word\n";
  cout<<"Round "<<t<<":\n";
}
string getrandomword(int t)
{
  vector<string> word = {"p i a n o ","w i s d o m ","a d d r e s s ","s i l e n c e "};
  vector<string> clue = {"I have many keys but cannot open any door.What am I?","I am not a coin, yet I am spent; when i grow less, you will find content.What am I?","What does a house wear?","What disappears as soon as you say its name?"};
  int index = t-1;
  cout<<"Clue : "<<clue[index]<<endl;
  return word[index];
}
void display_misses(int misses)
{
  if(misses==1)
  {
   cout << "   _____" << endl;
   cout << "  |     |" << endl;
   cout << "  |     O" << endl;
   cout << "  |" << endl;
   cout << "  |" << endl;
   cout << "  |" << endl;
   cout << "  |" << endl;
   cout << "__|__________"<<endl;
  }
  else if(misses==2)
  {
    cout << "   _____" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |     |" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "__|__________"<<endl;
  }
  else if(misses==3)
  {
    cout << "   _____" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |    /|" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "__|__________"<<endl;
  }
  else if(misses==4)
  {
    cout << "   _____" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |    /|\\" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "__|__________"<<endl;
  }
  else if(misses==5)
  {
    cout << "   _____" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |    /|\\" << endl;
    cout << "  |    /" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "__|__________"<<endl;
  }
  else if(misses==6)
  {
    cout << "   _____" << endl;
    cout << "  |     |" << endl;
    cout << "  |     O" << endl;
    cout << "  |    /|\\" << endl;
    cout << "  |    / \\" << endl;
    cout << "  |" << endl;
    cout << "  |" << endl;
    cout << "__|__________"<<endl;
  }
}
void display_status(vector<char> incorrect,string answer)
{
  cout<<"Incorrect Guesses : ";
  for(int i=0;i<incorrect.size();i++) {
    cout<<incorrect[i]<<" , ";
  }
  cout<<endl;
  cout<<"Codeword : ";
  for(int i=0;i<answer.size();i++) {
    cout<<answer[i];
  }
  cout<<endl;
}
void conclusion(string answer,string codeword,int t)
{
  if(answer==codeword)
  {
    cout<<"The answer is : "<<answer<<endl;
    cout<<"Well done!You have saved the person from being hanged!\n";
    cout<<"Congratulations!\n";
    cout<<"You are advanced to next round\n";
    if(t==5) cout<<"Congrats!!!You have won!!\n";
  }
  else
  {
    cout<<"On no!You failed to save the person!\n";
    cout<<"Maybe Try again!\n";
  }
}
