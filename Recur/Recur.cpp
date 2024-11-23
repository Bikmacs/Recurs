
#include <iostream>
using namespace std;

bool equal(int N, int S) {

    if (N == 0) {
        return S == 0;
    }

    S -= N % 10;
    N /= 10 ;
    return equal(N, S);
}

int main()
{
    setlocale(0, "rus");
    int N = 0;
    int S = 0;
    std::cout << "Введите N";
    std::cin >> N;
    std::cout << "Введите S";
    std::cin >> S;
    if (equal(N, S)) {
        std::cout << "Сумма " << N << " равна " << S << std::endl;
    }
    else {
        std::cout << "Сумма цифр числа " << N << " не равна " << S << std::endl;
    }
    return 0;
}


struct Pers
{

};


