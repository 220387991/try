#IFNDEF I2C_H_
#DEFINE I2C_H_
#include <stdint.h>
#include <RM.h>
void StartI2C();
void StopI2C();
void SendByte(uint8_t data);
uint8_t RecieveAck();
void SendData(uint8_t data);
#ENDIF