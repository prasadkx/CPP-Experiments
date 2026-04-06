#include <iostream> 
#include <iomanip> 
using namespace std;
class HotelBill
{
private:
int tableNo, items; 
string customerName; 
long long contact; 
float total, discount, payable; // Stores bill details
public:
void getCustomerDetails()
{
// Accept table number
cout << "Enter Table Number: ";
cin >> tableNo;
cin.ignore();
cout << "Enter Customer Name: ";
getline(cin, customerName);
// Accept customer contact number
cout << "Enter Customer Contact Number: ";
cin >> contact;
}

void getOrderDetails()
{
int qty; // Quantity of each item
float price; // Price of each item
total = 0; // Initialize total bill amount

cout << "\nEnter Number of Items Ordered: ";
cin >> items;

for (int i = 1; i <= items; i++)
{
cout << "\nItem " << i << " Quantity: ";
cin >> qty;
cout << "Item " << i << " Price: ";
cin >> price;
// Calculate total amount
total += qty * price;
}
}

void calculateBill()
{
// Apply discount based on total amount
if (total >= 2000)
discount = total * 0.20; // 20% discount
else if (total >= 1000)
discount = total * 0.10; // 10% discount
else
discount = 0; // No discount


payable = total - discount;
}
// Member function to display the final bill
void displayBill()
{
cout << "\n---------- HOTEL BILL ----------\n";
cout << "Table No : " << tableNo << endl;
cout << "Customer Name : " << customerName << endl;
cout << "Contact Number : " << contact << endl;
// Display bill amount with two decimal places
cout << fixed << setprecision(2);
cout << "Total Amount : Rs. " << total << endl;
cout << "Discount : Rs. " << discount << endl;
cout << "Payable Amount : Rs. " << payable << endl;
}
};
int main()
{
// Create an object of HotelBill class
HotelBill bill;
// Call member functions using object
bill.getCustomerDetails(); 
bill.getOrderDetails(); 
bill.calculateBill(); 
bill.displayBill();
return 0; // End of program
}
