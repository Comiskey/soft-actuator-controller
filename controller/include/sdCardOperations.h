#ifndef SD_CARD_OPERATIONS_H
#define SD_CARD_OPERATIONS_H

#include <SdFat.h>
#include <SPI.h>

extern unsigned long testStartTime;
extern char specificFileName[50];

bool initializeSDCard();
void closeSD();
bool createFile(const char* fileName);
bool openFile(const char* fileName);
int getNextFileIndex();
void logData(double pressure, double error, double integral, bool cycleComplete, unsigned long currentTime);
void syncData();


#endif
