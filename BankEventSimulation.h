//
// Created by ethan on 4/26/2019.
//

#ifndef BANKING_SIM_SIMULATION_H
#define BANKING_SIM_SIMULATION_H


#include <queue>
#include "Event.h"
#include "ClientInstance.h"
struct LessThanByTime
{
    bool operator()(const csc232::Event& lhs, const csc232::Event& rhs) const
    {
        if (lhs.getEventTime() == rhs.getEventTime()) {
            if (lhs.getEventType() == 'D') {
                return true;
            } else {
                return false;
            }
        } else {
            return lhs.getEventTime() > rhs.getEventTime();
        }
    }
};

class BankEventSimulation {
    private:
        int timer;
        std::priority_queue<csc232::Event*, std::vector<csc232::Event>,LessThanByTime> eventQueue;
        std::queue<std::string> queue;
    public:

        void runSimulation();
        BankEventSimulation(const std::vector<csc232::ClientInstance>& v);

};


#endif //BANKING_SIM_SIMULATION_H
