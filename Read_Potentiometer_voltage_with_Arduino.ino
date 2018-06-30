void setup()

{
Serial.begin(9600);
}



void loop(){

  int sensorValue = analogRead(A0); //პოტენციომეტრის შუა ფეხი უერთდება a0 პინს არ შეგეშალოთ თორე შეიძება დაიწვას პოტენციომეტრი 
  // ასევე გაითვალისწინეთ რომ მიღებული შედეგი უნდა გარდაქმნათ რადგან ის მოდის 0 დან 1023 ჩათვლით შესაბამისად თქვენ მიღებული შედეგი უნდა გაამრავლოთ 5 ზე და გაყოთ 1023 ზე რომ მიიღოთ შედეგი  (0 - 5V) 
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print("Voltage =");//ბეჭდავს შედეგს  "Voltage ="
  Serial.print(voltage);
  Serial.print(" sensorValue =");//ბეჭდავს შედეგს  "sensorValue ="
  Serial.print(sensorValue);
  Serial.println();
  delay(300);

}



