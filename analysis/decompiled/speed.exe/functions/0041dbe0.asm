0041dbe0  PUSH ESI
0041dbe1  MOV ESI,dword ptr [ESP + 0xc]
0041dbe5  PUSH EDI
0041dbe6  MOV EDI,dword ptr [ESP + 0x14]
0041dbea  CMP ESI,EDI
0041dbec  JZ 0x0041dc2e
0041dbee  MOV EDI,EDI
0041dbf0  MOV EAX,dword ptr [ESI]
0041dbf2  MOV ECX,dword ptr [EAX + 0x4]
0041dbf5  PUSH 0x4037e0
0041dbfa  CALL 0x005d59f0
0041dbff  TEST EAX,EAX
0041dc01  JZ 0x0041dc27
0041dc03  MOV EDX,dword ptr [EAX]
0041dc05  MOV ECX,EAX
0041dc07  CALL dword ptr [EDX + 0x50]
0041dc0a  TEST EAX,EAX
0041dc0c  JZ 0x0041dc27
0041dc0e  FLD float ptr [ESP + 0x18]
0041dc12  FADD float ptr [EAX + 0x18]
0041dc15  FSTP float ptr [ESP + 0x18]
0041dc19  FLD float ptr [ESP + 0x1c]
0041dc1d  FADD float ptr [0x0089096c]
0041dc23  FSTP float ptr [ESP + 0x1c]
0041dc27  ADD ESI,0x4
0041dc2a  CMP ESI,EDI
0041dc2c  JNZ 0x0041dbf0
0041dc2e  MOV EAX,dword ptr [ESP + 0xc]
0041dc32  MOV ECX,dword ptr [ESP + 0x18]
0041dc36  MOV EDX,dword ptr [ESP + 0x1c]
0041dc3a  POP EDI
0041dc3b  MOV dword ptr [EAX],ECX
0041dc3d  MOV dword ptr [EAX + 0x4],EDX
0041dc40  POP ESI
0041dc41  RET
