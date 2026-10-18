004e3ab0  SUB ESP,0xc
004e3ab3  MOV EAX,dword ptr [ECX + 0x54]
004e3ab6  TEST EAX,EAX
004e3ab8  MOV dword ptr [ESP + 0x4],0x0
004e3ac0  JLE 0x004e3bdc
004e3ac6  PUSH EBX
004e3ac7  PUSH EBP
004e3ac8  PUSH ESI
004e3ac9  PUSH EDI
004e3aca  LEA EBX,[EBX]
004e3ad0  MOV EDX,dword ptr [ESP + 0x14]
004e3ad4  MOV EAX,dword ptr [ECX + 0xc]
004e3ad7  LEA EAX,[EAX + EDX*0x8]
004e3ada  MOV EDX,dword ptr [EAX]
004e3adc  MOV ESI,dword ptr [EDX]
004e3ade  XOR EDX,EDX
004e3ae0  MOV DL,byte ptr [ESI + 0x2]
004e3ae3  MOV EBP,0x0
004e3ae8  LEA EDI,[ESI + 0x8]
004e3aeb  MOV dword ptr [ESP + 0x18],EBP
004e3aef  AND EDX,0xff
004e3af5  JLE 0x004e3b26
004e3af7  MOV ESI,dword ptr [ECX + 0x38]
004e3afa  MOV dword ptr [ESP + 0x10],EDX
004e3afe  MOV EDI,EDI
004e3b00  MOV EDX,dword ptr [EDI]
004e3b02  SAR EDX,0x10
004e3b05  AND EDX,0xff
004e3b0b  ADD EDI,0x4
004e3b0e  CMP EDX,ESI
004e3b10  JNZ 0x004e3b15
004e3b12  INC EBP
004e3b13  JMP 0x004e3b1c
004e3b15  MOV EBX,dword ptr [ECX + 0x4]
004e3b18  ADD EBP,dword ptr [EBX + EDX*0x4 + 0x4]
004e3b1c  DEC dword ptr [ESP + 0x10]
004e3b20  JNZ 0x004e3b00
004e3b22  MOV dword ptr [ESP + 0x18],EBP
004e3b26  MOV EDX,dword ptr [ECX + 0x4]
004e3b29  MOV ESI,dword ptr [EDX + 0x1d0]
004e3b2f  MOV EDI,dword ptr [EDX + 0x1b4]
004e3b35  LEA EDI,[EDI + ESI*0x4]
004e3b38  ADD ESI,EBP
004e3b3a  MOV dword ptr [EDX + 0x1d0],ESI
004e3b40  MOV EDX,dword ptr [EAX + 0x4]
004e3b43  MOV dword ptr [EDX],EDI
004e3b45  MOV EDX,dword ptr [EAX]
004e3b47  MOV dword ptr [EDX + 0x8],EBP
004e3b4a  MOV EDX,dword ptr [EAX]
004e3b4c  MOV EBX,dword ptr [EDX]
004e3b4e  MOV EAX,dword ptr [EAX + 0x4]
004e3b51  MOV ESI,dword ptr [EAX]
004e3b53  ADD EBX,0x8
004e3b56  TEST EBP,EBP
004e3b58  MOV dword ptr [ESP + 0x10],0x0
004e3b60  JLE 0x004e3bc4
004e3b62  MOV EAX,dword ptr [EBX]
004e3b64  MOV EDI,dword ptr [ECX + 0x38]
004e3b67  MOV EDX,EAX
004e3b69  SAR EAX,0x10
004e3b6c  AND EAX,0xff
004e3b71  ADD EBX,0x4
004e3b74  AND EDX,0xffff07ff
004e3b7a  CMP EAX,EDI
004e3b7c  JNZ 0x004e3b8d
004e3b7e  MOV EAX,dword ptr [ECX + 0x40]
004e3b81  SHL EAX,0xb
004e3b84  OR EAX,EDX
004e3b86  MOV dword ptr [ESI],EAX
004e3b88  ADD ESI,0x4
004e3b8b  JMP 0x004e3bb7
004e3b8d  MOV EDI,dword ptr [ECX + 0x4]
004e3b90  MOV EDI,dword ptr [EDI + EAX*0x4 + 0x4]
004e3b94  DEC dword ptr [ESP + 0x10]
004e3b98  XOR EAX,EAX
004e3b9a  TEST EDI,EDI
004e3b9c  JLE 0x004e3bb7
004e3b9e  ADD dword ptr [ESP + 0x10],EDI
004e3ba2  MOV EBP,EAX
004e3ba4  SHL EBP,0xb
004e3ba7  OR EBP,EDX
004e3ba9  MOV dword ptr [ESI],EBP
004e3bab  ADD ESI,0x4
004e3bae  INC EAX
004e3baf  CMP EAX,EDI
004e3bb1  JL 0x004e3ba2
004e3bb3  MOV EBP,dword ptr [ESP + 0x18]
004e3bb7  MOV EAX,dword ptr [ESP + 0x10]
004e3bbb  INC EAX
004e3bbc  CMP EAX,EBP
004e3bbe  MOV dword ptr [ESP + 0x10],EAX
004e3bc2  JL 0x004e3b62
004e3bc4  MOV EAX,dword ptr [ESP + 0x14]
004e3bc8  MOV EDX,dword ptr [ECX + 0x54]
004e3bcb  INC EAX
004e3bcc  CMP EAX,EDX
004e3bce  MOV dword ptr [ESP + 0x14],EAX
004e3bd2  JL 0x004e3ad0
004e3bd8  POP EDI
004e3bd9  POP ESI
004e3bda  POP EBP
004e3bdb  POP EBX
004e3bdc  ADD ESP,0xc
004e3bdf  RET
