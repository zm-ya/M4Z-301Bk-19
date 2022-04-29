#include <iostream>

namespace cf{

    template<class T>
    T max(T left, T right){
        return left > right ? left : right;
    }

}

int main(){

    int iNum = cf::max(5, 6);
    double dNum = cf::max(3.5, 1.2);
    char cNum = cf::max('a', 'b');
    long lNum = cf::max(10L, 15L);

    std::cout << "int " << iNum << std::endl;
    std::cout << "double " << dNum << std::endl;
    std::cout << "char " << cNum << std::endl;
    std::cout << "long " << lNum << std::endl;

  return 0;
}
