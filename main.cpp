#include <iostream>
#include <math>

using namespace std;
int main()
{
  int choice;
  
  //Starting Text, for User input//
  cout << "1. Addition Calculation\n 2. Subtraction\n 3. Multiplication\n 4. Division\n" << endl;
  cin >> choice 
    
    //Establishes voids based on User's Choice//
    switch(choice)
    {
        //Creating Variables//
        double n1A, n2A;
        float ansA;
        double n1S, n2S;
        float ansS; 
        double n1M, n2M;
        float ansM;
        double n1D, n2D;
        float ansD;
        
      //Case for Addition//
      case 1:
        cout << "Enter a value for n1" << endl;
        cin >> n1A;
        cout<< "Enter a value for n2" << endl;
        cin >> n2A;
        
        ansA = n1A + n2A;
        cout << "The sum of" << n1A << " and " << n2A << " is " << ansA << endl;
          break;
     
        //Subtraction//
      case 2:
        cout << "Enter a value for n1" << endl;
        cin >> n1S;
        cout << "Enter a value for n2" << endl;
        cin >> n2S;
        
        ansS = n1S - n2S;
        cout << "The sum of" << n1S << " and " << n2S << " is " << ansS << endl;
          break;
        
        //Multiplication//
       case 3:
        cout << "Enter a value for n1" << endl;
        cin >> n1M;
        cout << "Enter a value for n2" << endl;
        cin >> n2M;
        
        ansM = n1M * n2M;
        cout << "The sum of" << n1M << " and " << n2M << " is " << ansM << endl;
          break; 
        
        //Division//
        case 4:
        cout << "Enter a value for n1" << endl;
        cin >> n1D;
        cout << "Enter a value for n2" << endl;
        cin >> n2D;
        
        ansS = n1D / n2D;
        cout << "The sum of" << n1D << " and " << n2D << " is " << ansD << endl;
          break;
          
    }
  
  return 0;
}
