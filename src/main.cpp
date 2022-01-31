#include <iostream>
#include <sstream>
#include <Calc.hpp>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        std::cerr << "Wrong argument count.\nUsage: calc op a b"
                  << std::endl;
        return 1;
    }
    std::string opString(argv[1]);
    std::stringstream aStream(argv[2]), bStream(argv[3]);
    int a,b, ret;
    if (aStream >> a && bStream >> b)
    {
        if(opString.compare("add") == 0)
            ret = Calc::add(a,b);
        else if (opString.compare("sub") == 0)
            ret = Calc::sub(a,b);
        else
        {
            std::cerr << "Invalid operation. Use either 'add' or 'sub'."
                      << std::endl;
            return 1;
        }
        std::cout << ret << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Provide two NUMBERS." << std::endl;
        return 1;
    }
}
