#include <iostream>

using namespace std;

int main()
{
 // convert rainfall inches to rainfall in milimeters
const double MM_IN_INCH = 25.4;
double inches;

cout << "How many inches of rain today?";
cin >> inches;
cout<<"THere was"<< inches * MM_IN_INCH << "mm of rain today."<<endl;


    return 0;
}

