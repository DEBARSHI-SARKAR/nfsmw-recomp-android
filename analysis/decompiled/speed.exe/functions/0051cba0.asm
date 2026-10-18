0051cba0  PUSH ESI
0051cba1  MOV ESI,ECX
0051cba3  MOV ECX,dword ptr [ESP + 0xc]
0051cba7  CMP ECX,0x9120409e
0051cbad  JZ 0x0051cbb7
0051cbaf  CMP ECX,0xb5971bf1
0051cbb5  JNZ 0x0051cbd7
0051cbb7  MOV EAX,[0x0091ca24]
0051cbbc  MOV EDX,dword ptr [0x0091cf90]
0051cbc2  MOV EDX,dword ptr [EDX + 0x10]
0051cbc5  LEA EAX,[EAX + EAX*0x4]
0051cbc8  LEA EAX,[EDX + EAX*0x4 + 0x82]
0051cbcf  CMP byte ptr [EAX],0x0
0051cbd2  SETZ DL
0051cbd5  MOV byte ptr [EAX],DL
0051cbd7  MOV EAX,dword ptr [ESI]
0051cbd9  PUSH ECX
0051cbda  MOV ECX,ESI
0051cbdc  MOV byte ptr [ESI + 0x2a],0x1
0051cbe0  CALL dword ptr [EAX + 0x38]
0051cbe3  MOV EDX,dword ptr [ESI]
0051cbe5  MOV ECX,ESI
0051cbe7  CALL dword ptr [EDX + 0xc]
0051cbea  POP ESI
0051cbeb  RET 0x8
