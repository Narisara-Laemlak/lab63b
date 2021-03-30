# การทดลองที่ 4  

## วัตถุประสงค์
1. เพื่อนำสัญญาณ input จากภายนอกเข้ามาใน Microcontroller (โดยสัญญาณ input (0) ควบคุมสัญญาณไฟเปิด-ปิด (1)=หลอดไฟดับ )
โดยถ้า input เป็น 1 port2 จะติดไฟเพื่อทำให้โปรแกรม censor ทำงานจากสิ่งแวดล้อม

## อุปกรณ์ที่ใช้
1. ไมโครคอนโทรลเลอร์(Microcontroller)
2. อุปกรณ์ USB2serial converter
3. Computer Notebook
4. หลอดไฟ LED
5. Adepter
6. อุปกรณ์ Delay 
7. ตัว register
8. อุปกรณ์ตัว censor

## ศึกษาข้อมูลเบื้องต้น
[การใช้งาน Digital Input/Digital Output](https://blog.thaieasyelec.com/espino32-ch4-how-to-use-digital-input-output/)

## วิธีการทำการทดลอง
1. เช็คคำสั่งโปรแกรม vi scr/main.cpp โดยที่ microcontroller เสียบกับ serial2USB เหมือนเดิม
![image](https://user-images.githubusercontent.com/80879900/112402325-edada100-8d3e-11eb-8d56-47be5428e824.png)
2. พิมพ์ pio run-t upload เพื่อ upload program ลง Microcontroller โดยต้องกดปุ่ม upload และ reset (โดยเช็คจาก borad 0) 
![image](https://user-images.githubusercontent.com/80879900/112402610-6b71ac80-8d3f-11eb-9615-7092c973e203.png)
3. โปรแกรมจะทำงานโดย read เป็น 1 โดยนำอินพุตไปเสียบเข้ากับ port
![image](https://user-images.githubusercontent.com/80879900/112402692-90feb600-8d3f-11eb-92ef-df7835604cf5.png)
![image](https://user-images.githubusercontent.com/80879900/112403001-24d08200-8d40-11eb-864e-52afc7551318.png)
4. นำตัวจับสัญญาณ censor เสียบขากับตัว register โดยที่สัญญาณช่องตรงกลางคือสัญญาณจาก censor (ถ้ามีแสงสว่างเข้ามาจะอ่านค่า read เป็น 0  ในทางกลับกันถ้าไม่มีแสงสว่างจะ read เป็น 1) และนำ input เส้นสีขาวต่อกับเส้น censor ตรงช่องกลาง
![image](https://user-images.githubusercontent.com/80879900/112402948-09657700-8d40-11eb-8fd9-aa23261ae985.png)
6. เมื่อนำนิ้วปิดหน้า censor โปรแกรมจะ read เป็น 1 ทำให้หลอด LED ดับ
![image](https://user-images.githubusercontent.com/80879900/112403139-72e58580-8d40-11eb-8da3-e011d37d0045.png)
![image](https://user-images.githubusercontent.com/80879900/112403165-7ed14780-8d40-11eb-9eed-5a77e064f57b.png)

## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80879900/112403171-82fd6500-8d40-11eb-984c-2bfbf975fb34.png)
![image](https://user-images.githubusercontent.com/80879900/112403201-8ee92700-8d40-11eb-86b1-802ddaf15727.png)

## อภิปรายผลการทดลอง
1.การเขียนโปรแกรมนี้ลงใน microcontroller สามารถนำไปใช้ได้จริง เช่น เสาไฟตามท้องถนน ที่ใช้แสงในการทำงาน  

## คำถามหลังการทดลอง
-สามารถนำโปรแกรม Microcontroller นี้ไปใช้ได้กับ censor สัญญาณเพลิงไหม้ได้ไหม เพียงเปลี่ยนตัวรับ censor จากแสงเป็นควัน
ตอบ ได้
