#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//การประกาศสร้างตัวแปรเก็บ Username เครื่อข่าย WiFi ชื่อว่า ssid
//การประกาศสร้างตัวแปรเก็บ Password ของเครื่อข่าย WiFi ชื่อว่า pass
const char* ssid = "LAB7";
const char* password = NULL;
//IP Address มาจาก Router ที่เราทำการเชื่อมต่อแยกออกมายังบอร์ด
IPAddress local_ip(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);

ESP8266WebServer server(80); // สร้างออปเจ็ค server เพิ่มเริ่มใช้งาน Web Server ที่พอร์ต 80

int cnt = 0;

void setup(void){ 
	Serial.begin(115200); //เริ่มใช้งาน UART0 ที่ความเร็ว 115200
  pinMode(LED_BUILTIN, OUTPUT);

	WiFi.softAP(ssid, password); //ทำการ Connect SSID และ Pass เพื่อทำหน้าที่เป็น wifi เอง
	WiFi.softAPConfig(local_ip, gateway, subnet);
	delay(1000); 

	server.onNotFound([]() {
		server.send(404, "text/plain", "Not Found");
	});
	// เมื่อเข้ามาที่ลิ้ง /
        server.on("/", []() { 
		String msg = "<H1>SWITCH ";
		msg +=	" <a href='/on'>ON</a>";
		msg +=	" <a href='/off'>OFF</a>";
		msg +=	"</H1>";
		server.send(200, "text/plain", msg);
	});
	//http://192.168.1.1/on = switch on
	server.on("/on", []() {
		String msg = "<H1>ON</H1>";
		server.send(200, "text/plain", msg);
	});
	//http://192.168.1.1/on = switch off
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
