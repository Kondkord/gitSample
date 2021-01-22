#include <iostream>
#include <vector>
#include <map>
#include <set>

#include "fileapi.h"

#include <chrono>
#include <time.h>
#include <ctime>
#include <ratio>


template<typename... Types>
class B
{

};





static BOOL GetVolumeInformationA(
    LPCSTR  lpRootPathName,
    LPSTR   lpVolumeNameBuffer,
    DWORD   nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPSTR   lpFileSystemNameBuffer,
    DWORD   nFileSystemNameSize
    );

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

template<typename T>
class MyType {
public:
    T _b;
    MyType(T b) {_b = b;}
    T get() {return _b;}
};

template<template<typename> typename T>
class A
{
    private:
    
    public:
    int _n;
    T<int> _t;
    //A<T <int>> (int n) {_n = n;}
    A(T<int> n) {_t = n;}
    
};



void write(const char* buf, int size)
{
    ;
}

void foo( int& b)
{
    std::cout << b << std::endl;
}

int main()
{
    int a = 9;
    write(reinterpret_cast<char*>(&a),sizeof(a));
    char str[] = "Hello";
    write(str, sizeof(str));
    int c = static_cast<int>(3.9);
    //int b = reinterpret_cast<int>(4.1);
    std::cout << reinterpret_cast<long long int>(&a) 
                << std::endl;

    foo(a);

}