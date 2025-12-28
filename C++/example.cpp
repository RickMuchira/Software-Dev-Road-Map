#include <iostream>

using namespace std;
int main(){

    auto totalItems= 13;
    auto priceItem = 7.66;
    auto currency = '$';
    auto totalCost = totalItems * priceItem;

    cout << "the total cost of the items is: "<<currency << totalCost<<"\n";
}