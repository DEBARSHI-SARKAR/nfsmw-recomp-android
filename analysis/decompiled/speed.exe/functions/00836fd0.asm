00836fd0  MOV EAX,dword ptr [ESP + 0x4]
00836fd4  TEST EAX,EAX
00836fd6  JNZ 0x00836fde
00836fd8  MOV EAX,0xfffffffd
00836fdd  RET
00836fde  MOV ECX,dword ptr [ESP + 0x8]
00836fe2  MOV EDX,dword ptr [ESP + 0xc]
00836fe6  MOV dword ptr [EAX + 0x34],ECX
00836fe9  MOV dword ptr [EAX + 0x30],EDX
00836fec  XOR EAX,EAX
00836fee  RET
