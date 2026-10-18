00771b90  PUSH 0x890f10
00771b95  PUSH 0x18
00771b97  MOV ECX,0x925b30
00771b9c  CALL 0x005d29d0
00771ba1  TEST EAX,EAX
00771ba3  JZ 0x00771bd3
00771ba5  MOV ECX,dword ptr [ESP + 0x4]
00771ba9  MOV EDX,dword ptr [ESP + 0x8]
00771bad  MOV dword ptr [EAX],ECX
00771baf  MOV ECX,dword ptr [ESP + 0xc]
00771bb3  MOV dword ptr [EAX + 0x8],ECX
00771bb6  MOV ECX,dword ptr [ESP + 0x10]
00771bba  MOV dword ptr [EAX + 0x4],EDX
00771bbd  MOV EDX,dword ptr [ECX]
00771bbf  MOV dword ptr [EAX + 0xc],EDX
00771bc2  MOV ECX,dword ptr [ECX + 0x4]
00771bc5  MOV DL,byte ptr [ESP + 0x14]
00771bc9  MOV dword ptr [EAX + 0x10],ECX
00771bcc  MOV byte ptr [EAX + 0x14],DL
00771bcf  MOV byte ptr [EAX + 0x15],0x0
00771bd3  RET 0x14
