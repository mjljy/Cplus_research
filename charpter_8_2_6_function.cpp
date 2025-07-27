//filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);

const int LIMIT = 5;

int main826()
{
    ofstream fout;
    const char* fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your  telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];

    cout << "Enter the focal lengths, in mm, of " << LIMIT
        << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }
    //file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done\n";
    // cin.get();
    // cin.get();
    return 0;
}

void file_it(ostream& os, double fo, const double fe[], int n)
{
    // save initial formatting state

    ios_base::fmtflags initial;
    /* 初始化 
    flags	-	新的格式设置。它可以是 formatting flags 常量的组合。
    os.setf  flags, mask	-	新的格式设置。 
    mask 定义哪些标志可以更改， flags 定义应设置哪些要更改的标志（其他标志将被清除）。这两个参数可以是 formatting flags 常量的组合
    我们需要理解std::ios_base::fmtflags。这是一个枚举类型，用于表示一组标志，
    这些标志可以独立地开启或关闭。
    通过组合这些标志，我们可以定制流的行为。例如，我们可以设置整数以十六进制还是十进制显示，或者设置浮点数的小数点后的位数
    https://developer.baidu.com/article/details/2834338
    接下来，我们看看如何使用setf函数。这个函数允许我们设置std::ios_base::fmtflags的值，从而改变流的行为。
    setf可以设置多个标志，并且可以与清除标志的操作（使用unsetf函数）一起使用，以实现更精细的控制。
    让我们通过一个例子来演示这些概念。假设我们想将一个整数以十六进制的形式输出到控制台

    std::cout << std::hex << 255 << std::endl; // 默认情况下，输出应该是 0xff
    std::cout.setf(std::ios_base::hex); // 设置流的格式为十六进制
    std::cout << 255 << std::endl; // 这次输出应该是 0xff



    ios_base::fixed

    */

    

    //initial = os.setf(ios_base::fixed, ios_base::floatfield); 
    initial = os.setf(ios_base::fixed);  // 返回调用它之前 有效的所有格式化设置  fmtflags  用来存储这种信息所需要的数据类型名称
    /* 
    *如同以调用 str.setf(std::ios_base::fixed, std::ios_base::floatfield)，设置流 str 的 floatfield 为 fixed
    *将对象至于使用定点表示法
    *fixed 是浮点数的默认显示表示法
    */
    //cout << "initial=" << initial << endl;

    os.precision(0);
    /*
    * 类型 std::streamsize 是用于表示 I/O 操作中转移字符数或 I/O 缓冲区大小的有符号整数类型。它被用作 std::size_t 的有符号对应，类似 POSIX 类型 ssize_t 。
    * 
    * std::setprecision 是一个操纵符，用于设置输出流中浮点数的精度，即表示小数部分显示的位数。它接受一个整数参数 n，
    指示输出时最多应显示的小数位数。请注意，这并不包括整数部分的位数，也不保证能完全精确地表示原始浮点数的所有有效数字，因为浮点数的内部表示可能存在舍入误差

    precision()函数设置或返回当前要被显示的浮点变量的位数
    ————————————————
    版权声明：本文为CSDN博主「telllong」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
    原文链接：https://blog.csdn.net/CHNIM/article/details/137042697

    函数 width()返回当前的宽度。可选择参数w用于设定宽度大小。宽度是指每一次输出中显示的字符的最小数目

    https://www.cnblogs.com/zhi321/p/12048617.html

    https://tvm-book.readthedocs.io/zh-cn/stable/chaos/topics/numeric/fixed-point.html

    https://www.cnblogs.com/CYL1103/p/12371311.html



    */
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);// 将对象置于显示小数点的模式，即使小数部分为0
    os.precision(1);// 指定显示多少为小数 假定对象处于定点模式下  所有这些设置都将保持一直不变
    os.width(12);// 设置 下一次输出操作使用的字段宽度
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }
    // restore initial formatting state
    os.precision(initial); // 最后恢复初始的格式
}
