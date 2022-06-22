#ifndef __FDRS_TYPES_H__
#define __FDRS_TYPES_H__

#include <stdint.h>

typedef struct __attribute__((packed)) DataReading_t {
    float data;
    uint16_t id;
    uint8_t type;
    DataReading_t(): data(0.0),id(0),type(0){
    }
} DataReading_t;


typedef struct DataReadingBuffer_t{
    DataReading_t buffer[256];
    uint16_t len;

    DataReadingBuffer_t(){
        
    }

}DataReadingBuffer_t;

#endif