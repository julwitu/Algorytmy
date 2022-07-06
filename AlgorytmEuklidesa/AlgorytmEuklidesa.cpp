// AlgorytmEuklidesa
#include <iostream>

class NWD {
protected:
    int a, b;
public:
    NWD(int _a, int _b) : a(_a), b(_b){};
    int findNWD() {
        int temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    virtual ~NWD() {};
};

class NWW : public NWD{
public:
    NWW(int _a, int _b) : NWD(_a, _b){};
    int findNWW() {
        return (a * b) / findNWD();
    }
};


int main()
{
    NWD nwd1(12, 18);
    NWD nwd2(50, 25);
    NWD nwd3(1, 1000);
    NWD nwd4(47, 18);
    std::cout << nwd1.findNWD() << std::endl;
    std::cout << nwd2.findNWD() << std::endl;
    std::cout << nwd3.findNWD() << std::endl;
    std::cout << nwd4.findNWD() << std::endl;
    

    NWW nww1(2, 3);
    NWW nww2(5, 10);
    NWW nww3(8, 6);
    NWW nww4(72, 180);

    std::cout << std::endl << std::endl;

    std::cout << nww1.findNWW() << std::endl;
    std::cout << nww2.findNWW() << std::endl;
    std::cout << nww3.findNWW() << std::endl;
    std::cout << nww4.findNWW() << std::endl;
}

