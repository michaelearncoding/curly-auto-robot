#include <iostream>
#include "mylib.h"
#include <iostream> // 引入输入输出功能
using namespace std;
// using namespace std; 是一种简化写法，它允许你直接使用 std 命名空间中的标识符，
// 而无需每次都写 std:: 前缀。例如，使用 cout 而不是 std::cout。
// 不过，建议尽量避免使用 using namespace std;，尤其是在大型项目中，以防止命名冲突。


// Possibly unused #include directive - 修改了cmakelist之后，就可以正常编译了
//> 不需要写 code/mylib.h，因为已经在 CMake 里加了 include 路径。


int main() {
    std::cout << "Hello, World!" << std::endl;
    int age;
    cout << "Enter your age: ";   // 输出不换行
    cin >> age;                   // 输入（遇到空格/换行就结束）
    cout << "You are " << age << " years old." << endl;
    return 0;
}

//
// 总结对比
// C++：需要手动用#ifndef ... #define ... #endif来保护头文件，防止重复定义。
// Python：解释器自动管理模块导入，不会重复导入同一个模块，无需手动保护。
