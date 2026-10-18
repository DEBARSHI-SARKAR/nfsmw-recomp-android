006c9b60  SUB ESP,0x38
006c9b63  PUSH EBX
006c9b64  PUSH ESI
006c9b65  MOV ESI,ECX
006c9b67  MOV EAX,dword ptr [ESI + 0x4]
006c9b6a  MOV ECX,dword ptr [ESI + 0x8]
006c9b6d  MOV dword ptr [ESI + 0xc],EAX
006c9b70  XOR EDX,EDX
006c9b72  PUSH EDI
006c9b73  LEA EAX,[ESP + 0x34]
006c9b77  MOV dword ptr [ESI + 0x10],ECX
006c9b7a  MOV ECX,dword ptr [0x00982bf4]
006c9b80  MOV dword ptr [ESP + 0x38],EDX
006c9b84  PUSH EAX
006c9b85  MOV dword ptr [ESP + 0x40],EDX
006c9b89  XOR EBX,EBX
006c9b8b  PUSH ECX
006c9b8c  MOV dword ptr [ESP + 0x3c],EBX
006c9b90  MOV dword ptr [ESP + 0x48],EDX
006c9b94  CALL dword ptr [0x0089038c]
006c9b9a  LEA EDX,[ESP + 0x1c]
006c9b9e  PUSH EDX
006c9b9f  MOV dword ptr [ESP + 0x20],EBX
006c9ba3  MOV dword ptr [ESP + 0x24],EBX
006c9ba7  CALL dword ptr [0x00890348]
006c9bad  MOV EDX,dword ptr [0x00982bf4]
006c9bb3  XOR EAX,EAX
006c9bb5  LEA ECX,[ESP + 0x24]
006c9bb9  MOV dword ptr [ESP + 0x28],EAX
006c9bbd  PUSH ECX
006c9bbe  MOV dword ptr [ESP + 0x30],EAX
006c9bc2  PUSH EDX
006c9bc3  MOV dword ptr [ESP + 0x2c],EBX
006c9bc7  MOV dword ptr [ESP + 0x38],EAX
006c9bcb  CALL dword ptr [0x00890390]
006c9bd1  MOV ECX,dword ptr [ESP + 0x28]
006c9bd5  MOV EAX,dword ptr [ESP + 0x30]
006c9bd9  MOV EDI,dword ptr [ESP + 0x2c]
006c9bdd  MOV EDX,dword ptr [ESP + 0x24]
006c9be1  SUB EAX,ECX
006c9be3  MOV ECX,dword ptr [0x00982bf0]
006c9be9  SUB EDI,EDX
006c9beb  NEG ECX
006c9bed  SBB ECX,ECX
006c9bef  AND ECX,0x18
006c9bf2  CMP EAX,EBX
006c9bf4  MOV dword ptr [ESP + 0x18],EDI
006c9bf8  MOV dword ptr [ESP + 0x10],EAX
006c9bfc  MOV dword ptr [ESP + 0x14],ECX
006c9c00  JZ 0x006c9c2c
006c9c02  MOV EAX,dword ptr [ESP + 0x38]
006c9c06  MOV EDX,dword ptr [ESP + 0x20]
006c9c0a  SUB EDX,EAX
006c9c0c  MOV dword ptr [ESP + 0xc],EDX
006c9c10  FILD dword ptr [ESP + 0xc]
006c9c14  FMUL float ptr [0x008af2c0]
006c9c1a  FIDIV dword ptr [ESP + 0x10]
006c9c1e  FISUB dword ptr [ESP + 0x14]
006c9c22  CALL 0x007c4b80
006c9c27  MOV dword ptr [ESI + 0x8],EAX
006c9c2a  JMP 0x006c9c2f
006c9c2c  MOV dword ptr [ESI + 0x8],EBX
006c9c2f  CMP EDI,EBX
006c9c31  JZ 0x006c9c59
006c9c33  MOV ECX,dword ptr [ESP + 0x34]
006c9c37  MOV EAX,dword ptr [ESP + 0x1c]
006c9c3b  SUB EAX,ECX
006c9c3d  MOV dword ptr [ESP + 0x14],EAX
006c9c41  FILD dword ptr [ESP + 0x14]
006c9c45  FMUL float ptr [0x008ae8f8]
006c9c4b  FIDIV dword ptr [ESP + 0x18]
006c9c4f  CALL 0x007c4b80
006c9c54  MOV dword ptr [ESI + 0x4],EAX
006c9c57  JMP 0x006c9c5c
006c9c59  MOV dword ptr [ESI + 0x4],EBX
006c9c5c  MOV EDX,dword ptr [ESI + 0xc]
006c9c5f  MOV ECX,dword ptr [ESI + 0x4]
006c9c62  MOV EAX,dword ptr [ESI + 0x10]
006c9c65  SUB ECX,EDX
006c9c67  MOV EDX,dword ptr [ESI + 0x8]
006c9c6a  SUB EDX,EAX
006c9c6c  POP EDI
006c9c6d  MOV dword ptr [ESI + 0x14],ECX
006c9c70  MOV dword ptr [ESI + 0x18],EDX
006c9c73  POP ESI
006c9c74  POP EBX
006c9c75  ADD ESP,0x38
006c9c78  RET
