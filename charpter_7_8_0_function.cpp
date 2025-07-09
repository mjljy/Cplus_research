//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
using namespace std;
const array<string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(array<double, Seasons>* pa);
void show(array<double, Seasons> da);
int main780()
{
    array<double, 4> expenses;
    fill(&expenses);
    show(expenses);
    // cin.get();
    // cin.get();
    return 0;
}

void fill(array<double, Seasons>* pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    cout << "Total: $" << total << '\n';
}
