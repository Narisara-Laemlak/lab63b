#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "LAB7";
const char* password = NULL;

IPAddress local_ip(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);

ESP8266WebServer server(80); // สร้างออปเจ็ค server เพิ่มเริ่มใช้งาน Web Server ที่พอร์ต 80

int cnt = 0;

void setup(void){ 
	Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

	WiFi.softAP(ssid, password); //ทำการ Connect SSID และ Pass
	WiFi.softAPConfig(local_ip, gateway, subnet);
	delay(1000); 

	server.onNotFound([]() {
		server.send(404, "text/plain", "Not Found");
	});

	server.on("/", []() { // เมื่อเข้ามาที่ลิ้ง /
		String msg = "<H1>SWITCH ";
		msg +=	" <a href='/on'>ON</a>";
		msg +=	" <a href='/off'>OFF</a>";
		msg +=	"</H1>";
		server.send(200, "text/plain", msg);
	});
	server.on("/on", []() {
		String msg = "<H1>ON</H1>";
		server.send(200, "text/plain", msg);
	});
	server.on("/off", []() {
		String msg = "<H1>OFF</H1>";
		server.send(200, "text/plain", msg);
	});

	server.begin(); // เปิดการใช้งาน Web Server
	Serial.println("started");
}

void loop(void){
  server.handleClient(); // ตรวจสอบว่ามีคนเรียกหน้าเว็บแล้วหรือยัง (เอาไว้ในฟังก์ชั่น loop() เสมอ)
}