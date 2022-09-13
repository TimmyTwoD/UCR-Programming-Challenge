/*

#include <iostream>
#include <string>

using namespace std; 


int main() {
  int n = 0;
  int m = 0;
  int ToadCounter = 0;
  string TrainCar;
  
  
  cin >> n;
  cin >> m;
  
  for ( int i = 0; i < n+1; i++)
  {
    getline(cin, TrainCar);

    for (int j = 0; j < TrainCar.length(); j++)
    {
      if (TrainCar.at(j) == 't')
      {
        ToadCounter++;
      }
    }

     TrainCar.erase(TrainCar.begin(), TrainCar.end());
  } 

  cout << ToadCounter;

  return 0;
 
}

*/
