#include <iostream>
#include "mylib.h"
// Possibly unused #include directive - 修改了cmakelist之后，就可以正常编译了
//> 不需要写 code/mylib.h，因为已经在 CMake 里加了 include 路径。


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//
// 总结对比
// C++：需要手动用#ifndef ... #define ... #endif来保护头文件，防止重复定义。
// Python：解释器自动管理模块导入，不会重复导入同一个模块，无需手动保护。
