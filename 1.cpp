#include <iostream>
#include <cmath>
int main()
{
    std::cout<<"Enter the number of variables ";
    int n = 0;
    std::cin >> n;

    float *arrayPtrA = new float [n];
    float *arrayPtrB = new float [n];
    float *arrayPtrZ = new float [n];
    float *arrayPtrX = new float [n];

     for ( int i = 0; i < n; i++)
     {
         std::cout << "Enter numbers for "<< i+1 <<" X\n" ;
         std::cout << "A = ";
         std::cin >> arrayPtrA[i];

         std::cout << "B = ";
         std::cin >> arrayPtrB[i];

         std::cout << "Z = ";
         std::cin >> arrayPtrZ[i];
     }

         float x = 0, y = 0;
         for (int i = 0; i < n; i++)
         {
         x = pow(arrayPtrA[i], 3) - arrayPtrB[i] + pow(arrayPtrZ[i], 2);
         y += x;

         }
         std::cout << "\ny = " << y << std::endl;

         delete arrayPtrZ;
         delete arrayPtrB;
         delete arrayPtrA;

    return 0;




}
