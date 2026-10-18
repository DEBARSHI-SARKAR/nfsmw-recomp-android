00771b40  PUSH 0x0
00771b42  PUSH 0x10
00771b44  MOV ECX,0x925b30
00771b49  CALL 0x005d29d0
00771b4e  TEST EAX,EAX
00771b50  JZ 0x00771b7c
00771b52  MOV ECX,dword ptr [ESP + 0x4]
00771b56  MOV EDX,dword ptr [ESP + 0x8]
00771b5a  MOV dword ptr [EAX],ECX
00771b5c  MOV ECX,dword ptr [ESP + 0xc]
00771b60  MOV dword ptr [EAX + 0x4],EDX
00771b63  MOV EDX,dword ptr [ESP + 0x10]
00771b67  MOV dword ptr [EAX + 0x8],ECX
00771b6a  MOV CX,word ptr [EDX]
00771b6d  MOV DL,byte ptr [ESP + 0x14]
00771b71  MOV word ptr [EAX + 0xc],CX
00771b75  MOV byte ptr [EAX + 0xe],DL
00771b78  MOV byte ptr [EAX + 0xf],0x0
00771b7c  RET 0x14
