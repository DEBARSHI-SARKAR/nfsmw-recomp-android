00771d60  PUSH 0x0
00771d62  PUSH 0x18
00771d64  MOV ECX,0x925b30
00771d69  CALL 0x005d29d0
00771d6e  TEST EAX,EAX
00771d70  JZ 0x00771da0
00771d72  MOV ECX,dword ptr [ESP + 0x4]
00771d76  MOV EDX,dword ptr [ESP + 0x8]
00771d7a  MOV dword ptr [EAX],ECX
00771d7c  MOV ECX,dword ptr [ESP + 0xc]
00771d80  MOV dword ptr [EAX + 0x8],ECX
00771d83  MOV ECX,dword ptr [ESP + 0x10]
00771d87  MOV dword ptr [EAX + 0x4],EDX
00771d8a  MOV EDX,dword ptr [ECX]
00771d8c  MOV dword ptr [EAX + 0xc],EDX
00771d8f  MOV ECX,dword ptr [ECX + 0x4]
00771d92  MOV DL,byte ptr [ESP + 0x14]
00771d96  MOV dword ptr [EAX + 0x10],ECX
00771d99  MOV byte ptr [EAX + 0x14],DL
00771d9c  MOV byte ptr [EAX + 0x15],0x0
00771da0  RET 0x14
