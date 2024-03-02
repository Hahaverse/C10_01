//2023111359 �ְ���
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
    //��ȯ������
    operator int() const {
        return salary;
    }
    //friend �Լ� ����
    friend ostream& operator<<(ostream& os, const Employee& e);
};
//<<������ �����ε� �����Լ��� ����
ostream& operator<<(ostream& os, const Employee& e) {
    os << "ȫ�漭�� salary = " << e.salary << endl;
    return os;
}

int main() {
    Employee e1("ȫ�浿", 100);
    Employee e2("ȫ�漭", 110);

    int salary = e1;
    cout << "ȫ�浿�� salary = " << salary << endl;
    cout << e2 << endl;

    if (e1 > e2)
        cout << "ȫ�浿�� �޿��� ����" << endl;
    else
        cout << "ȫ�漭�� �޿��� ����" << endl;

    return 0;
}