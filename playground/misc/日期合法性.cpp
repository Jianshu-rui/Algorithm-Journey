#include <iostream>

class DateValidator {
private:
    // 检查是否为闰年
    static bool isLeapYear(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }
    
    // 获取指定月份的天数
    static int getDaysInMonth(int year, int month) {
        // 每个月的天数（非闰年）
        const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (month == 2 && isLeapYear(year)) {
            return 29; // 闰年2月有29天
        }
        
        return daysInMonth[month];
    }

public:
    // 验证日期是否合法
    static bool isValidDate(int year, int month, int day) {
        // 年份范围检查 (合理范围,可以根据需求调整)
        if (year < 1 || year > 9999) {
            return false;
        }
        
        // 月份检查
        if (month < 1 || month > 12) {
            return false;
        }
        
        // 日期检查
        if (day < 1 || day > getDaysInMonth(year, month)) {
            return false;
        }
        
        return true;
    }
};

int main() {
    int year, month, day;
    
    std::cout << "请输入日期 (年 月 日): ";
    std::cin >> year >> month >> day;
    
    if (DateValidator::isValidDate(year, month, day)) {
        std::cout << year << "年" << month << "月" << day << "日 是合法日期" << std::endl;
    } else {
        std::cout << year << "年" << month << "月" << day << "日 不是合法日期" << std::endl;
    }
    
    // 测试一些特殊日期
    std::cout << "\n测试一些特殊日期：" << std::endl;
    std::cout << "2020年2月29日: " << (DateValidator::isValidDate(2020, 2, 29) ? "合法" : "不合法") << std::endl;
    std::cout << "2021年2月29日: " << (DateValidator::isValidDate(2021, 2, 29) ? "合法" : "不合法") << std::endl;
    std::cout << "2021年4月31日: " << (DateValidator::isValidDate(2021, 4, 31) ? "合法" : "不合法") << std::endl;
    std::cout << "2021年6月30日: " << (DateValidator::isValidDate(2021, 6, 30) ? "合法" : "不合法") << std::endl;
    
    return 0;
}