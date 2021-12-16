#ifndef monitor_h
#define monitor_h

//#define OpenCV_View_MAP

//#include <opencv2/opencv.hpp>
//#include <opencv2/plot.hpp>
// #include <eigen3/Eigen/Core>
// #include <eigen3/Eigen/QR>

//#include <Eigen-3.3/Eigen/Core>
//#include <Eigen-3.3/Eigen/QR>

#include <iostream>
//#include "coordinate.h"

#include <sys/time.h>
#include <unistd.h>

// Mutex
//extern pthread_mutex_t mutex_lock;
//    pthread_mutex_init(&mutex_lock, NULL);

class TimeChecker
{
private:
    // loop time calc
    bool elapsedTime_toggle_flag;
    bool start_flag;
    struct timeval t1, t2;

protected:
public:

    // Sys loop time checker
    std::string name;
    // loop time calc
    float final_elapsed_time;
    float elapsed_time_accum;
    float elapsed_time;

    // loop time calc
    // return -> elapsed_time
    float LoopTimeCalc();


    // Section time calc
    float DeparturePointTime();
    float ArrivalPointTime();

    TimeChecker();
    virtual ~TimeChecker();
};


#endif /* monitor_h */
