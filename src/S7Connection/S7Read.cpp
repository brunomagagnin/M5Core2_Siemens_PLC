#include "S7Connection/S7Read.h"

// int ReadArea(int Area, uint16_t DBNumber, uint16_t Start, uint16_t Amount, void *pUsrData);

S7Read::S7Read(int Area, uint16_t DBNumber, uint16_t Start, uint16_t Amount, void *pUsrData)
{
    this->Area = Area;
    this->DBNumber = DBNumber;
    this->Start = Start;
    this->Amount = Amount;
    this->pUsrData = pUsrData;
    this->value = 0;
}

void S7Read::Execute()
{
   this->value = client.ReadArea(this->Area, this->DBNumber, this->Start, this->Amount, this->pUsrData);
}

int S7Read::getValue(){
    return this->value;
}
