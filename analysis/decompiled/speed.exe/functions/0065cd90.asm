0065cd90  PUSH 0x890f10
0065cd95  PUSH 0x18
0065cd97  MOV ECX,0x925b30
0065cd9c  CALL 0x005d29d0
0065cda1  TEST EAX,EAX
0065cda3  JZ 0x0065cdd3
0065cda5  MOV ECX,dword ptr [ESP + 0x4]
0065cda9  MOV EDX,dword ptr [ESP + 0x8]
0065cdad  MOV dword ptr [EAX],ECX
0065cdaf  MOV ECX,dword ptr [ESP + 0xc]
0065cdb3  MOV dword ptr [EAX + 0x8],ECX
0065cdb6  MOV ECX,dword ptr [ESP + 0x10]
0065cdba  MOV dword ptr [EAX + 0x4],EDX
0065cdbd  MOV EDX,dword ptr [ECX]
0065cdbf  MOV dword ptr [EAX + 0xc],EDX
0065cdc2  MOV ECX,dword ptr [ECX + 0x4]
0065cdc5  MOV DL,byte ptr [ESP + 0x14]
0065cdc9  MOV dword ptr [EAX + 0x10],ECX
0065cdcc  MOV byte ptr [EAX + 0x14],DL
0065cdcf  MOV byte ptr [EAX + 0x15],0x0
0065cdd3  RET 0x14
