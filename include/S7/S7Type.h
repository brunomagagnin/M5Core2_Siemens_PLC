#ifndef S7TYPE_H
#define S7TYPE_H
#include <Arduino.h>
#include "..\lib/Settimino/Settimino.h"
#include "..\lib/Settimino/Platform.h"
#include "Settimino.h"


class S7Type{

private:
virtual void S7Execute() const = 0;

protected:
static S7Helper helper;

public:
S7Type();

};

#endif