0074cfc0  MOV EAX,dword ptr [ESP + 0x8]
0074cfc4  TEST EAX,EAX
0074cfc6  JBE 0x0074cfe2
0074cfc8  MOV EDX,dword ptr [ESP + 0xc]
0074cfcc  MOV ECX,EAX
0074cfce  MOV EAX,dword ptr [ESP + 0x4]
0074cfd2  PUSH ESI
0074cfd3  TEST EAX,EAX
0074cfd5  JZ 0x0074cfdb
0074cfd7  MOV ESI,dword ptr [EDX]
0074cfd9  MOV dword ptr [EAX],ESI
0074cfdb  ADD EAX,0x4
0074cfde  DEC ECX
0074cfdf  JNZ 0x0074cfd3
0074cfe1  POP ESI
0074cfe2  RET
