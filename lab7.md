# การทดลองที่ 7 การพัฒนาโปรแกรมบนไมโครคอลโทลเลอร์

## วัตถุประสงค์
1. เพื่อศึกษาการใช้งานโปรแกรมใหม่บน Microcontroller
2. เพื่อพัฒนาโปรแกรม Microcontroller สำหรับการนำปรับใช้กับชีวิตประจำวัน

## อุปกรณ์ที่ใช้
1. ไมโครคอนโทรลเลอร์(Microcontroller)
2. อุปกรณ์ USB2serial converter
3. Computer Notebook 

## ศึกษาข้อมูลเบื้องต้น
1. [การสร้าง server](https://ioxhop.github.io/ESPIOX2-Document/esp8266-basic-webserver.html)
2. [การเชื่อมต่อ WiFi](https://medium.com/@pattanapong.sriph/)

## วิธีการทำการทดลอง
1. เข้าโปรแกรมเช็คคำสั่งทดสอบของโปรแกรม
2. ตั้งชื่อ wifi "LAB7" และ password "NULL"
![image](https://user-images.githubusercontent.com/80879900/113160604-d6534400-9267-11eb-9178-099748d8019f.png)
3. ตอนจะปล่อย wifi ให้คนอื่นใช้ได้ ต้องกำหนด IPAddress ว่าตัวเราเอง (ESP-01) มี local_ip,gateway,subnet คืออะไร
4. เตรียมเว็บ sever ไว้ 1 ตัว จากนั้นสร้าง accept point โดยการ run คำสั่ง soft AP โดยกำหนด (ssid,password)
5. uploadprogram โดยต้องกด reset ด้วย
6. เมื่อ upload เสร็จ ทดสอบว่า wifi มีจริงหรือไม่ โดยจะต้องเช็คว่าเว็บ server strated เรียบร้อย โดยใช้โทรศัพท์ค้นหา wifi จะมีชื่อ wifi ขึ้นมา


## การบันทึกผลการทดลอง
สามารถค้นหาชื่อ wifi ที่ตั้งโดยเชื่อมต่อได้เลย ไม่ต้องใส่ password 

## อภิปรายผลการทดลอง
สามารถนำไปติดตั้งบนพื้นที่ห่างไกลอินเตอร์เน็ตได้ โดยลดขนาดของอุปกรณ์ลง

## คำถามหลังการทดลอง
เราสามารถ upload program โดยมีสัญญาณ wifi มากกว่า 1 ตัวลงบน Microcontroller ได้หรือไม่
