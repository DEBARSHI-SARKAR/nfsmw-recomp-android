0051cac0  PUSH ESI
0051cac1  MOV ESI,ECX
0051cac3  MOV ECX,dword ptr [ESP + 0xc]
0051cac7  CMP ECX,0x9120409e
0051cacd  JZ 0x0051cad7
0051cacf  CMP ECX,0xb5971bf1
0051cad5  JNZ 0x0051caf7
0051cad7  MOV EAX,[0x0091ca24]
0051cadc  MOV EDX,dword ptr [0x0091cf90]
0051cae2  MOV EDX,dword ptr [EDX + 0x10]
0051cae5  LEA EAX,[EAX + EAX*0x4]
0051cae8  LEA EAX,[EDX + EAX*0x4 + 0x81]
0051caef  CMP byte ptr [EAX],0x0
0051caf2  SETZ DL
0051caf5  MOV byte ptr [EAX],DL
0051caf7  MOV EAX,dword ptr [ESI]
0051caf9  PUSH ECX
0051cafa  MOV ECX,ESI
0051cafc  MOV byte ptr [ESI + 0x2a],0x1
0051cb00  CALL dword ptr [EAX + 0x38]
0051cb03  MOV EDX,dword ptr [ESI]
0051cb05  MOV ECX,ESI
0051cb07  CALL dword ptr [EDX + 0xc]
0051cb0a  POP ESI
0051cb0b  RET 0x8
