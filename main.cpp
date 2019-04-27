

#include <iostream>
#include "BankEventSimulation.h"
#include "ClientInstance.h"
#include <cstdlib>
#include <fstream>
#include <iostream>


int main() {

    std::vector<csc232::ClientInstance> v;

    v.push_back(csc232::ClientInstance{20, 6});
    v.push_back(csc232::ClientInstance{22, 4});
    v.push_back(csc232::ClientInstance{23, 3});
    v.push_back(csc232::ClientInstance{30, 3});


    BankEventSimulation sim = BankEventSimulation{v};
    sim.runSimulation();
    return 0;
}