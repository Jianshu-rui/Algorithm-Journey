#include <iostream>

class DateValidator {
private:
    // ����Ƿ�Ϊ����
    static bool isLeapYear(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }
    
    // ��ȡָ���·ݵ�����
    static int getDaysInMonth(int year, int month) {
        // ÿ���µ������������꣩
        const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (month == 2 && isLeapYear(year)) {
            return 29; // ����2����29��
        }
        
        return daysInMonth[month];
    }

public:
    // ��֤�����Ƿ�Ϸ�
    static bool isValidDate(int year, int month, int day) {
        // ��ݷ�Χ��� (����Χ,���Ը����������)
        if (year < 1 || year > 9999) {
            return false;
        }
        
        // �·ݼ��
        if (month < 1 || month > 12) {
            return false;
        }
        
        // ���ڼ��
        if (day < 1 || day > getDaysInMonth(year, month)) {
            return false;
        }
        
        return true;
    }
};

int main() {
    int year, month, day;
    
    std::cout << "���������� (�� �� ��): ";
    std::cin >> year >> month >> day;
    
    if (DateValidator::isValidDate(year, month, day)) {
        std::cout << year << "��" << month << "��" << day << "�� �ǺϷ�����" << std::endl;
    } else {
        std::cout << year << "��" << month << "��" << day << "�� ���ǺϷ�����" << std::endl;
    }
    
    // ����һЩ��������
    std::cout << "\n����һЩ�������ڣ�" << std::endl;
    std::cout << "2020��2��29��: " << (DateValidator::isValidDate(2020, 2, 29) ? "�Ϸ�" : "���Ϸ�") << std::endl;
    std::cout << "2021��2��29��: " << (DateValidator::isValidDate(2021, 2, 29) ? "�Ϸ�" : "���Ϸ�") << std::endl;
    std::cout << "2021��4��31��: " << (DateValidator::isValidDate(2021, 4, 31) ? "�Ϸ�" : "���Ϸ�") << std::endl;
    std::cout << "2021��6��30��: " << (DateValidator::isValidDate(2021, 6, 30) ? "�Ϸ�" : "���Ϸ�") << std::endl;
    
    return 0;
}