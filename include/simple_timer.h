#ifndef SIMPLE_TIMER_H_
#define SIMPLE_TIMER_H_

#include <chrono>

class SimpleTimer {

public:
    SimpleTimer(const std::chrono::microseconds interval);
    SimpleTimer(const std::chrono::milliseconds interval);
    SimpleTimer(const std::chrono::seconds interval);

    bool is_expired();
    void set_interval(const std::chrono::microseconds interval);
    void set_interval(const std::chrono::milliseconds interval);
    void set_interval(const std::chrono::seconds interval);

private:
    std::chrono::microseconds interval_;
    std::chrono::high_resolution_clock::time_point target_;

};

#endif // SIMPLE_TIMER_H_