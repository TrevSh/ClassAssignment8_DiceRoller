#include <iostream>
#include <cstdlib>      //Deals in generating random numbers. Contains rand().
#include <ctime>

int main()
{
    //Make numbers random by linking generator to time.
    //static_cast forces a data type to the type within brackets. The data affected is in parenthesis. In this case, its time!
    //More info on static_cast: https://www.geeksforgeeks.org/static_cast-in-cpp/.

    srand(static_cast<unsigned int>(time(0)));          //Seeding random number generator to prevent pseudorandom numbers (Same numbers again and again). Static_cast

    int randomNum = rand();     //generate random number. Naturally returns a number between 0 and 32767. Defined in cstdlib as RAND_MAX.

    int die = (randomNum % 6) + 1;      //get a number between 1 and 6
    std::cout << "You rolled a " << die << '\n';

    return 0;
}