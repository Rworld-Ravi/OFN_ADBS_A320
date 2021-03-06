
//;***************************************************************************
//;
//;        Copyright 2007 Avago Technologies Limited
//;    This code is provided by Avago Technologies as a reference.
//;     Avago Technologies makes no claims or warranties
//;    to this firmware's suitability for any application.
//;    All rights reserved. Patent Pending. 
//;
//;*************************************************************************** 

extern unsigned char spi_interrupted;
extern void spi_init(void);
extern void spi_write_byte(unsigned char data_in);
extern unsigned char spi_read_byte(void);
extern void spi_write_sensor(unsigned char addr, unsigned char data_in);
extern unsigned char spi_read_sensor(unsigned char addr);
extern void spi_write_sensor_int(unsigned char addr, unsigned char data_in);
extern unsigned char spi_read_sensor_int(unsigned char addr);

extern void spi_read_motionburst(unsigned char *motion, unsigned char *deltaX, unsigned char *deltaY, unsigned char *squal, unsigned char *shutterH, unsigned char *shutterL);



