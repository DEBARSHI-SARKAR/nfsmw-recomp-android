006f4430  MOV EAX,FS:[0x0]
006f4436  PUSH -0x1
006f4438  PUSH 0x87eac8
006f443d  PUSH EAX
006f443e  MOV EAX,dword ptr [ESP + 0x10]
006f4442  MOV dword ptr FS:[0x0],ESP
006f4449  SUB ESP,0x30
006f444c  TEST EAX,EAX
006f444e  JZ 0x006f44cc
006f4450  MOV ECX,dword ptr [ESP + 0x44]
006f4454  MOV EDX,dword ptr [ECX]
006f4456  MOV dword ptr [ESP + 0x4],EDX
006f445a  MOV EDX,dword ptr [ECX + 0x4]
006f445d  MOV ECX,dword ptr [ECX + 0x8]
006f4460  MOV dword ptr [ESP + 0x8],EDX
006f4464  MOV EDX,dword ptr [ESP + 0x4c]
006f4468  MOV dword ptr [ESP + 0xc],ECX
006f446c  MOV ECX,dword ptr [ESP + 0x48]
006f4470  MOV dword ptr [ESP + 0x10],EDX
006f4474  MOV EDX,dword ptr [ECX]
006f4476  MOV dword ptr [ESP + 0x14],EDX
006f447a  MOV EDX,dword ptr [ECX + 0x4]
006f447d  MOV ECX,dword ptr [ECX + 0x8]
006f4480  MOV dword ptr [ESP + 0x18],EDX
006f4484  MOV EDX,dword ptr [ESP + 0x50]
006f4488  MOV dword ptr [ESP + 0x1c],ECX
006f448c  MOV ECX,dword ptr [ESP + 0x58]
006f4490  MOV dword ptr [ESP + 0x20],EAX
006f4494  MOV EAX,dword ptr [ESP + 0x54]
006f4498  MOV dword ptr [ESP],0x8b0400
006f449f  MOV dword ptr [ESP + 0x24],EDX
006f44a3  MOV dword ptr [ESP + 0x28],EAX
006f44a7  MOV dword ptr [ESP + 0x2c],ECX
006f44ab  LEA EDX,[ESP]
006f44ae  PUSH EDX
006f44af  PUSH ECX
006f44b0  MOV EAX,ESP
006f44b2  MOV dword ptr [ESP + 0x40],0x0
006f44ba  MOV dword ptr [ESP + 0x48],ESP
006f44be  MOV dword ptr [EAX],0x998c21c0
006f44c4  CALL 0x006f25a0
006f44c9  ADD ESP,0x8
006f44cc  MOV ECX,dword ptr [ESP + 0x30]
006f44d0  MOV dword ptr FS:[0x0],ECX
006f44d7  ADD ESP,0x3c
006f44da  RET
