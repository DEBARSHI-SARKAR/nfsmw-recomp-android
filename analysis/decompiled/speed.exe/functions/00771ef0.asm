00771ef0  PUSH 0x0
00771ef2  PUSH 0x18
00771ef4  MOV ECX,0x925b30
00771ef9  CALL 0x005d29d0
00771efe  TEST EAX,EAX
00771f00  JZ 0x00771f30
00771f02  MOV ECX,dword ptr [ESP + 0x4]
00771f06  MOV EDX,dword ptr [ESP + 0x8]
00771f0a  MOV dword ptr [EAX],ECX
00771f0c  MOV ECX,dword ptr [ESP + 0xc]
00771f10  MOV dword ptr [EAX + 0x8],ECX
00771f13  MOV ECX,dword ptr [ESP + 0x10]
00771f17  MOV dword ptr [EAX + 0x4],EDX
00771f1a  MOV EDX,dword ptr [ECX]
00771f1c  MOV dword ptr [EAX + 0xc],EDX
00771f1f  MOV ECX,dword ptr [ECX + 0x4]
00771f22  MOV DL,byte ptr [ESP + 0x14]
00771f26  MOV dword ptr [EAX + 0x10],ECX
00771f29  MOV byte ptr [EAX + 0x14],DL
00771f2c  MOV byte ptr [EAX + 0x15],0x0
00771f30  RET 0x14
