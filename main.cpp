#include <iostream>
#include <boost/multi_array.hpp>
using namespace boost;
using namespace std;
int main() {
    multi_array<int,2> arr;
    arr.resize(extents[5][5]);
    int k=0;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           arr[i][j] =++k;
       }
   }
   cout<<arr.data()[6];

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
