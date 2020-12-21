#include <iostream>
using namespace std;

//returns the higher value
template <typename T>
T myMax (T x, T y)
{
    return (x > y) ? x : y;
}

//returns the lower value
template <typename T>
T myMin (T x, T y)
{
    return (x < y) ? x : y;
}

int main() 
{ 
  
    // Call myMax for int 
    cout << myMax <int> (3, 7) << endl; 
  
    // call myMax for double 
    cout << myMax <double> (3.0, 7.0) << endl; 
  
    // call myMax for char 
    cout << myMax <char> ('g', 'e') << endl; 

    //call myMin for float
    cout << myMin <float> (2.0, 4.0) << endl;

    //call myMin for int
    cout << myMin <int> (8, 3) << endl;
  
    return 0; 
} 