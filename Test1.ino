const int clockPin = 8; // 定义时钟信号引脚
const int signalHigh = 1; // 代表高电平的值
const int signalLow = 0; // 代表低电平的值

void setup() {
  pinMode(clockPin, OUTPUT); // 设置引脚为输出模式
  Serial.begin(9600); // 开始串口通信
}

void loop() {
  digitalWrite(clockPin, HIGH); // 设置引脚为高电平
  Serial.println(signalHigh); // 通过串口发送高电平信号
  delay(500); // 500微秒的延迟

  digitalWrite(clockPin, LOW); // 设置引脚为低电平
  Serial.println(signalLow); // 通过串口发送低电平信号
  delay(500); // 500微秒的延迟
}
