#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

void Func2()
{

}

void Func3()
{

}

int main()
{
    vector<string> my_vector;
    Func1(my_vector);
    Func2();
    Func3();
}
