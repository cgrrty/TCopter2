#include "ImuSystem.h"
#include "MiddleSensor.h"

#define IMU_SY_CONF_ACCEL_GYRO_UPDATE_FREQ 250  //hz

#define IMU_SY_CONF_MAGNET_UPDATE_FREQ 50  //hz

ImuSensor imusy_sensor;



int imu_system_init(void){
	
	return 0;
}

void imu_system_startCalibrate(void){
	
	
	 
}

void imu_system_saveAccelOffset(uint16_t *offset){

}

void imu_system_saveGyroOffset(uint16_t *offset){

}

void imu_system_saveMagnetoffset(float matrix[3][3],float *vector){

}

int imu_system_update(void){
	
	
	return 0;
}




void imu_system_getAccel(float *out){

}

void imu_system_getGyro(float *out){

}

void imu_system_getMagnet(float *out){

}

