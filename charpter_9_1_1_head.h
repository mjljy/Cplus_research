// coordin.h -- structure templates and function prototypes
// structure templates
#define charpter_9_1_1_XXXX 100
#ifndef charpter_9_1_1_head_H_  // #ifndef   后面会跟着一个宏定义的标识符，通常是头文件的宏保护符（通常是头文件名称的大写形式，用下划线替换文件名中的点号）
#define charpter_9_1_1_head_H_

struct polar910
{
    double distance;    // distance from origin
    double angle;        // direction from origin

};
struct rect910
{
    double x;        // horizontal distance from origin
    double y;        // vertical distance from origin
};

// prototypes
polar910  rect_to_polar910(rect910 xypos);
void show_polar910(polar910 dapos);

#endif
