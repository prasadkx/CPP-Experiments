#include <iostream> // Header file for input and output operations
using namespace std; // Allows use of standard library names without std::
// Class definition
class Patient
{
private: 
int patientId; 
string patientName;
float billAmount; 
string appointmentDate; 
public:

Patient()
{
patientId = 0; 
patientName = "Not Assigned"; 
billAmount = 0.0; 
appointmentDate = "Not Fixed";
}
// Parameterized Constructor
Patient(int id, string name, float bill, string date)
{
patientId = id; // Assign value to patient ID
patientName = name; // Assign value to patient name
billAmount = bill; // Assign value to bill amount
appointmentDate = date;// Assign value to appointment date
}
// Copy Constructor
Patient(Patient &p)
{
patientId = p.patientId; 
patientName = p.patientName;
billAmount = p.billAmount; 
appointmentDate = p.appointmentDate;
}

void display()
{
cout << "\nPatient ID : " << patientId; 
cout << "\nPatient Name : " << patientName; 
cout << "\nBilling Amount : Rs. " << billAmount; 
cout << "\nAppointment Date : " << appointmentDate; 
cout << endl; 
}
};

int main()
{
Patient p1;
cout << "\n--- Default Constructor ---";
p1.display(); 

Patient p2(101, "Rahul Patil", 3500.50, "15-02-2026");
cout << "\n--- Parameterized Constructor ---";
p2.display(); 

Patient p3 = p2;
cout << "\n--- Copy Constructor ---";
p3.display();
return 0; 
}
