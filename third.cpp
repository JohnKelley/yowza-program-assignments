
#include <iostream>

using namespace std;

int main()
{
 //4 cents for nuts and 6 cents for bolts
// Ask user for the number of bolts and nuts in their purchase and then calculate and print out total cost
//Have program check order and if there are more bolts than nuts have program output "Check the order!"  Otherwise, have program output "Order is OK".

 
double nuts, bolts;

cout << "How many bolts are in your order?";
cin >> bolts;
cout << "How many nuts are in your order?";
cin >> nuts;

if (bolts > nuts) cout << "Check the order!" << endl;
if (nuts > bolts) cout << "Order is OK." << endl;
cout << " Total Cost:" << (nuts * .04) + (bolts * .06) << endl;






    return 1;

}  

  
