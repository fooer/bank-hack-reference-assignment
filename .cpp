#include <iostream>

//using namespace std honestly just to make writing the program easier
using namespace std;

//prototyping
 
 //for original
void originalTransaction(int firstTransfer, int secondTransfer);

//for ref
void swapScoreByRef(int& firstTransfer, int& secondTransfer);

// main function to pass everything through
int main() 
{
  //title of project
  cout << "Hacking the bank" << endl;

//both original values
  int TerroristAcc = 2500;
  int yourAccount = 0;
  
 
  //displays values
  cout << "\n\n\t\tTerrorist account balance is " << TerroristAcc <<endl ;

  cout << " \n\n\t\tYour bank account balance is " << yourAccount << endl;

  
  cout << "Terrorist account succesfully transfered money " << endl;
  cout << "Authorization completed" << endl;

//refers to function originalTransaction 
  originalTransaction(TerroristAcc, yourAccount);

//adding the money in now
  cout << "\n\n\t\tTerrorist account balance is " << TerroristAcc + 5034  << endl ;
  cout << " \n\n\t\tYour bank account balance is " << yourAccount << endl;

  cout << "switching terrorist and your account " << endl;
  cout << "Authorization completed" << endl; 
//the magic happens here when it refers to my ref that swaps the values
  swapScoreByRef(TerroristAcc, yourAccount);

  cout << "\n\n\t\tTerrorist account balance is " << TerroristAcc <<endl ;

  cout << " \n\n\t\tYour bank account balance is " << yourAccount + 5034 << endl;
  system("pause");
  return 0;
}
//a demonstration to show that adding money works
void originalTransaction (int firstTransfer, int secondTransfer)
{

  //temp value called tempShift to hold the value as it passes essentially

  int tempShift = firstTransfer;

  firstTransfer = secondTransfer;

  secondTransfer = tempShift;


}

void swapScoreByRef  (int &firstTransfer, int &secondTransfer) 
{
  //does the exact same as before except it swaps the values 
  int tempShift = firstTransfer;
  
  firstTransfer = secondTransfer;

  secondTransfer = tempShift; 
  

}
