void TaskAnalogRead(void *pvParameters)  // This is a task.
{
  //ACTION
  Serial.begin(9600);
  for (;;)
  {
    sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    vTaskDelay(100);  // one tick delay (15ms) in between reads for stability
  }
}
