0040edd0  PUSH EBX
0040edd1  MOV EBX,dword ptr [ESP + 0x14]
0040edd5  PUSH ESI
0040edd6  MOV ESI,dword ptr [ESP + 0x10]
0040edda  PUSH EDI
0040eddb  MOV EDI,dword ptr [ESP + 0x18]
0040eddf  CMP ESI,EDI
0040ede1  JZ 0x0040ee17
0040ede3  MOV ECX,dword ptr [ESI]
0040ede5  MOV EAX,dword ptr [ECX]
0040ede7  CALL dword ptr [EAX + 0xac]
0040eded  TEST EAX,EAX
0040edef  JZ 0x0040ee10
0040edf1  MOV EDX,dword ptr [EAX]
0040edf3  PUSH EBX
0040edf4  MOV ECX,EAX
0040edf6  CALL dword ptr [EDX + 0x78]
0040edf9  FLD float ptr [ESP + 0x20]
0040edfd  FCOMP
0040edff  FNSTSW AX
0040ee01  TEST AH,0x5
0040ee04  JP 0x0040ee0c
0040ee06  FSTP ST0
0040ee08  FLD float ptr [ESP + 0x20]
0040ee0c  FSTP float ptr [ESP + 0x20]
0040ee10  ADD ESI,0x4
0040ee13  CMP ESI,EDI
0040ee15  JNZ 0x0040ede3
0040ee17  MOV EAX,dword ptr [ESP + 0x10]
0040ee1b  MOV ECX,dword ptr [ESP + 0x20]
0040ee1f  POP EDI
0040ee20  POP ESI
0040ee21  MOV dword ptr [EAX],EBX
0040ee23  MOV dword ptr [EAX + 0x4],ECX
0040ee26  POP EBX
0040ee27  RET
