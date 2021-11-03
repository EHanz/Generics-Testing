#include <array>
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

template <typename T>
class Array
{
    private :
        T* arr_Ptr;
        int a_Size;

    public:
        Array (T arr[], int s);
        void print ();

};

template <typename T>
Array <T> :: Array (T arr [], int s)
{
    arr_Ptr = new T [s];
    a_Size = s;

    for (int i = 0; i < a_Size; i++)
    {
        arr_Ptr [i] = arr [i];
    }
}

template <typename T>
void Array <T> :: print ()
{
    for (int i = 0; i < a_Size; i++)
    {
        std :: cout << " " << * (arr_Ptr + i);
    }
    std :: cout << std :: endl;
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

    int arr_test [6] = {1, 2, 3, 4, 5, 6};
    Array <int> arr (arr_test, 6);
    arr.print ();
  
    return 0; 
}


