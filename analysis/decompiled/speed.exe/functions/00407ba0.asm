00407ba0  PUSH ESI
00407ba1  MOV ESI,ECX
00407ba3  MOV ECX,dword ptr [ESP + 0x8]
00407ba7  MOV EAX,dword ptr [ECX]
00407ba9  CALL dword ptr [EAX + 0xac]
00407baf  TEST EAX,EAX
00407bb1  JZ 0x00407bda
00407bb3  MOV ECX,dword ptr [ESI]
00407bb5  MOV EDX,dword ptr [EAX]
00407bb7  MOV dword ptr [ESP + 0x8],ECX
00407bbb  PUSH ECX
00407bbc  MOV ECX,EAX
00407bbe  CALL dword ptr [EDX + 0x78]
00407bc1  FLD float ptr [ESI + 0x4]
00407bc4  FST float ptr [ESP + 0x8]
00407bc8  FCOMP
00407bca  FNSTSW AX
00407bcc  TEST AH,0x5
00407bcf  JP 0x00407bd7
00407bd1  FSTP ST0
00407bd3  FLD float ptr [ESP + 0x8]
00407bd7  FSTP float ptr [ESI + 0x4]
00407bda  POP ESI
00407bdb  RET 0x4
