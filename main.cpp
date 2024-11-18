#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void Func1()
{

}

void Func2(vector<string> &my_vector)
{
    my_vector = {"1", "2", "3"};
    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << endl;
    }
}

void Func3(vector<string> &my_vector)
{
    ofstream outfile;
    outfile.open("vector.txt");
    if (outfile.is_open())
    {
        for (int i = 0; i < my_vector.size(); i++)
        {
            outfile << my_vector[i] << endl;
        }
    }
}

int main()
{
    vector<string> my_vector;
    Func1();
    Func2(my_vector);
    Func3(my_vector);
}
