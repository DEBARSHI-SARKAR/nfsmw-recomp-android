0047edb0  MOV EAX,dword ptr [ESP + 0x4]
0047edb4  LEA EDX,[EAX + EAX*0x2]
0047edb7  PUSH ESI
0047edb8  LEA ESI,[ECX + EDX*0x4]
0047edbb  MOV EDX,dword ptr [ESP + 0xc]
0047edbf  PUSH EDI
0047edc0  MOV EDI,dword ptr [ESI + 0x1c]
0047edc3  MOV dword ptr [EDX],EDI
0047edc5  MOV ESI,dword ptr [ESI + 0x20]
0047edc8  MOV dword ptr [EDX + 0x4],ESI
0047edcb  LEA EAX,[EAX + EAX*0x2 + 0x9]
0047edcf  MOV EAX,dword ptr [ECX + EAX*0x4]
0047edd2  MOV dword ptr [EDX + 0x8],EAX
0047edd5  MOV AL,[0x009110a0]
0047edda  TEST AL,AL
0047eddc  POP EDI
0047eddd  POP ESI
0047edde  JZ 0x0047ede8
0047ede0  FLD float ptr [EDX + 0x4]
0047ede3  FCHS
0047ede5  FSTP float ptr [EDX + 0x4]
0047ede8  CMP byte ptr [ECX + 0x4],0x3
0047edec  JNZ 0x0047edf9
0047edee  PUSH EDX
0047edef  MOV ECX,0x8ee320
0047edf4  CALL 0x0047b300
0047edf9  RET 0x8
