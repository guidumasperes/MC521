#include <iostream>
#include <string>

int main() {
    int i, n, count;
    std::string str1;
    std::string str2("CD");

    std::cin >> n;
    count = n;
    std::cin >> std::ws;
    for(i = 0; i < n; i++) {
        getline(std::cin, str1);
        if(str1.find(str2) != std::string::npos) { //usa-se npos para ver se achou ou nao a string
            count--;
        }
    }
    std::cout << count << std::endl;
    return 0;
}