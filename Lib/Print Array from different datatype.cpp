//============================================================================
// Name        : Print.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

template <typename T>
class Array{
   public:
	Array(T array[], int arraysize)
	     : _array(new T[arraysize]), size(arraysize)
	{
	    std::copy(array, array+arraysize, _array);
	}

      ~Array(){
         delete[] _array;
      }
      void print(){
         for(int i=0; i<size; i++){
            cout<<_array[i]<<' ';
         }
      }
      private:
         T *_array;
         int size;
};

int main(){
   int array1[5]={1,2,3,4,5};
   Array<int> a(array1,5);
   a.print();

   float array2[5]={1.012, 2.324, 3.141, 4.221, 5.327};
   Array<float> b(array2,5);
   b.print();

   string array3[]={"Ch1","Ch2","Ch3","Ch4","Ch5"};
   Array<string> c(array3,5);
   c.print();

   return 0;

}
