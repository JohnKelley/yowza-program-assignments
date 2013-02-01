#include <iostream>

using namespace std;

int main()
{
 // 
const double ACCELL_TIME = 10;
const double SECONDS_IN_HOUR = 3600;
double start_time, end_time ;

cout << "What is your start speed?";
cin >> start_time;
cout << "What is your ending speed?";
cin >> end_time;

cout << "The starting speed was: " << start_time << endl;
cout << "The ending speed was: " << end_time << endl;

cout<< "Acceleration in miles per second is: " <<
        ((end_time / SECONDS_IN_HOUR) - 
         (start_time / SECONDS_IN_HOUR)) / ACCELL_TIME << endl;


    return 1;
}
