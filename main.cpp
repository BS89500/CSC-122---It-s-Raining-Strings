#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <limits>

#include "src/raining.hpp"
using namespace std;

int main() {
  // Your driver program goes here
  vector<string> businesses;
  string name;
  cout << "Welcome to the Business Sorting Program!" << endl;
  while (true) {
    cout << "Please enter the name of a business:";
    getline(cin, name);
    businesses.push_back(name);
    sort(businesses.begin(), businesses.end());
    cout << "You business(es) is(are): " << endl;
    for (string business : businesses) {
      cout << '\t' << business << endl;
    }
    cout << endl << "Do you wish to enter a new business?     ";
    string answer;
    cin >> answer;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (answer != "y" && answer != "Y" && answer != "yes"&& answer != "Yes") {
        break;
    }
  }
  cout << "Thanks for using the businness sorting program :)" << endl;
}
