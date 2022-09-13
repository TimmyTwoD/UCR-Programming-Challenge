/*

#include <iostream>

using namespace std; 


int main() {
  int n = 0;
  int m =0;
  int product1 = 0;
  int product2 =0;
  int roundCounter = 0;
  
  int combine1;
  int combine2;

  cin >> n;
  cin >> m;
  
  for (int i = 0; i < m; i++)
  {
    if (product1 < n || product2 < n)
    {
      roundCounter++;
    }

    cin >> combine1;
    cin >> combine2;

    product1 += (combine1 * combine2);

    cin >> combine1;
    cin >> combine2;

    product2 += (combine1 * combine2);

    if (product1 >= n || product2 >= n)
    {
      break;
    }

  } 

  if (product1 < n && product2 < n)
  {
    cout << "Oh no!";
  }

  else if (product1 >= n && product2 >= n)
  {
    cout<<"It's a tie at round "<<roundCounter<<"!";
   
  }
  else if (product2 < n)
  {
    cout << "Team 1 wins at round " <<roundCounter<<"!";
  }

  else if (product1 < n)
  {
    cout << "Team 2 wins at round " <<roundCounter<<"!";
  }

  return 0;
 
}


*/