// 预处理器编译指令#include
#include <iostream>

// 单行注释(C/C++,Recommended)
/**
 多行注释 （C 风格，Depressed）
 */

// main()被启动代码调用，而启动代码是由编译器添加到程序中的，是程序和操作系统之间的桥梁。该函数头描述的是main()和操作系统之间的接口.
//int main(){
int main(void){  // 变体：int main(void) 明确指出不接受任何参数。在C++（不是C）中，void与不加加void等价。
// void main(){ // 变体：void main()用void表示函数不返回任何值。该形式不是C++标准形式。在有些系统不能工作。
    // 编译指令using namespace
    using namespace std;
    
    cout << "Hi";
    cout << endl;   // start a new line
    cout << "Hello"<<endl;
    
    // 如何让窗口一直开着？
    cin.get();
    
    // return  statement : 返回语句
    return 0;// 在main()函数中，函数末尾没有返回语句，则自动添加该返回return 0; 这条隐含的返回语句只适用main()函数，不适用其他函数。
}
