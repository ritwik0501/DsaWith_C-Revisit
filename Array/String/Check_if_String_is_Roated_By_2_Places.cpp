#include <iostream>
using namespace std;

void clockwise(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}
void anti_clockwise(string &s)
{
    char c = s[0];
    int index = 1;
    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

int main()
{
    string st1 = "amazon";
    string st2 = "onamaz";
    string rotateclockwise = st1;
    string rotate_anticlockwise = st1;
    clockwise(rotateclockwise);
    clockwise(rotateclockwise);
    if (st2 == rotateclockwise)
    {
        cout << "clockwise " << rotateclockwise;
    }
    else
    {
        anti_clockwise(rotate_anticlockwise);
        anti_clockwise(rotate_anticlockwise);
        if (st2 == rotate_anticlockwise)
        {
            cout << "AntiClockwise " << rotate_anticlockwise;
        }
        else
        {
            cout << "none of this";
        }
    }
}