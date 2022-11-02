#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	//setup I2C interface
	int ds3231;
	ds3231 = wiringPiI2CSetup(0x68);
	//mpu = wringPiI2CSetup(0x56);
	
	//read ds3231 time
	uint8_t sec, min, hour;
	sec = wiringPiI2CReadReg8(ds3231, 0x00);
	min = wiringPiI2CReadReg8(ds3231, 0x01);
	hour = wiringPiI2CReadReg8(ds3231, 0x02);
	printf("%x:%x:%x\n",hour,min,sec);
	
	
	
	return 0;
}
