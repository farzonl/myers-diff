#include <iostream>
#include <string>
#include "myersDiff.hpp"

int main(int argn, char** args) {
    std::string one{"Hello test"};
    std::string two{"Hola text"};
    std::pair<string, string> results = Diff::compute(one, two);
    cout << results.first << " | " << results.second << std::endl;

    return 0;
}
