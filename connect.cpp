#include "connect.h"
#include <QFile>
#include <QString>
#include <QByteArrayData>
//Tao khuon chung chua thay doi theo yeu cau . lan1 13/01/2023
connect::connect()
{
    QSerialPort serialPort;
///Chon thong so cho serialPort
    serialPort.setPortName("COM3"); // chon cong
    // chon toc do truyen
    serialPort.setBaudRate(QSerialPort::Baud9600);

    //Chon Bit du lieu
    serialPort.setDataBits(QSerialPort::Data8);

   //Chon kieu tin hieu co bat tay hay khong
    serialPort.setParity(QSerialPort::NoParity);

    //Chon so bit dung
    serialPort.setStopBits(QSerialPort::OneStop);

    //Chon kiem soat luong (HardwareControl/SoftwareControl/NoFlowControl)
    serialPort.setFlowControl(QSerialPort::NoFlowControl);

    //Chon kieu de doc/viet
    if (!serialPort.open(QIODevice::ReadWrite)){
        //code de ket noi doc viet
        return;
    }
    //File de luu du lieu thu duoc (dang nhi phan cho tien xu li thoi)
        QFile fileD("DataIn.bin");

    bool isRead  = true;

///Thao tac file voi serialPort

    if(isRead){
        //chuyen tu serialPort vao fileD
        if(fileD.open(QIODevice::WriteOnly)){
            while(serialPort.waitForReadyRead(1000)){
            QByteArray dataIn = serialPort.readAll(); //Doc va ghi tat ca vao mang dataIn
            fileD.write(dataIn);
            }
            fileD.close();
        }
    }
    else {
        //Chuyen Data tu fileD vao serialPort
        if(fileD.open(QIODevice::ReadOnly)){
            while(!fileD.atEnd()){
               QByteArray dataOut = fileD.read(1024); // so bit gui den serialPort
               serialPort.write(dataOut);
               serialPort.waitForBytesWritten(1000);  // cho 1000 milisecen cho den khi nhan duoc bit tiep theo
            }
            fileD.close();
        }
    }

    //
}
