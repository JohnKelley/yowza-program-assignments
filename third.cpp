
#include <iostream>

using namespace std;

int main()
{
 //Use waistsize and weight to compute necksize(3 x weight divided by waistsize)// Use waistsize and weight to compute hatsize(necksize divided by 2 and 1/8)
// Use waistsize an weight to compute shoesize(50 x waistsize divided by weight)

 
double waistsize ;
double weight ;
double necksize = 3 *  weight /  waistsize ;

cout << "What is your weight?";
cin >> weight;
cout << "What is your waist size?";
cin >> waistsize;


cout << "Necksize is: " << 3 * weight/waistsize << endl;
cout << "Hatsize is: " <<( 3*weight/waistsize) / 2.125 << endl;
cout << "Shoesize is: " << (50 * waistsize / weight) << endl;




    return 1;

}  

  
