# การทดลองที่ 5 

## วัตถุประสงค์
1.เพื่อสร้างเว็บ server ผ่าน wifi
2.เพื่อเชื่อมต่อ wifi ที่มีอยู่แล้ว
3.เพื่อการควบคุมอุปกรณ์ไฟฟ้า ผ่านทางสัญญาณไวไฟ โดยใช้ ESP-01 ทำหน้าที่เป็นเว็บเซิร์ฟเวอร์และเป็นตัวกระจายสัญญาณไวไฟ

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook 

## ศึกษาข้อมูลเบื้องต้น
[รับค่าปุ่มกดและรับค่า sensor ต่างๆแสดงผ่าน wifi web server](https://www.myarduino.net/article/81/)
[ESP8266 Nodemcu การควบคุมผ่านทาง web server โดยใช้โหมด AP](https://sites.google.com/site/eplearn/wifi/esp8266_ap_web_server_control_gpio)

## วิธีการทำการทดลอง
1.เข้าไปที่โปรแกรมทดลองตัวอย่างที่ 5 เช็คการทำงานของโปรแกรม
2.เขียนโปรแกรมการทดลองบน Microcontroller โดยเสียบ Microcontroller กับ serial port ของ USB 
3.upload โปรแกรมเข้าตัว Microcontroller
4.run program โดยกด port ของ USB และกด reset
5.ทดสอบโดยใช้เว็บ browser ธรรมดา

## การบันทึกผลการทดลอง

## อภิปรายผลการทดลอง
เนื่องจากคลิปสอนของอาจารย์ขัดข้องไม่สามารถดูได้ จึง assume ว่าโปรแกรมนี้สะดวกต่อการใช้งานต่อการควบคุมอุปกรณ์ไฟฟ้าผ่านอุปกรณ์

## คำถามหลังการทดลอง
-การทำงานของโปรแกรมถูกควบคุมโดยอุปกรณ์ที่ไม่สามารถเปิดเว็บเบราว์เซอร์ได้หรือไม่
ตอบ การควบคุมอุปกรณ์สามารถทำได้ด้วยอุปกรณ์ที่สามารถเปิดเว็บเบราว์เซอร์ได้ กับวงจรที่ต่ออยู่กับของ ESP-01 เท่านั้น