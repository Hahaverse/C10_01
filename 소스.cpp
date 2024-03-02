//2023111359 최가윤
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;
public:
    Employee() {
        name = "Unknown";
        salary = 0;
    }

    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
    }
    //변환연산자
    operator int() const {
        return salary;
    }
    //friend 함수 예약
    friend ostream& operator<<(ostream& os, const Employee& e);
};
//<<연산자 오버로딩 전역함수로 정의
ostream& operator<<(ostream& os, const Employee& e) {
    os << e.name << "의 salary = " << e.salary << endl;
    return os;
}

int main() {
    Employee e1("홍길동", 100);
    Employee e2("홍길서", 110);

    int salary = e1;
    cout << "홍길동의 salary = " << salary << endl;
    cout << e2 << endl;

    if (e1 > e2)
        cout << "홍길동의 급여가 높다" << endl;
    else
        cout << "홍길서의 급여가 높다" << endl;

    return 0;
}
