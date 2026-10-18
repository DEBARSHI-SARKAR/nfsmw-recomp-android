0041dcd0  MOV EAX,dword ptr [ESP + 0x8]
0041dcd4  TEST EAX,EAX
0041dcd6  JBE 0x0041dcf8
0041dcd8  MOV ECX,dword ptr [ESP + 0xc]
0041dcdc  MOV EDX,EAX
0041dcde  MOV EAX,dword ptr [ESP + 0x4]
0041dce2  PUSH ESI
0041dce3  TEST EAX,EAX
0041dce5  JZ 0x0041dcf1
0041dce7  MOV ESI,dword ptr [ECX]
0041dce9  MOV dword ptr [EAX],ESI
0041dceb  MOV ESI,dword ptr [ECX + 0x4]
0041dcee  MOV dword ptr [EAX + 0x4],ESI
0041dcf1  ADD EAX,0x8
0041dcf4  DEC EDX
0041dcf5  JNZ 0x0041dce3
0041dcf7  POP ESI
0041dcf8  RET
