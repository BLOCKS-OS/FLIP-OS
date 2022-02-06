**You can then assemble boot.s using:**
- i686-elf-as boot.s -o boot.o

**For C**
- i686-elf-gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

**You can then link your kernel using:**
- i686-elf-gcc -T linker.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel.o -lgcc

**Verifying Multiboot**
- grub-file --is-x86-multiboot myos.bin

**Create a bootable image of your operating system**
- grub-mkrescue -o myos.iso isodir

**Command to start your new operating system**
- qemu-system-i386 -kernel myos.bin

