# การทดลองที่ 4  

## วัตถุประสงค์
เพื่อแสดง program ในไมโครคอนโทรลเลอร์ของการทดลองที่ 3 นำมาใช้กับการเปิด-ปิดสวิตซ์ของอุปกรณ์ไฟฟ้าจริง

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook
4.หลอดไฟ LED
5.Adepter
6.อุปกรณ์ Delay 

## ศึกษาข้อมูลเบื้องต้น
[Microcontroller](http://www.rtc.ac.th/vcharkarn/280661.pdf)

##วิธีการทำการทดลอง
1.เขียนโปรแกรมการทดลองบน Microcontroller โดยเสียบ Microcontroller กับ serial port ของ USB 
2.เลือกตัวอย่างโปรแกรม
3.เลือก platform.io จากvi platformio.ini
4. run program โดยกด port ของ USB และกด reset
5.ใช้คำสั่ง pio device monitor เพื่อเช็คผลลัพธ์

##การบันทึกผลการทดลอง

##อภิปรายผลการทดลอง
1.การเขียนโปรแกรมลงใน microcontroller ช่วยประหยัดพื้นที่ อีกทั้ง microcontroller สามารถลงโปรแกรมได้เรื่อยๆ
2.Microcontroller มีขนาดเล็ก สะดวกใช้งาน อีกทั้งใช้งานง่าย 

##คำถามหลังการทดลอง
- Microcontroller มีส่วนประกอบคืออะไร ทำไมถึงสามารถลงโปรแกรมเพื่อนำไว้ใช้ได้
ตอบ มีหน่วยความจำและมีพอร์ตเชื่อมต่ออุปกรณ์อินพุตและเอาต์พุต
