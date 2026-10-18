0063fed0  PUSH 0x890f10
0063fed5  PUSH 0x18
0063fed7  MOV ECX,0x925b30
0063fedc  CALL 0x005d29d0
0063fee1  TEST EAX,EAX
0063fee3  JZ 0x0063ff13
0063fee5  MOV ECX,dword ptr [ESP + 0x4]
0063fee9  MOV EDX,dword ptr [ESP + 0x8]
0063feed  MOV dword ptr [EAX],ECX
0063feef  MOV ECX,dword ptr [ESP + 0xc]
0063fef3  MOV dword ptr [EAX + 0x8],ECX
0063fef6  MOV ECX,dword ptr [ESP + 0x10]
0063fefa  MOV dword ptr [EAX + 0x4],EDX
0063fefd  MOV EDX,dword ptr [ECX]
0063feff  MOV dword ptr [EAX + 0xc],EDX
0063ff02  MOV ECX,dword ptr [ECX + 0x4]
0063ff05  MOV DL,byte ptr [ESP + 0x14]
0063ff09  MOV dword ptr [EAX + 0x10],ECX
0063ff0c  MOV byte ptr [EAX + 0x14],DL
0063ff0f  MOV byte ptr [EAX + 0x15],0x0
0063ff13  RET 0x14
