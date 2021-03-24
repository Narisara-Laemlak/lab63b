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
1.เข้าโปรแกรมตัวอย่างที่ 6
2.ตั้งชื่อ wifi "TUENG-ESP-WIFI" และ password
3.ตอนจะปล่อย wifi ให้คนอื่นใช้ได้ ต้องกำหนด IPAddress ว่าตัวเราเอง (ESP-01) มี local_ip,gateway,subnet คืออะไร
4.เตรียมเว็บ sever ไว้ 1 ตัว จากนั้นสร้าง accept point โดยการ run คำสั่ง soft AP โดยกำหนด (ssid,password)
5.uploadprogram โดยต้องกด reset ด้วย
6.เมื่อ upload เสร็จ ทดสอบว่า wifi มีจริงหรือไม่ โดยจะต้องเช็คว่าเว็บ server strated เรียบร้อย โดยใช้โทรศัพท์ค้นหา wifi จะมีชื่อ wifi ขึ้นมา

## การบันทึกผลการทดลอง

## อภิปรายผลการทดลอง
สะดวกต่อการใช้งานในการค้นหา wifi

## คำถามหลังการทดลอง
-Microcontroller ใช้สัญญาณ Internet จากไหนมาปล่อยสัญญาณ wifi
