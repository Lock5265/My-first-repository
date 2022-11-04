#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () 
{
 
 short Max_value = 6;
 short Min_value = 1;

 srand(time(0));

 short Random_Number_1 = (rand() % (Min_value - Max_value + 1)) + Min_value;
 short Random_Number_2 = (rand() % (Min_value - Max_value + 1)) + Min_value;
 cout << Random_Number_1 << Random_Number_2;

 return 0;

}
