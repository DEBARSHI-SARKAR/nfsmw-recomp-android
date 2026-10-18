0083bdd0  SUB ESP,0x24
0083bdd3  MOV ECX,dword ptr [ESP + 0x34]
0083bdd7  MOV EDX,dword ptr [ESP + 0x38]
0083bddb  XOR EAX,EAX
0083bddd  MOV dword ptr [ESP],EAX
0083bde0  MOV dword ptr [ESP + 0x4],EAX
0083bde4  MOV dword ptr [ESP + 0x8],EAX
0083bde8  MOV dword ptr [ESP + 0xc],EAX
0083bdec  MOV dword ptr [ESP + 0x10],EAX
0083bdf0  MOV dword ptr [ESP + 0x14],EAX
0083bdf4  MOV dword ptr [ESP + 0x18],EAX
0083bdf8  ADD ECX,0xfffff894
0083bdfe  MOV dword ptr [ESP + 0x1c],EAX
0083be02  MOV dword ptr [ESP + 0x20],EAX
0083be06  MOV EAX,dword ptr [ESP + 0x3c]
0083be0a  MOV dword ptr [ESP + 0x14],ECX
0083be0e  MOV ECX,dword ptr [ESP + 0x40]
0083be12  DEC EDX
0083be13  MOV dword ptr [ESP + 0x8],ECX
0083be17  MOV dword ptr [ESP + 0x10],EDX
0083be1b  MOV EDX,dword ptr [ESP + 0x44]
0083be1f  MOV dword ptr [ESP + 0xc],EAX
0083be23  MOV EAX,dword ptr [ESP + 0x48]
0083be27  LEA ECX,[ESP]
0083be2a  PUSH ECX
0083be2b  MOV dword ptr [ESP + 0x24],0xffffffff
0083be33  MOV dword ptr [ESP + 0x8],EDX
0083be37  MOV dword ptr [ESP + 0x4],EAX
0083be3b  CALL 0x0083a290
0083be40  ADD ESP,0x4
0083be43  TEST EAX,EAX
0083be45  JNZ 0x0083be4e
0083be47  OR EAX,0xffffffff
0083be4a  ADD ESP,0x24
0083be4d  RET
0083be4e  MOV EDX,dword ptr [ESP + 0x4c]
0083be52  MOV ECX,dword ptr [ESP + 0x28]
0083be56  SUB EAX,EDX
0083be58  MOV EDX,dword ptr [ESP + 0x30]
0083be5c  PUSH EAX
0083be5d  MOV EAX,dword ptr [ESP + 0x30]
0083be61  PUSH EDX
0083be62  PUSH EAX
0083be63  PUSH ECX
0083be64  CALL 0x0083bb00
0083be69  ADD ESP,0x10
0083be6c  ADD ESP,0x24
0083be6f  RET
