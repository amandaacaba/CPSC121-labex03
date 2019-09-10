#include <iostream>

int main() {

int age1 = 0;
int age2 = 0;

double price1 = 0.0;
double price2 = 0.0;

std::cout << "Welcome to HoliDeals at the Movies!\n";
std::cout << "Tickets tonight can only be bought in pairs.\n";
std::cout << "Here are our movie ticket deals:\n";

std::cout << "\nChildren - $10.00\n";
std::cout << "Young Adults - $13.00\n";
std::cout << "Adults - $15.00\n";
std::cout << "Seniors - $10.00\n";

std::cout << "\nPlease enter the age of the persom for the first guest: ";
std::cin >> age1;
std::cout << "Please enter the age of the person for the second guest: ";
std::cin >> age2;

if (age1 <= 13) {
  price1 = 10.00;
}
else if (age1 <= 21){
  price1 = 13.00;
}
else if (age1 < 65){
  price1 = 15.00;
}
else if (age1 >= 65){
  price1 = 10.00;
}

if (age2 <= 13) {
  price2 = 10.00;
}
else if (age2 <= 21){
  price2 = 13.00;
}
else if (age2 < 65){
  price2 = 15.00;
}
else if (age2 >= 65){
  price2 = 10.00;
}

double subtotal = price1 + price2;

std::cout << "The Subtotal for the ticket cost is: $" << subtotal;

}
