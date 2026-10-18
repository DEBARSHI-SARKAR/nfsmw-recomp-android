006f9a80  PUSH -0x1
006f9a82  PUSH 0x87f322
006f9a87  MOV EAX,FS:[0x0]
006f9a8d  PUSH EAX
006f9a8e  MOV dword ptr FS:[0x0],ESP
006f9a95  SUB ESP,0x8
006f9a98  PUSH 0x0
006f9a9a  PUSH 0x90
006f9a9f  MOV ECX,0x925b30
006f9aa4  CALL 0x005d29d0
006f9aa9  MOV dword ptr [ESP],EAX
006f9aac  TEST EAX,EAX
006f9aae  MOV dword ptr [ESP + 0x10],0x0
006f9ab6  JZ 0x006f9af2
006f9ab8  MOV ECX,dword ptr [ESP + 0x18]
006f9abc  SUB ESP,0x10
006f9abf  MOV EDX,ESP
006f9ac1  MOV dword ptr [EDX],ECX
006f9ac3  MOV ECX,dword ptr [ESP + 0x2c]
006f9ac7  MOV dword ptr [EDX + 0x4],ECX
006f9aca  MOV ECX,dword ptr [ESP + 0x30]
006f9ace  MOV dword ptr [EDX + 0x8],ECX
006f9ad1  MOV ECX,EAX
006f9ad3  MOV dword ptr [ESP + 0x14],ESP
006f9ad7  CALL 0x006f9800
006f9adc  TEST EAX,EAX
006f9ade  JZ 0x006f9af2
006f9ae0  ADD EAX,0x2c
006f9ae3  MOV ECX,dword ptr [ESP + 0x8]
006f9ae7  MOV dword ptr FS:[0x0],ECX
006f9aee  ADD ESP,0x14
006f9af1  RET
006f9af2  MOV ECX,dword ptr [ESP + 0x8]
006f9af6  XOR EAX,EAX
006f9af8  MOV dword ptr FS:[0x0],ECX
006f9aff  ADD ESP,0x14
006f9b02  RET
