#include <iostream>
//int main(){
//    std::cout << "Hello, World" << std::endl; // practice 1.3
//    std::cout << "/*";
//    std::cout << std::endl;
//    std::cout << "*/";
//    std::cout << std::endl;
//    // std::cout << /* "*/" " */; //错误
//    std::cout << /* "*/" /* "/*" */; //合法
//    std::cout << std::endl;
//    return 0;
//}

//******************** practice 1.16 *******************

int main(){
    int value = 0;
    int sum = 0;
    while(std::cin >> value){
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
}