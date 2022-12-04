// Hybrid inheritance in c++

#include <iostream>
using namespace std;


class student
{
    protected:
        int roll_number;
    public :
        void get_rollnumber(int roll)
        {
            roll_number = roll;
        }

        void put_rollnumber()
        {
            cout << "roll number: " << roll_number << endl;
        }
};

class test : public student
{
    protected:
        float part1 , part2;
    public: 
        void get_marks(float X, float Y)
        {
            part1 = X;
            part2 = Y;
        }

        void put_marks()
        {
            cout << "Part1-: " << part1 << endl;
            cout << "Part2-: " << part2 << endl;
        }
};

class sports
{
    protected:
        float score;
    public: 
        void get_score(float score)
        {
            this->score = score;
        }

        void disp_score()
        {
            cout << "score: " << score << endl;
        }
};

class result : public test, public sports
{
    float total;
    public:
        void display(void);
};

void result :: display()
{
    total = part1 + part1 + score;

    put_rollnumber();
    put_marks();
    disp_score();

    cout << "The Total score is: " << total << endl;
}

int main()
{
    result player;
    player.get_rollnumber(24);
    player.get_marks(100,100);
    player.get_score(100);

    player.display();
}