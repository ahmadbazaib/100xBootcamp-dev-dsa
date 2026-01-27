#include<iostream>
using namespace std;

int main()
{ 
  int length, breadth, area, perimeter;

  // cout << "Enter Length and breadth of Rectangle: "; // will create error as first line printed should be Area = 35
  cin >> length >> breadth;

  area = length * breadth;
  perimeter = 2 * ( length + breadth);

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter;

  return 0;
}