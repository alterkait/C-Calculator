#include <iostream>
#include <math>

void add();
void subtract();
void multiply();
void divide();

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
      //Voids for Options//
      case 1:
        add();
        break;
      case 2:
        subtract();
        break;
      case 3:
        multiply();
        break;
      case 4:
        divide();
        break;
        
        cin.get
    }

}

void add()
{
  double n1, n2;
  float ans;
  cout << "Enter the first number to add" << endl;
  cin >> n1;
  
  cout << "Enter the second Number" << endl;
  cin >> n2;
  
  ans = n1 + n2;
  
  cout << n1 << " + " << n2 << " = " << ans << endl;
  
  main();
}

void subtract();
{ 
  double n1, n2;
  float ans;
  cout << "Enter the first number to subtract: " << endl;
  cin >> n1;
  
  cout << "Enter the Second Number: " << endl;
  cin >> n2;
  
  ans = n1 - n2;
  
  cout << n1 << " - " << n2 << " = " << ans << endl;
  main();
}

void multiply();
{
  double n1, n2;
  float ans;
  cout << "Enter the first number to Multiply: " << endl;
  cin >> n1;
  
  cout << "Enter the second number: " << endl;
  cin >> n2;
  
  ans = n1 * n2;
  
  cout << n1 << " X " << n2 << " = " << ans << endl;
  main();
}

void divide();
{
  double n1, n2;
  float ans;
  cout << "Enter the first number to Divide: " << endl;
  cin >> n1;
  
  cout << "Enter the second number: " << endl;
  cin >> n2;
  
  ans = n1 / n2;
  
  cout << n1 << " divided by " << n2 << " = " << ans << endl;
  main();
}







