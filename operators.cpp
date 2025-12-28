#include<iostream>
using namespace std;
int main() {
// Arithmetic Operators
int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5

int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;

cout << peopleInRoom << "\n"; // 3

// 1 person leaves
peopleInRoom--;

cout << peopleInRoom << "\n"; // 2

//Assignment Operators
int savings = 100; 
savings += 50; // change + to - , * , / , % for other operations
cout << "Total savings: " << savings << "\n"; // 150

//Comparison Operators
int age = 18;

cout << (age >= 18) << "\n"; // 1 (true), old enough to vote
cout << (age < 18) << "\n";  // 0 (false)

// Logical Operators

bool a = true;
bool b = false;

// Logical AND
cout << "a && b = " << (a && b) << endl;

// Logical OR
cout << "a || b = " << (a || b) << endl;

// Logical NOT
cout << "!a = " << (!a) << endl;
cout << "!b = " << (!b) << endl;
// Combined example
int m = 5, n = 10;
cout << "((m < n) && (n > 0)) = " << ((m < n) && (n > 0)) << endl;
cout << "((m > n) || (m == 5)) = " << ((m > n) || (m == 5)) << endl;
cout << "!(m == n) = " << (!(m == n)) << endl;

//Precedence of Operators
int result1 = 2 + 3 * 4;     // 2 + 12 = 14
int result2 = (2 + 3) * 4;   // 5 * 4 = 20

cout << result1 << "\n";
cout << result2 << "\n";

return 0;
}