#include<iostream>
using namespace std;
void ReferenceExample(int &refVar)
{
    refVar += 10;
}
void PointerExample(int *ptrVar)
{
    *ptrVar += 20;
}
void NothingChanged(int valVar)
{
    valVar += 30;
}
int main()
{
    int trail = 20;
    int *ptrtry = &trail;
    ReferenceExample(trail);
    cout << "After ReferenceExample: " << trail << endl; // Outputs 30
    PointerExample(ptrtry);
    cout << "After PointerExample: " << *ptrtry << endl; // Outputs 50
    NothingChanged(trail);
    cout << "After NothingChanged: " << trail << endl; // Outputs 50
    cout << "Plying with Pointers and References!" << endl;
    int a = 5;
    int *ptrr = &a;
    cout << ptrr << endl;      // Outputs the address of a
    cout << *ptrr << endl;     // Outputs 5
    return 0;
}