# การทดลองที่ 2 

## วัตถุประสงค์
1. เพื่อ upload program set wifi ลงไมโครคอนโทรลเลอร์
2. เพื่อสแกนค้นหาไวไฟรอบตัว ว่ามีเครือข่ายอะไรบ้าง 

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook 

## ศึกษาข้อมูลเบื้องต้น
[การ set wifi](https://medium.com/@pattanapong.sriph/)

## วิธีการทำการทดลอง
1.เขียนโปรแกรมการทดลองบน Microcontroller โดยเสียบ Microcontroller กับ serial port ของ USB เพื่อเตรียม run โปรแกรม
![image](https://user-images.githubusercontent.com/80879900/112400799-b12c7600-8d3b-11eb-9ac7-eba404b87839.png)
2.พิมพ์ vi src/main.cpp เช็คโปรแกรม โดยจะมี 2 ส่วนคือ set up และ loop ให้พร้อมทำงาน 
![image](https://user-images.githubusercontent.com/80879900/112400896-f05ac700-8d3b-11eb-980d-3181e43dbffd.png)
![image](https://user-images.githubusercontent.com/80879900/112400950-0cf6ff00-8d3c-11eb-99bc-aff04a92e746.png)
3.พิมพ์ pio run-t upload เพื่อทำาร run program เข้าสู่ microcontroller  และจะต้องกด port ของ USB และกด reset
![image](https://user-images.githubusercontent.com/80879900/112401139-69f2b500-8d3c-11eb-8c31-b62f5826ca2b.png)
4.ใช้คำสั่ง pio device monitor เพื่อเช็คผลลัพธ์ว่า สแกนสัญญาณ wifi โดยรอบได้หรือไม่ ซึ่งจะสแกนได้ตามความแรงที่ได้รับ
![image](https://user-images.githubusercontent.com/80879900/112401169-82fb6600-8d3c-11eb-8bc9-9a17c4fa33e8.png)

## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80879900/112351364-650e1100-8cfc-11eb-85f3-6b13bc0a141c.png)


## อภิปรายผลการทดลอง
1.Microcontroller เป็นตัวช่วยที่ดีในการสแกนหาสัญญาณ wifi รอบข้าง อีกทั้งยังสามารถบอกความเร็วอินเตอร์เน็ตได้ 

## คำถามหลังการทดลอง
-Lost คือจำนวนที่ส่งไม่สำเร็จเท่ากับ 0 คือไม่มีข้อผิดพลาดในการเชื่อมต่อ ถ้า lost มีค่าเท่ากับ 1 จะส่งผลอย่างไร
ตอบ หากมีค่า lost 1–3 ยังสามารถใช้งานได้ แต่อาจจะมีการตกหล่นของข้อมูลจำนวนหนึ่ง แนะนำไม่ควรมีค่า lost ที่สูงเกินไป
