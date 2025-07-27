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
    /* ��ʼ�� 
    flags	-	�µĸ�ʽ���á��������� formatting flags ��������ϡ�
    os.setf  flags, mask	-	�µĸ�ʽ���á� 
    mask ������Щ��־���Ը��ģ� flags ����Ӧ������ЩҪ���ĵı�־��������־��������������������������� formatting flags ���������
    ������Ҫ���std::ios_base::fmtflags������һ��ö�����ͣ����ڱ�ʾһ���־��
    ��Щ��־���Զ����ؿ�����رա�
    ͨ�������Щ��־�����ǿ��Զ���������Ϊ�����磬���ǿ�������������ʮ�����ƻ���ʮ������ʾ���������ø�������С������λ��
    https://developer.baidu.com/article/details/2834338
    �����������ǿ������ʹ��setf�������������������������std::ios_base::fmtflags��ֵ���Ӷ��ı�������Ϊ��
    setf�������ö����־�����ҿ����������־�Ĳ�����ʹ��unsetf������һ��ʹ�ã���ʵ�ָ���ϸ�Ŀ��ơ�
    ������ͨ��һ����������ʾ��Щ������������뽫һ��������ʮ�����Ƶ���ʽ���������̨

    std::cout << std::hex << 255 << std::endl; // Ĭ������£����Ӧ���� 0xff
    std::cout.setf(std::ios_base::hex); // �������ĸ�ʽΪʮ������
    std::cout << 255 << std::endl; // ������Ӧ���� 0xff



    ios_base::fixed

    */

    

    //initial = os.setf(ios_base::fixed, ios_base::floatfield); 
    initial = os.setf(ios_base::fixed);  // ���ص�����֮ǰ ��Ч�����и�ʽ������  fmtflags  �����洢������Ϣ����Ҫ��������������
    /* 
    *��ͬ�Ե��� str.setf(std::ios_base::fixed, std::ios_base::floatfield)�������� str �� floatfield Ϊ fixed
    *����������ʹ�ö����ʾ��
    *fixed �Ǹ�������Ĭ����ʾ��ʾ��
    */
    //cout << "initial=" << initial << endl;

    os.precision(0);
    /*
    * ���� std::streamsize �����ڱ�ʾ I/O ������ת���ַ����� I/O ��������С���з����������͡��������� std::size_t ���з��Ŷ�Ӧ������ POSIX ���� ssize_t ��
    * 
    * std::setprecision ��һ�����ݷ�����������������и������ľ��ȣ�����ʾС��������ʾ��λ����������һ���������� n��
    ָʾ���ʱ���Ӧ��ʾ��С��λ������ע�⣬�Ⲣ�������������ֵ�λ����Ҳ����֤����ȫ��ȷ�ر�ʾԭʼ��������������Ч���֣���Ϊ���������ڲ���ʾ���ܴ����������

    precision()�������û򷵻ص�ǰҪ����ʾ�ĸ��������λ��
    ��������������������������������
    ��Ȩ����������ΪCSDN������telllong����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
    ԭ�����ӣ�https://blog.csdn.net/CHNIM/article/details/137042697

    ���� width()���ص�ǰ�Ŀ�ȡ���ѡ�����w�����趨��ȴ�С�������ָÿһ���������ʾ���ַ�����С��Ŀ

    https://www.cnblogs.com/zhi321/p/12048617.html

    https://tvm-book.readthedocs.io/zh-cn/stable/chaos/topics/numeric/fixed-point.html

    https://www.cnblogs.com/CYL1103/p/12371311.html



    */
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);// ������������ʾС�����ģʽ����ʹС������Ϊ0
    os.precision(1);// ָ����ʾ����ΪС�� �ٶ������ڶ���ģʽ��  ������Щ���ö�������һֱ����
    os.width(12);// ���� ��һ���������ʹ�õ��ֶο��
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
    os.precision(initial); // ���ָ���ʼ�ĸ�ʽ
}
