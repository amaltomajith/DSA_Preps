#include<iostream>
using namespace std;
struct student
{
    int id;
    int regno;
    student *next;

    student(int id, int regno)
    {
        this->id = id;
        this->regno = regno;
        this->next = nullptr;
    }
};
int main(){
    student * head = new student(1, 1001);
    student * second = new student(2, 1002);
    student * third = new student(3, 1003);
    head->next = second;
    second->next = third;
    third->next = nullptr;
    student * temp = head;
    while(temp != nullptr){
        cout << "ID: " << temp->id << ", RegNo: " << temp->regno << endl;
        temp = temp->next;
    }
    return 0;
    
}