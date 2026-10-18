0060cb00  PUSH 0x0
0060cb02  PUSH 0x18
0060cb04  MOV ECX,0x925b30
0060cb09  CALL 0x005d29d0
0060cb0e  TEST EAX,EAX
0060cb10  JZ 0x0060cb40
0060cb12  MOV ECX,dword ptr [ESP + 0x4]
0060cb16  MOV EDX,dword ptr [ESP + 0x8]
0060cb1a  MOV dword ptr [EAX],ECX
0060cb1c  MOV ECX,dword ptr [ESP + 0xc]
0060cb20  MOV dword ptr [EAX + 0x8],ECX
0060cb23  MOV ECX,dword ptr [ESP + 0x10]
0060cb27  MOV dword ptr [EAX + 0x4],EDX
0060cb2a  MOV EDX,dword ptr [ECX]
0060cb2c  MOV dword ptr [EAX + 0xc],EDX
0060cb2f  MOV ECX,dword ptr [ECX + 0x4]
0060cb32  MOV DL,byte ptr [ESP + 0x14]
0060cb36  MOV dword ptr [EAX + 0x10],ECX
0060cb39  MOV byte ptr [EAX + 0x14],DL
0060cb3c  MOV byte ptr [EAX + 0x15],0x0
0060cb40  RET 0x14
