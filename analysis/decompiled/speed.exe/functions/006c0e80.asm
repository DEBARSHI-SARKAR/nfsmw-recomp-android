006c0e80  PUSH EBX
006c0e81  PUSH EBP
006c0e82  MOV EBP,dword ptr [0x00982bdc]
006c0e88  PUSH ESI
006c0e89  MOV ESI,ECX
006c0e8b  PUSH EDI
006c0e8c  MOV EDI,dword ptr [ESP + 0x18]
006c0e90  MOV EAX,dword ptr [EDI]
006c0e92  XOR EBX,EBX
006c0e94  MOV dword ptr [ESI + 0x8],EAX
006c0e97  MOV EAX,dword ptr [ESP + 0x14]
006c0e9b  MOV dword ptr [ESI],EBX
006c0e9d  MOV dword ptr [ESI + 0x10],EBX
006c0ea0  MOV byte ptr [ESI + 0x25],0x1
006c0ea4  MOV byte ptr [ESI + 0x24],BL
006c0ea7  MOV byte ptr [ESI + 0x1c],BL
006c0eaa  MOV ECX,dword ptr [EDI]
006c0eac  PUSH EBX
006c0ead  SHL ECX,0x2
006c0eb0  MOV dword ptr [ESI + 0xc],ECX
006c0eb3  PUSH ESI
006c0eb4  MOV dword ptr [ESI + 0x20],0x18
006c0ebb  MOV dword ptr [ESI + 0x18],EBX
006c0ebe  MOV dword ptr [ESI + 0x28],EBX
006c0ec1  MOV dword ptr [ESI + 0x2c],EBX
006c0ec4  MOV ECX,dword ptr [EAX]
006c0ec6  MOV EAX,dword ptr [ESI + 0xc]
006c0ec9  MOV EDX,dword ptr [EBP]
006c0ecc  PUSH EBX
006c0ecd  ADD EAX,0xa
006c0ed0  PUSH ECX
006c0ed1  LEA EAX,[EAX + EAX*0x2]
006c0ed4  PUSH 0x208
006c0ed9  SHL EAX,0x3
006c0edc  PUSH EAX
006c0edd  PUSH EBP
006c0ede  CALL dword ptr [EDX + 0x68]
006c0ee1  MOV EAX,dword ptr [EDI]
006c0ee3  MOV ECX,dword ptr [EBP]
006c0ee6  PUSH EBX
006c0ee7  ADD ESI,0x4
006c0eea  PUSH ESI
006c0eeb  PUSH 0x1
006c0eed  PUSH 0x65
006c0eef  LEA EDX,[EAX + EAX*0x2]
006c0ef2  PUSH EBX
006c0ef3  SHL EDX,0x2
006c0ef6  PUSH EDX
006c0ef7  PUSH EBP
006c0ef8  CALL dword ptr [ECX + 0x6c]
006c0efb  MOV EAX,dword ptr [ESI]
006c0efd  PUSH EBX
006c0efe  LEA EDX,[ESP + 0x1c]
006c0f02  PUSH EDX
006c0f03  PUSH EBX
006c0f04  PUSH EBX
006c0f05  MOV dword ptr [ESP + 0x28],EBX
006c0f09  MOV ECX,dword ptr [EAX]
006c0f0b  PUSH EAX
006c0f0c  CALL dword ptr [ECX + 0x2c]
006c0f0f  MOV EAX,dword ptr [EDI]
006c0f11  XOR EDX,EDX
006c0f13  CMP EAX,EBX
006c0f15  JBE 0x006c0f6d
006c0f17  MOV EAX,0x1
006c0f1c  LEA ESP,[ESP]
006c0f20  MOV EBX,dword ptr [ESP + 0x18]
006c0f24  LEA ECX,[EAX + 0x2]
006c0f27  MOV word ptr [EBX],CX
006c0f2a  MOV EBP,dword ptr [ESP + 0x18]
006c0f2e  LEA EBX,[EAX + -0x1]
006c0f31  MOV word ptr [EBP + 0x2],BX
006c0f35  MOV EBX,dword ptr [ESP + 0x18]
006c0f39  MOV word ptr [EBX + 0x4],AX
006c0f3d  MOV EBX,dword ptr [ESP + 0x18]
006c0f41  MOV word ptr [EBX + 0x6],AX
006c0f45  MOV EBP,dword ptr [ESP + 0x18]
006c0f49  LEA EBX,[EAX + 0x1]
006c0f4c  MOV word ptr [EBP + 0x8],BX
006c0f50  MOV EBX,dword ptr [ESP + 0x18]
006c0f54  MOV word ptr [EBX + 0xa],CX
006c0f58  MOV ECX,dword ptr [ESP + 0x18]
006c0f5c  ADD ECX,0xc
006c0f5f  ADD EAX,0x4
006c0f62  MOV dword ptr [ESP + 0x18],ECX
006c0f66  MOV ECX,dword ptr [EDI]
006c0f68  INC EDX
006c0f69  CMP EDX,ECX
006c0f6b  JC 0x006c0f20
006c0f6d  MOV ESI,dword ptr [ESI]
006c0f6f  MOV EAX,dword ptr [ESI]
006c0f71  PUSH ESI
006c0f72  CALL dword ptr [EAX + 0x30]
006c0f75  POP EDI
006c0f76  POP ESI
006c0f77  POP EBP
006c0f78  POP EBX
006c0f79  RET 0x8
