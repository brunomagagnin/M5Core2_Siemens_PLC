#include <Arduino.h>

#include "..\lib/Settimino/Settimino.h"
#include "HELPERS/Split.h"
#include "DBAdress.h"


//db1.dbx0.0   db1.dbb0
void setup() {
    for(int a = 0; a < sizeof(DBAdress); a++){
        for(int b = 0; b < 3; b++){
            getPart::ofString(DBAdress[a], '.', b);
        }
    }
    
    getPart::ofString(DBAdress[0], '.', 0);

}

void loop() {

}

