#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void Func1(vector<string> &my_vector)
{
    ifstream in;
    in.open("text.txt");
    if (in.is_open())
    {
        while (!in.eof())
        {
            string s;
            in >> s;
            my_vector.push_back(s);
        }
    }
    /*for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << endl;
    }*/
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
    Func1(my_vector);
    Func2(my_vector);
    Func3(my_vector);
}
