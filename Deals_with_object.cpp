// returning object
// 3 X 3 matrix deal using friend function.
#include <iostream>
using namespace std;

class matrix
{
    int arr[3][3];
    public:
        void getData()
        {
            cout << "Enter The 9 number: " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> arr[i][j];
                }
            }
        }
        void display();
    friend matrix trncepose(matrix ref);
};

matrix trncepose(matrix m1)
{
    matrix m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2.arr[i][j] = m1.arr[j][i];
            //where m2 and m1 is an object and arr[][] is variable.
        }
    }
    return m2;
}


void matrix :: display()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << " ";
                }

                cout << endl;
            }
        }


int main()
{
    matrix mat1, mat2;
    mat1.getData();

    cout << "Matrix Element is: " << endl;
    mat1.display();

    mat2 = trncepose(mat1);
    
    cout <<"Trancepose Element: " << endl;
    mat2.display();
}
