/*Exercise from Ch2 of Gaddis C++ text, page 84
  */

#include <iostream>
using namespace std;

int CAN_COVERAGE = 340; // sq. ft. covered by one gallon

int main() {
  int numOfCoats = 0;
  double spaceHeight = 0, spaceLength = 0;
  double area = 0;
  cout<<"What is the height of space being painted in feet? ";
  cin>>spaceHeight;
  cout<<endl;
    
  cout<<"What is the length of space being painted in feet? ";
  cin>>spaceLength;
  cout<<endl;

  area = spaceHeight*spaceLength;

  cout<<"How many coats of paint? ";
  cin>>numOfCoats;
  cout<<endl;
  
  cout<<area*numOfCoats/CAN_COVERAGE;
}