#include <iostream>

std::string &trim(std::string &str,const std::string &delim=" \f\n\r\t\v")
{
	str.erase(str.find_last_not_of(delim)).erase(0,str.find_first_not_of(delim));
    return str;
}

int main()
{
    int state = 1;
    std::string comm;
    // while (state)
    // {
    //     std::getline(std::cin,comm);
    //     std::cout << "comm "<< comm << std::endl;
    //     if (comm == "EXIT" || std::cin.eof)
    //         state = 0;
    //     /* code */
    // }
    std::string line; 
    while (std::getline(std::cin, line))
    {
        std::cout << "|" << trim(line) << "|" <<std::endl;
    }
    return 0;
}