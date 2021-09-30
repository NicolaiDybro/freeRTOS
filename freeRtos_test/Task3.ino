void TaskBlink2(void *pvParameters)  // This is a task.
{
  //ACTION
  pinMode(12, OUTPUT);
  for (;;) // A Task shall never return or exit.
  {
    digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
    vTaskDelay( 400 / portTICK_PERIOD_MS ); // wait for one second
    digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
    vTaskDelay( 400 / portTICK_PERIOD_MS ); // wait for one second
  }
}
