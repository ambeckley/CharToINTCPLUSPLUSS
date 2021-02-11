#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
   char c;
   cout << "Input a Char: ";
   cin >> c;
   cout << static_cast<int>(c);
}