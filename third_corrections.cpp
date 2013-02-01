
#include <iostream>

using namespace std;

// Use waistsize and weight to compute necksize(3 x weight divided by waistsize)
// Use waistsize and weight to compute hatsize(necksize divided by 2 and 1/8)
// Use waistsize an weight to compute shoesize(50 x waistsize divided by weight)

int main(){

  double waist_size, weight, neck_size ;

  cout << "What is your weight?";
  cin >> weight;
  cout << "What is your waist size?";
  cin >> waist_size;

  neck_size = 3 * weight / waist_size;

  cout << "Necksize is: " << neck_size << endl;
  cout << "Hatsize is: " << neck_size / 2.125 << endl;
  cout << "Shoesize is: " << 50 * (waist_size / weight) << endl;

  return 1;
}  

  
