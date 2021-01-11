#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  i_error = i_error + cte;
  p_error = cte;
}

double PID::TotalError() {
  return -Ki*i_error - Kd*d_error - Kp*p_error;
}
