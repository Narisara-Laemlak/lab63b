# การทดลองที่ 1 

## วัตถุประสงค์
1.เพื่อ upload program ลงไมโครคอนโทรลเลอร์
2.เพื่อทดสอบตัวอย่างโปรแกรมที่เขียนขึ้นด้วย platform.io

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook 

## ศึกษาข้อมูลเบื้องต้น
[Microcontroller](http://www.rtc.ac.th/vcharkarn/280661.pdf)

## วิธีการทำการทดลอง
1.เขียนโปรแกรมการทดลองบน Microcontroller โดยเสียบ Microcontroller กับ serial port ของ USB 
![image](https://user-images.githubusercontent.com/80879900/112399530-f7340a80-8d38-11eb-944f-bd0cb2f2f19c.png)
2.เลือกตัวอย่างโปรแกรมที่ 1
![image](https://user-images.githubusercontent.com/80879900/112399748-63167300-8d39-11eb-997d-240bd5b44741.png)
3.เช็คคำสั่งทดสอบของโปรแกรม vi/src/main.cpp
![image](https://user-images.githubusercontent.com/80879900/112399980-e1731500-8d39-11eb-8abc-a6b042c02367.png)
4.เลือก platform.io จากvi platformio.ini
![image](https://user-images.githubusercontent.com/80879900/112400077-21d29300-8d3a-11eb-876a-0bec9d6b642e.png)
5.พิมพ์ pio run-t upload เพื่อทำการ run โปรแกรม และเมื่อจะให้โปรแกรมลง Microcontroller ต้องกด port ของ USB และกด reset
![image](https://user-images.githubusercontent.com/80879900/112400390-e1bfe000-8d3a-11eb-94ff-c5115c0c06fb.png)
6.ใช้คำสั่ง pio device monitor เพื่อเช็คผลลัพธ์
![image](https://user-images.githubusercontent.com/80879900/112400500-103dbb00-8d3b-11eb-9672-cdbdba36dc59.png)

## การบันทึกผลการทดลอง
กด reset เพื่อให้ได้ผลลัพธ์ตั้งแต่ 1
![image](https://user-images.githubusercontent.com/80879900/112400592-424f1d00-8d3b-11eb-88ca-f2a84f57857c.png)


## อภิปรายผลการทดลอง
1.การเขียนโปรแกรมลงใน microcontroller ช่วยประหยัดพื้นที่ อีกทั้ง microcontroller สามารถลงโปรแกรมได้เรื่อยๆ
2.Microcontroller มีขนาดเล็ก สะดวกใช้งาน อีกทั้งใช้งานง่าย 

## คำถามหลังการทดลอง
- Microcontroller มีส่วนประกอบคืออะไร ทำไมถึงสามารถลงโปรแกรมเพื่อนำไว้ใช้ได้
ตอบ มีหน่วยความจำและมีพอร์ตเชื่อมต่ออุปกรณ์อินพุตและเอาต์พุต
