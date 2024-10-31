#ifndef AMBIENT_AIR_TEMPERATURE_H
#define AMBIENT_AIR_TEMPERATURE_H

#include "T_Ambient_Air_Temperature.h"

typedef struct {
    void (*Get_Temperature) ( T_Ambient_Air_Temperature* temperature );
} Ambient_Air_Temperature;

#endif
