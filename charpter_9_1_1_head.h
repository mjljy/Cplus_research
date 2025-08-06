// coordin.h -- structure templates and function prototypes
// structure templates
#ifndef COORDIN_H_  // #ifndef   后面会跟着一个宏定义的标识符，通常是头文件的宏保护符（通常是头文件名称的大写形式，用下划线替换文件名中的点号）
#define COORDIN_H_

struct polar
{
    double distance;    // distance from origin
    double angle;        // direction from origin
};
struct rect
{
    double x;        // horizontal distance from origin
    double y;        // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
