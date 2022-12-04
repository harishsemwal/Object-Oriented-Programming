// Inheritace :: When one class Ocupies the properties of onother class that is known as 
// inheritance.

    #include <iostream>
    using namespace std;

    class student1
    {
        private:
            string name;
            string univ;
        public:
            void getData()
            {
                cout << "Enter The name: " << endl;
                cin >> name;

                cout << "Enter The University: " << endl;
                cin >> univ;
            }
            void displays()
            {
                cout << name << " " << univ << endl;
            }
    };

    class student2 : public student1
    {
        private:
            int roll_no;
            int marks;
        public:
            void getsData()
            {
                getsData();
                cout << "Enter The roll number: " << endl;
                cin >> roll_no;
                
                cout << "Enter The marks: " << endl;
                cin >> marks;
            }

            void display()
            {
                displays();

                cout << roll_no << " " << marks << endl;
            }

    };

    int main()
    {
        student2 obj1;
        obj1.getData();
        obj1.display();
    }