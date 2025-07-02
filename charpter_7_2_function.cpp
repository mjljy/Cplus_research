#include<iostream>
using namespace  std;

int demo72_1_1(int x);
void demo72_1();
void demo72_2();
void demo72_3();
void n_chars(char, int);
long double probability(unsigned numbers, unsigned picks);

int main72() {


	//demo72_1();
    //demo72_2();
    demo72_3();

	return 0;
}


void demo72_1() {

	int x = 3;
	int y = 0;

	cout << "demo72_1  x address: " << &x << endl;

	y = demo72_1_1(x);

	cout << "y=" << y << endl;


};

int demo72_1_1(int x) {

	cout << "demo72_1_1  x address: " << &x << endl;
	return x * x;
}



void demo72_2()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')        // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another character or press the  q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    // cin.get();
    // cin.get();
}

void n_chars(char c, int n) // displays c n times
{
    while (n-- > 0)         // continue until n reaches 0
        cout << c;
}



void demo72_3() {

    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
        "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);      // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
