#include <iostream>
#include <ctime>
#include <vector>
#include <memory>
#include "bulk.h"

int main(int argc, char const *argv[]) {

    long N = atoi(argv[1]);


    bulk::CommandLine cml(N);
    bulk::CoutObserver ob(&cml);
    bulk::LogObserver lo(&cml);


    std::string line;
    while(std::getline(std::cin, line)){
        cml.setCommnand(line);
    }

    return 0;
}
