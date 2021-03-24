# การทดลองที่ 4  

## วัตถุประสงค์
เพื่อนำสัญญาณ input จากภายนอกเข้ามาใน Microcontroller (โดยสัญญาณ input (0) ควบคุมสัญญาณไฟเปิด-ปิด (1)=หลอดไฟดับ )
โดยถ้า input เป็น 1 port2 จะติดไฟเพื่อทำให้โปรแกรม censor ทำงานจากสิ่งแวดล้อม

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook
4.หลอดไฟ LED
5.Adepter
6.อุปกรณ์ Delay 
7.ตัว register
8.อุปกรณ์ตัว censor

## ศึกษาข้อมูลเบื้องต้น
[การใช้งาน Digital Input/Digital Output](https://blog.thaieasyelec.com/espino32-ch4-how-to-use-digital-input-output/)

## วิธีการทำการทดลอง
1.เช็คคำสั่งโปรแกรม vi scr/main.cpp
2.upload Microcontroller โดยต้องกดปุ่ม upload และ reset (โดยเช็คจาก borad 0) 
3.โปรแกรมจะทำงานโดย read เป็น 1
4.นำตัวจับสัญญาณ censor เสียบขากับตัว register โดยที่สัญญาณช่องตรงกลางคือสัญญาณจาก censor (ถ้ามีแสงสว่างเข้ามาจะอ่านค่า read เป็น 0 ในทางกลับกันถ้าไม่มีแสงสว่างจะ read เป็น 1)
5.นำ input เส้นสีขาวต่อกับเส้น censor ตรงช่องกลาง
6.เมื่อนำนิ้วปิดหน้า censor โปรแกรมจะ read เป็น 1 ทำให้หลอด LED ดับ

## การบันทึกผลการทดลอง

## อภิปรายผลการทดลอง
1.การเขียนโปรแกรมนี้ลงใน microcontroller สามารถนำไปใช้ได้จริง เช่น เสาไฟตามท้องถนน ที่ใช้แสงในการทำงาน  

## คำถามหลังการทดลอง
-สามารถนำโปรแกรม Microcontroller นี้ไปใช้ได้กับ censor สัญญาณเพลิงไหม้ได้ไหม เพียงเปลี่ยนตัวรับ censor จากแสงเป็นควัน
ตอบ ได้