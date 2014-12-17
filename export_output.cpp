#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  // output file
  ofstream out ("output.txt");
  // to create a file for input: ifstream in("input.txt");
  
  // Use ofstream like cout
  out << "Hello World\n";
  cout << "I wrote data to the file\n";
 // ifstream is just like cin:

  out.close();
 return 0;
}
