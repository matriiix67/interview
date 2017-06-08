#include <cstddef>

//题目：为CMyString类添加赋值运算符函数

class CMyString {
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    CMyString& operator=(const CMyString& rhs) {
        if(this != &rhs) {
            CMyString tmp(rhs);
            char* p = tmp.m_pData;
            tmp.m_pData = m_pData;
            m_pData = p;
        }

        return *this;
    }

    ~CMyString();
private:
    char* m_pData;
};
