#include<iostream>
using namespace std;
int main() {
int items = 5;
double cost_per_item = 10.1;
double total_cost = items * cost_per_item;
char currency = '$';

// Print variables
cout << "Number of items: " << items << "\n";
cout << "Cost per item: " << cost_per_item << currency << "\n";
cout << "Total cost = " << total_cost << currency << "\n";
return 0;
}