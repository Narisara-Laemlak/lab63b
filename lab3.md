# การทดลองที่ 3

## วัตถุประสงค์
1.เพื่อ upload program ลงไมโครคอนโทรลเลอร์
2.เพื่อต้องการให้โปรแกรมแสดง output เป็นสัญญาณดิจิทัล (ไฟ LED กระพริบ)
3.เพื่อนำมาใช้กับการเปิด-ปิดสวิตซ์ของอุปกรณ์ไฟฟ้าจริง

## อุปกรณ์ที่ใช้
1.ไมโครคอนโทรลเลอร์(Microcontroller)
2.อุปกรณ์ USB2serial converter
3.Computer Notebook 
4.หลอดไฟ LED
5.Adepter ต่อสายสีขาวเป็น (0),(1) ซึ่งจะเอา LED มาต่อเพื่อให้แสงสว่างเมื่อมี 1 มาที่ port
6.อุปกรณ์ Delay

## ศึกษาข้อมูลเบื้องต้น
[สัญญาณ output](https://www.myarduino.net/article/83/)
[สัญญาณ input output พื้นฐาน](https://www.ioxhop.com/article/67/esp32)

## วิธีการทำการทดลอง 1
1.เขียนโปรแกรมการทดลองบน Microcontroller โดยเสียบ Microcontroller กับ Adepter
![image](https://user-images.githubusercontent.com/80879900/112401465-2cdaf280-8d3d-11eb-8223-93a034644ed9.png)
2.เลือกตัวอย่างโปรแกรมพร้อมเช็คคำสั่งการทดสอบโปรแกรม
![image](https://user-images.githubusercontent.com/80879900/112401527-4da34800-8d3d-11eb-9d59-9a171d9934e2.png)
3.upload program ใช้คำสั่ง pio run-t upload และกดปุ่ม upload และกด reset
![image](https://user-images.githubusercontent.com/80879900/112401601-7c212300-8d3d-11eb-8e8d-02b2d7437ae6.png)
4.ดูผลการ run หลอดไฟ LED ในช่วง (0) จะพบว่าหลอดไฟ LED มีไฟกระพริบ โดยนับ cnt ถ้าเป็นเลขคี่ on ไฟติด ในทางกลับกันถ้าเป็นเลขคู่ off ไฟดับ
![image](https://user-images.githubusercontent.com/80879900/112401684-abd02b00-8d3d-11eb-93f8-da7159481625.png)


## วิธีการทำการทดลอง 2
1.(ใช้โปรแกรมเดิม)เสียบ Microcontroller กับ Delay ให้คอร์ด 0 ที่ปล่อยสัญญาณ 0,1 นำไปควบคุม Delay เพื่อเปิด-ปิดสวิตซ์
![image](https://user-images.githubusercontent.com/80879900/112401849-f9e52e80-8d3d-11eb-92c6-77751855b228.png)
2.นำ Delay ต่อกับขั้วชาร์จเพื่อจ่ายไฟให้กับ delay และ Microcontroller โดยนำ 5 v จากขั้ว USB ต่อกับอุปกรณ์ต่อไฟของตัว delay ที่มีตัว micro run อยู่ เพื่อรับสัญญาณไฟเลี้ยง
![image](https://user-images.githubusercontent.com/80879900/112401958-357ff880-8d3e-11eb-8131-464029454036.png)
3.อุปกรณ์ทำงานควบคุม delay เปิด-ปิด โดยที่มีเสียงขณะหลอดไฟติด
![image](https://user-images.githubusercontent.com/80879900/112402115-80017500-8d3e-11eb-87dd-90cdb9a32653.png)

## การบันทึกผลการทดลองที่ 1
![image](https://user-images.githubusercontent.com/80879900/112401703-b68ac000-8d3d-11eb-978f-158eb3f9d3c4.png)

## การบันทึกผลการทดลองที่ 2
![image](https://user-images.githubusercontent.com/80879900/112402122-8394fc00-8d3e-11eb-8c8f-0c30f22c9b08.png)


## อภิปรายผลการทดลอง
1.Microcontroller โปรแกรมนี้สามารถนำไปใช้เป็นสัญญาณไฟกระพริบได้ โดยอาจจะต้องแก้ Loop ให้มีช่วงวินาทีที่นานขึ้น
2.Microcontroller สามารถนำไปใช้กับไฟเลี้ยวของรถได้ ไฟกระพริบของเครื่องบิน

## คำถามหลังการทดลอง
-สามารถใช้สัญญาณ output เป็นอย่างอื่นได้ไหม
ตอบ ได้ เช่น เสียงออด
