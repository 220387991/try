#include<stdint.h>
void StartI2C(){
    SDA_High();
    SCL_High();
    SDA_Low();
}
void StopI2C(){
    SDA_Low();
    SCL_High();
    SDA_High();
}
void SendByte(uint8_t data){
    int i=0;
    for(i=0;i<8;i++){
        if(data & 0x80){
            SDA_High();
        }
        else{
            SDA_Low();
        }
        SCL_Low();
        data<<=1;
    }
}
uint8_t RecieveAck(){
    uint8_t ack=0;
    SCL_High();
    ack=SDA_Read();
    SCL_Low();
    return ack;
}
void SendData(uint8_t data){
    StartI2C();
    SendByte(data);
    RecieveAck();
    StopI2C();
}