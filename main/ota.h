#ifndef OTA_H
#define OTA_H


// esta versión debe aumentar en el nuevo firmware
#define FIRMWARE_VERSION "v1.0.0"

// IP real borrada
#define OTA_URL "http://X.X.X.X:8080/api/v1/klh54um68i6q1u9wsmh1/firmware?title=IOT_LAMP&version=1.0.1"

void ota_start();

#endif