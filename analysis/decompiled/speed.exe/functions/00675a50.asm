00675a50  PUSH 0x0
00675a52  PUSH 0x18
00675a54  MOV ECX,0x925b30
00675a59  CALL 0x005d29d0
00675a5e  TEST EAX,EAX
00675a60  JZ 0x00675a90
00675a62  MOV ECX,dword ptr [ESP + 0x4]
00675a66  MOV EDX,dword ptr [ESP + 0x8]
00675a6a  MOV dword ptr [EAX],ECX
00675a6c  MOV ECX,dword ptr [ESP + 0xc]
00675a70  MOV dword ptr [EAX + 0x8],ECX
00675a73  MOV ECX,dword ptr [ESP + 0x10]
00675a77  MOV dword ptr [EAX + 0x4],EDX
00675a7a  MOV EDX,dword ptr [ECX]
00675a7c  MOV dword ptr [EAX + 0xc],EDX
00675a7f  MOV ECX,dword ptr [ECX + 0x4]
00675a82  MOV DL,byte ptr [ESP + 0x14]
00675a86  MOV dword ptr [EAX + 0x10],ECX
00675a89  MOV byte ptr [EAX + 0x14],DL
00675a8c  MOV byte ptr [EAX + 0x15],0x0
00675a90  RET 0x14
