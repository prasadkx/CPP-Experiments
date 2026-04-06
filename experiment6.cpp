
#include <iostream> // Header file for input and output
using namespace std;
// Class definition
class Sample
{
private:
 int a, b; // Private data members
public:
 // Constructor to initialize values
 Sample(int x, int y)
 {
 a = x; // Assign value to a
 b = y; // Assign value to b
 }
 // Friend function declaration
 friend void showData(Sample s);
};
// Friend function definition
void showData(Sample s)
{
 // Accessing private members of class
 cout << "Value of a = " << s.a << endl;
 cout << "Value of b = " << s.b << endl;
 cout << "Sum = " << (s.a + s.b) << endl;
}
// Main function
int main()
{
 // Create object of Sample class
 Sample obj(10, 20);
 // Call friend function
 showData(obj);
 return 0; // End of program
}
