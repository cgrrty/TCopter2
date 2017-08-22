#ifndef POSITIONHOLDINGSYSTEM_H_
#define POSITIONHOLDINGSYSTEM_H_


void position_holding_system_init(void);

void position_holding_system_update(float *position,float *euler,float *accel,float *out);

void holding_position_system_reset();

#endif