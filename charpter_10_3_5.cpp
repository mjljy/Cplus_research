// stock1.cpp Stock class implementation with constructors, destructor added
#include <iostream>
#include "charpter_10_3_5.h"

// constructors (verbose versions)
Stock1035::Stock1035()        // default constructor
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock1035::Stock1035(const std::string& co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called\n";
    company = co;

    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
            << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
// class destructor
Stock1035::~Stock1035()        // verbose class destructor
{
    std::cout << "====================================================!\n";
    std::cout << "Bye, " << company << "!\n";
    std::cout << "====================================================!\n";
}

// other methods
void Stock1035::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock1035::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
            << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock1035::update(double price)
{
    share_val = price;
    set_tot();
}

//void Stock1035::show()
//{
//    using std::cout;
//    using std::ios_base;
//    // set format to #.###
//    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//    std::streamsize prec = cout.precision(3);
//    
//    cout << "Company: " << company  << "  Shares: " << shares << '\n';
//    cout << "  Share Price: $" << share_val;
//    
//    // set format to #.##
//    cout.precision(2);
//    cout << "  Total Worth: $" << total_val << '\n';
//    
//    // restore original format
//    cout.setf(orig, ios_base::floatfield);
//    cout.precision(prec);
//}

void Stock1035::show() const

{
    using std::cout;
    using std::ios_base;
    cout << "const  **********************" << std::endl;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company << "  Shares: " << shares << '\n';
    cout << "  Share Price: $" << share_val;

    // set format to #.##
    cout.precision(2);
    cout << "  Total Worth: $" << total_val << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock1035& Stock1035::topval(const Stock1035 & s) const
{
    using std::cout;
    cout << "topval=================================" << std::endl;
    cout << "s.total_val="<< s.total_val << std::endl;
    cout << "total_val=" << total_val << std::endl;
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}


int main1035()
{
    {
        using std::cout;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        cout << "Using constructors to create new objects\n";
        Stock1035 stock1("NanoSmart", 12, 20.0);            // syntax 1
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        stock1.show();
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        Stock1035 stock2 = Stock1035("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
        cout << "Using a constructor to reset an object\n";
        stock1 = Stock1035("Nifty Foods", 10, 50.0);    // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        const Stock1035 stock3("Nifty Foods", 10, 50.0);    // temp object
        stock3.show();

    }
    std::cout << "Done\n";
    // std::cin.get();
    return 0;
}


int main1040()
{
    {
        using std::cout;
        
        Stock1035 stock1("NanoSmart", 12, 20.0);            // syntax 1
        stock1.show();

        Stock1035 stock2 = Stock1035("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();

        //const Stock1035 stock3("Nifty Foods", 10, 50.0);    // temp object
        cout << "XXXXXXX" << std::endl;
        //cout << "XXXXXXX" << stock2.total_val <<std::endl;
        stock1 = stock1.topval(stock2);
        cout << "XXXXXXX" << std::endl;
        stock2.show();



    }

    return 0;
}