#ifndef EXCEPTIONSFROMDES_H
#define EXCEPTIONSFROMDES_H
/*
 *
 * Prevent exceptions from leaving destructors
 * 条款08：别让异常逃离析构函数。
 * 1, 析构函数绝对不要吐出异常。如果一个被析构函数调用的函数可能抛出异常，析构函数应该捕获任何异常，
 * 然后吞下它们（不传播）或者结束程序
 * 2，如果客户需要对某个操作函数运行期间抛出的异常做出反应，那么class应该提供一个普通函数(而非在析构函数中)
 * 执行该操作
 */



#endif //EXCEPTIONSFROMDES_H
