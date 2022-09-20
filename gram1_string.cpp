# cpp. string에 대한 문법 정리.
/******************************************************************************
https://blockdmask.tistory.com/338

#include <string>

# 생성.
string str1 = "hello";
string str2("hello");
string str3(str1);

# 함수들.
str1.at(index), str1[index], str1.front(), str1.back().
str1.size(), str1.length(), str1.capacity()
str1.push_back(char), str1.pop_back(char)
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. generating string
    string str1("case1");  // 방법 1.
    string str2 = "case2"; // 방법 2.
    string str3(str2);     // 방법 3.
    
    cout << str1 << endl << str2 << endl << str3 << endl;
    
    // 2. index 접근. 
    // at은 범위 검사 및 error message. [] 는 범위 검사 x. 그래서 더 빠르지만, 안정성 떨어짐.
    cout << str1.at(4) << endl;
    cout << str1[4] << endl;
    
    cout << str2.front() << "   " << str2.back() << endl; // 맨 앞, 맨 뒤 값.

    // 3. size(), length(), capacity()
    cout << str2.size() << " " << str2.length() << " " << str2.capacity() << endl; // 맨 앞, 맨 뒤 값.
    
    // 4. push_back(), pop_back()
    cout << str1 << endl;
    str1.push_back('A'); // 문자 하나 더함.
    cout << str1 << endl;
    str1.push_back('B'); // 문자 하나 더함.     
    cout << str1 << endl;
    str1.pop_back();
    cout << str1 << endl; // 문자 하나 제거.
    str1.pop_back();
    cout << str1 << endl; // 문자 하나 제거.
    return 0;
}
