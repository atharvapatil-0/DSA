#include <iostream>
using namespace std;
class college
{
    string name;
    int age;
};
class student : public college
{
    int marks;
    student(string name, int age, int marks)
    {
        cout << name << age << marks << endl;
    }
} int main()
{
    student s1("arahan", 19, 99)
}
