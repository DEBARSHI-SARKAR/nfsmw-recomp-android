0051cc80  PUSH ESI
0051cc81  MOV ESI,ECX
0051cc83  MOV ECX,dword ptr [ESP + 0xc]
0051cc87  CMP ECX,0x9120409e
0051cc8d  JZ 0x0051cc97
0051cc8f  CMP ECX,0xb5971bf1
0051cc95  JNZ 0x0051ccb7
0051cc97  MOV EAX,[0x0091ca24]
0051cc9c  MOV EDX,dword ptr [0x0091cf90]
0051cca2  MOV EDX,dword ptr [EDX + 0x10]
0051cca5  LEA EAX,[EAX + EAX*0x4]
0051cca8  LEA EAX,[EDX + EAX*0x4 + 0x83]
0051ccaf  CMP byte ptr [EAX],0x0
0051ccb2  SETZ DL
0051ccb5  MOV byte ptr [EAX],DL
0051ccb7  MOV EAX,dword ptr [ESI]
0051ccb9  PUSH ECX
0051ccba  MOV ECX,ESI
0051ccbc  MOV byte ptr [ESI + 0x2a],0x1
0051ccc0  CALL dword ptr [EAX + 0x38]
0051ccc3  MOV EDX,dword ptr [ESI]
0051ccc5  MOV ECX,ESI
0051ccc7  CALL dword ptr [EDX + 0xc]
0051ccca  POP ESI
0051cccb  RET 0x8
