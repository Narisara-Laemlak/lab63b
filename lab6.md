# การทดลองที่ 6

## วัตถุประสงค์
1.เพื่อสร้าง wifi มาใช้เอง

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook 

##ศึกษาข้อมูลเบื้องต้น
[Access Point](https://www.mindphp.com/what-is-access-point.html)
[การใช้งาน WiFi](https://www.ioxhop.com/article/71/esp32-)

## วิธีการทำการทดลอง
1.เข้าโปรแกรมตัวอย่างที่ 6 และเช็คคำสั่งทดสอบของโปรแกรม
![image](https://user-images.githubusercontent.com/80879900/112403965-010e3b80-8d42-11eb-9fef-7686d882b81b.png)
![image](https://user-images.githubusercontent.com/80879900/112404028-213dfa80-8d42-11eb-808d-d9c85a79105e.png)
2.ตั้งชื่อ wifi "TUENG-ESP-WIFI" และ password
![image](https://user-images.githubusercontent.com/80879900/112404077-387ce800-8d42-11eb-859a-e6f2c4add9c9.png)
3.ตอนจะปล่อย wifi ให้คนอื่นใช้ได้ ต้องกำหนด IPAddress ว่าตัวเราเอง (ESP-01) มี local_ip,gateway,subnet คืออะไร
4.เตรียมเว็บ sever ไว้ 1 ตัว จากนั้นสร้าง accept point โดยการ run คำสั่ง soft AP โดยกำหนด (ssid,password)
![image](https://user-images.githubusercontent.com/80879900/112404128-59453d80-8d42-11eb-94c0-da698ce51e4e.png)
5.uploadprogram โดยต้องกด reset ด้วย
![image](https://user-images.githubusercontent.com/80879900/112404195-7c6fed00-8d42-11eb-9ba0-9c5e0ce5cef2.png)
6.เมื่อ upload เสร็จ ทดสอบว่า wifi มีจริงหรือไม่ โดยจะต้องเช็คว่าเว็บ server strated เรียบร้อย โดยใช้โทรศัพท์ค้นหา wifi จะมีชื่อ wifi ขึ้นมา
![image](https://user-images.githubusercontent.com/80879900/112404235-91e51700-8d42-11eb-8260-77dec4eba9ca.png)
![image](https://user-images.githubusercontent.com/80879900/112404276-a32e2380-8d42-11eb-9a19-94c985391e22.png)

## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80879900/112404283-a4f7e700-8d42-11eb-8c03-fe36f0ed27a7.png)

## อภิปรายผลการทดลอง
สะดวกต่อการใช้งานในการค้นหา wifi

## คำถามหลังการทดลอง
-Microcontroller ใช้สัญญาณ Internet จากไหนมาปล่อยสัญญาณ wifi
