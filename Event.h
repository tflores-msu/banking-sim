//
// Created by ethan on 4/26/2019.
//

#ifndef BANKING_SIM_DEPARTUREEVENT_H
#define BANKING_SIM_DEPARTUREEVENT_H

namespace csc232{


    class Event {
    private:
        int eventTime;
        char eventType;
        int eventLength;
    public:
        char getEventType() const;
        int getEventTime() const;
        int getEventLength() const;
        Event(char type, int time);
        Event(char type, int time, int length);
    };

}
#endif //BANKING_SIM_DEPARTUREEVENT_H
