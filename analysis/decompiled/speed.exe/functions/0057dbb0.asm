0057dbb0  PUSH ESI
0057dbb1  MOV ESI,ECX
0057dbb3  MOV EAX,dword ptr [ESI + 0xc]
0057dbb6  MOV EAX,dword ptr [EAX + 0x4]
0057dbb9  TEST EAX,EAX
0057dbbb  JZ 0x0057dbc2
0057dbbd  ADD EAX,-0x4
0057dbc0  JMP 0x0057dbc4
0057dbc2  XOR EAX,EAX
0057dbc4  MOV ECX,dword ptr [ESP + 0x8]
0057dbc8  PUSH 0x0
0057dbca  PUSH ECX
0057dbcb  MOV dword ptr [ESI + 0xc],EAX
0057dbce  MOV EDX,dword ptr [EAX + 0xc]
0057dbd1  MOV ECX,dword ptr [0x0091cadc]
0057dbd7  PUSH 0x0
0057dbd9  PUSH EDX
0057dbda  CALL 0x00525940
0057dbdf  MOV EAX,dword ptr [ESI + 0x8]
0057dbe2  TEST EAX,EAX
0057dbe4  JZ 0x0057dbeb
0057dbe6  ADD EAX,-0x4
0057dbe9  JMP 0x0057dbed
0057dbeb  XOR EAX,EAX
0057dbed  CMP EAX,dword ptr [ESI + 0xc]
0057dbf0  POP ESI
0057dbf1  JNZ 0x0057dc25
0057dbf3  MOV ECX,dword ptr [0x0091cf48]
0057dbf9  TEST ECX,ECX
0057dbfb  JZ 0x0057dc12
0057dbfd  MOV EAX,dword ptr [ECX]
0057dbff  PUSH 0x1
0057dc01  CALL dword ptr [EAX]
0057dc03  MOV dword ptr [0x0091cf48],0x0
0057dc0d  CALL 0x007a2940
0057dc12  MOV ECX,dword ptr [0x00911fa8]
0057dc18  MOV dword ptr [ESP + 0x4],0xffffffff
0057dc20  JMP 0x004aefe0
0057dc25  RET 0x4
