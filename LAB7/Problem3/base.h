#ifndef _BASE_
#define _BASE_
class Base{
    int num{};
    public:
    Base();
    Base(int);
    Base(const Base & obj);
    Base& operator=(const Base & obj);
    void printbase();
    ~Base();
};
#endif