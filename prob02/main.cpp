#include <iostream>

int main() {

int height = 0;

std::cout << "You must be at least 55 inches to safely ride the TuffyTwister.\n";
std::cout << "Please enter your height in inches: ";
std::cin >> height;

if (height >= 55) {
  std::cout << "Congratulations! You are tall enough to ride!";
}
else {
  std::cout << "Safety is our first priority. Unfortunately, we can't let you ride yet.\n";
}

}
