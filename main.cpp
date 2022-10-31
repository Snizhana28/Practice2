/*Task 1. Write a program that creates a two-dimensional
array and fills it according to the following principle: user
enters a number (for example, 3) the first element of the array
takes the value of this number, the next element of the array takes the value of this number multiplied by 2
(i.e. 6 for our example), the third element of the array is
the previous element is multiplied by 2 (ie 6*2=12 for
our example). Display the created array on the screen.*/
#include <iostream>
using namespace std;

int main()
{
	 const int size = 5;
     int number, old;
     int arr[size][size];
     cout << "Enter number : ";
     cin >> number;
     for (size_t i = 0; i < size; i++)
     {
         for (size_t j = 0; j < size; j++)
         {
             if (i == 0 && j == 0)
             {
                 old = number;
                 arr[i][j] = old;
             }
             else
             {
                 old *= 2;
                 arr[i][j] = old;
             }
             cout << arr[i][j] << "\t";
         }
         cout << endl;
     }
	return 0;
}