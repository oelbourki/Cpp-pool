#include "Data.hpp"

void * serialize(void)
{
    char *data = new char[21];
    std::string alpha_num = "0123456789abcdefghijklmnopqrstuvwxyzACBDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = -1;
    while (++i < 8)
        data[i] = alpha_num[rand() % 62];
    i = 7;
    while (++i < 12)
        data[i] = rand() % 256 - 128;
    i = 11;
    while (++i < 20)
        data[i] = alpha_num[rand() % 62];
    data[i] = '\0';
    std::cout << "serialized data" << data << std::endl;
    return reinterpret_cast<void*>(data);
}


Data * deserialize(void * raw)
{
    Data * data = new Data;
    char *ptr = reinterpret_cast<char*>(raw);
    int i = -1;
    while (++i < 8)
        data->s1 += ptr[i];
    data->n = ptr[8];
    i = 11;
    while (++i < 20)
        data->s2 += ptr[i];
    return data;
}














int main()
{
    void * ptr = serialize();

    Data * data = deserialize(ptr);

    std::cout << "after deserialize" << std::endl;
    std::cout << "s1 "<< data->s1 << std::endl;
    std::cout << "n "<< data->n << std::endl;
    std::cout << "s2 "<< data->s2 << std::endl;
    return 0;
}