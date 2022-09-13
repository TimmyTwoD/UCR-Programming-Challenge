#include <iostream>
#include <vector>
 
using namespace std; 
 
int main() {
  int Time;
  int UpperCheep;
  int LowerCheep;
  int a;
  int b;
  int c;
  int FinalScore = 0;
 
  vector<char> TotalScore;
 
  scanf ("%d", &Time);
  scanf ("%d", &UpperCheep);
  scanf ("%d", &LowerCheep);
 
  for (int i = 0; i < Time; i++)
  {
    TotalScore.push_back(0);
  }
 
  for (int i = 0; i < UpperCheep + LowerCheep; i++)
  {
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
 
    if (c == 1)
    {
      for (int i = a; i < b + 1; i++)
      {
        if (TotalScore.at(i) != 3)
        {
          TotalScore.at(i) = 3;
        }
      }
    } 
 
    else 
    {
      for (int i = a; i < b + 1; i++)
      {
        if (TotalScore.at(i) == 0)
        {
          TotalScore.at(i) = 1;
        }
      }
    }
 
}
  
  for (int i = 0; i < Time; i++)
  {
    FinalScore += TotalScore.at(i);
  }
 
  cout << FinalScore;
 
  TotalScore.clear();
 
  return 0;
 
}