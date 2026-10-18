0041dde0  MOV EAX,dword ptr [ESP + 0x8]
0041dde4  TEST EAX,EAX
0041dde6  JBE 0x0041de08
0041dde8  MOV ECX,dword ptr [ESP + 0xc]
0041ddec  MOV EDX,EAX
0041ddee  MOV EAX,dword ptr [ESP + 0x4]
0041ddf2  PUSH ESI
0041ddf3  TEST EAX,EAX
0041ddf5  JZ 0x0041de01
0041ddf7  MOV ESI,dword ptr [ECX]
0041ddf9  MOV dword ptr [EAX],ESI
0041ddfb  MOV ESI,dword ptr [ECX + 0x4]
0041ddfe  MOV dword ptr [EAX + 0x4],ESI
0041de01  ADD EAX,0x8
0041de04  DEC EDX
0041de05  JNZ 0x0041ddf3
0041de07  POP ESI
0041de08  RET
