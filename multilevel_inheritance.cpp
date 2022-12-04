// Multilevel inheritance

#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void get_number();
        void put_number();
};

class test : public student
{
    protected:
        float sub1;
        float subj2;
    public:
        void get_marks();
        void put_marks();
};

class result : public test
{
    private:
        float total;
    public:
        void display(void);
};

void student :: get_number()
{
    cout << "Enter The roll number: " << endl;
    cin >> roll_number;
}
void student :: put_number()
{
    cout << "The roll number of student is: " << roll_number << endl;
}
void test :: get_marks()
{
    cout << "Enter The marks of first subject: " << endl;
    cin >> sub1;

    cout << "Enter The marks of second subject: " << endl;
    cin >> subj2;
}
void test :: put_marks()
{
    cout << "The marks in first subject is: " << sub1 << endl;
    cout << "The marks in second subject isL " << subj2 << endl;

}
void result :: display()
{
    float sum = 0.0;
    sum = sub1 + subj2;

    cout << "The sum of all subject marks is: " << sum << endl;
}
int main()
{
    result std1;
    std1.get_number();
    std1.get_marks();
    
    std1.put_marks();
    std1.put_number();

    std1.display();
}