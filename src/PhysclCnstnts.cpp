#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::Size OMP_SCRN_SIZE = cv::getWindowImageRect(cv::getWindowProperty("dummy", 0));
    cv::Mat ERTH_SRFCE = cv::imread("erth_srfce.jpg");

    double R_EQTR_ERTH = 6.378E6;    // [m]
    double R_POLR_ERTH = 6.356E6;    // [m]
    double OMEGA_ERTH = 4.178E-3;    // [deg/s]
    double MU_ERTH = 3.986E14;       // [m^3/s^2]
    double J2_ERTH = 1.08263E-3;     // [unitless]

    // Your C++ code here...

    return 0;
}
