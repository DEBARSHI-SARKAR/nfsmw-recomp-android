007aff10  FLD float ptr [ESP + 0x14]
007aff14  MOV EAX,dword ptr [ESP + 0xc]
007aff18  FCOMP float ptr [ESP + 0xc]
007aff1c  PUSH EBX
007aff1d  PUSH ESI
007aff1e  MOV ESI,ECX
007aff20  MOV ECX,dword ptr [ESP + 0x18]
007aff24  MOV dword ptr [ESI + 0x4],EAX
007aff27  FNSTSW AX
007aff29  PUSH EDI
007aff2a  TEST AH,0x41
007aff2d  MOV dword ptr [ESI + 0x8],ECX
007aff30  JNZ 0x007aff38
007aff32  FLD float ptr [ESP + 0x20]
007aff36  JMP 0x007aff3c
007aff38  FLD float ptr [ESP + 0x18]
007aff3c  FCOM float ptr [ESP + 0x1c]
007aff40  FNSTSW AX
007aff42  TEST AH,0x5
007aff45  JNP 0x007aff4d
007aff47  FSTP ST0
007aff49  FLD float ptr [ESP + 0x1c]
007aff4d  MOV EDX,dword ptr [ESI + 0x10]
007aff50  FSTP float ptr [ESI + 0xc]
007aff53  FLD float ptr [ESP + 0x24]
007aff57  MOV dword ptr [ESI + 0x14],EDX
007aff5a  FCOMP float ptr [ESP + 0x18]
007aff5e  FNSTSW AX
007aff60  TEST AH,0x41
007aff63  JNZ 0x007aff6b
007aff65  FLD float ptr [ESP + 0x24]
007aff69  JMP 0x007aff6f
007aff6b  FLD float ptr [ESP + 0x18]
007aff6f  FCOM float ptr [ESP + 0x1c]
007aff73  FNSTSW AX
007aff75  TEST AH,0x5
007aff78  JNP 0x007aff80
007aff7a  FSTP ST0
007aff7c  FLD float ptr [ESP + 0x1c]
007aff80  MOV EBX,dword ptr [ESP + 0x10]
007aff84  FSTP float ptr [ESI + 0x10]
007aff87  PUSH 0x5ffee1d8
007aff8c  PUSH EBX
007aff8d  CALL 0x005251a0
007aff92  PUSH 0xe637955c
007aff97  PUSH EBX
007aff98  MOV dword ptr [ESI + 0x1c],EAX
007aff9b  CALL 0x005251a0
007affa0  PUSH 0xf2492598
007affa5  PUSH EBX
007affa6  MOV dword ptr [ESI + 0x20],EAX
007affa9  CALL 0x00524850
007affae  ADD ESP,0x18
007affb1  MOV dword ptr [ESI + 0x4c],EAX
007affb4  XOR EAX,EAX
007affb6  LEA EDI,[ESI + 0x24]
007affb9  LEA ESP,[ESP]
007affc0  LEA ESI,[EAX + 0x1]
007affc3  PUSH ESI
007affc4  PUSH 0x8b79ec
007affc9  CALL 0x00573140
007affce  PUSH EAX
007affcf  PUSH EBX
007affd0  CALL 0x005251a0
007affd5  MOV dword ptr [EDI],EAX
007affd7  MOV EAX,ESI
007affd9  ADD ESP,0x10
007affdc  ADD EDI,0x4
007affdf  CMP EAX,0xa
007affe2  JL 0x007affc0
007affe4  POP EDI
007affe5  POP ESI
007affe6  POP EBX
007affe7  RET 0x18
