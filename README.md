# FLIP-OS


<div align="center">
  <h1>BLOCKS 💥 </h1>
  <i>Operating System developed by team Blocks.</i>
</div>


## Team Members:

- Pratul
- V Surya Kumar
- Saransh
- Anjali Singh
- Saujanya
- Pravir
- Abhishek
- Viplav

## Introduction

Flip-OS is an open-source operating system made from scratch purely for educational purposes or to understand how an OS works. An end-user can work on the project to gain a deeper understanding of the computer itself, experiencing first-hand how such concepts actually manifest themselves in their own computers.

There are several key advantages to such a project over a higher-level project that isolates students from the machine:
1. Students gain a deeper understanding of the computer itself.
2. When forced to program without the familiar library functions, students realize how much support operating systems give them. 
3. Learning while testing on their own machine, making the often-abstract operating systems concepts much more tangible.
4. Branch-wise development helps students to pick any branch of the complete project and start implementing rest features or any particular feature by using the project as boiler-plate code and documentation for reference. 




*Execute by running **compiler.bat** in windows based system.*

or using the below commands:
  ```
  1. nasm Boot.asm -f bin -o bin\bootsect.bin
  2. nasm Kernel Entry.asm -f elf -o bin\Entry.bin
  3. gcc -m32 -ffreestanding -c main.c -o bin\kernel.o
  4. ld -T NUL -o bin\Kernel.img -Ttext Ox1000 bin\Entry.bin bin\kernel.o
  5. objcopy -O binary -j .text bin\kernel.img bin\kernel.bin
  6. copy /b /Y bin\bootsect.bin+bin\kernel.bin bin\os-image
  7. gemu-system-i386 -drive format=raw, file=bin\os-image
  ```

> Note: Use cmd

## Commands Introduced

- CLS
- COLORA
- COLORB
- COLORC
- COLORDEF
- VID
- HI


> Run and see what happens

---
