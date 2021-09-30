#include <Arduino_FreeRTOS.h>

// define two tasks for Blink & AnalogRead
void TaskBlink( void *pvParameters );
void TaskAnalogRead( void *pvParameters );
int sensorValue;

void setup() {
//            Taskname        "name"        Stacksize  Priority
  xTaskCreate(TaskBlink,      "Blink",      128, NULL, 2,  NULL );
  xTaskCreate(TaskAnalogRead, "AnalogRead", 128, NULL, 1,  NULL );
  xTaskCreate(TaskBlink2, "Blink2", 128, NULL, 3,  NULL );
}

void loop()
{
  
}
