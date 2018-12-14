#include <string>


//===========================================================================
namespace CrossInheritance {

class Base1 {                // for overridden method checking
public:
    Base1() : m_int(42) {}
    Base1(int i) : m_int(i) {}
    virtual ~Base1();

    virtual int get_value() { return m_int; }
    static int call_get_value(Base1* b);

public:
    int m_int;
};

} // namespace CrossInheritance