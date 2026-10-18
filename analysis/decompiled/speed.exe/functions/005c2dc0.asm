005c2dc0  PUSH -0x1
005c2dc2  PUSH 0x8745b3
005c2dc7  MOV EAX,FS:[0x0]
005c2dcd  PUSH EAX
005c2dce  MOV dword ptr FS:[0x0],ESP
005c2dd5  PUSH ECX
005c2dd6  PUSH EBX
005c2dd7  PUSH EBP
005c2dd8  MOV EBP,ECX
005c2dda  MOV EAX,0xabadcafe
005c2ddf  PUSH ESI
005c2de0  PUSH EDI
005c2de1  MOV dword ptr [ESP + 0x10],EBP
005c2de5  MOV dword ptr [EBP + 0x4],EAX
005c2de8  MOV dword ptr [EBP + 0x8],EAX
005c2deb  XOR ESI,ESI
005c2ded  MOV dword ptr [EBP],0x8a2cec
005c2df4  MOV dword ptr [ESP + 0x1c],ESI
005c2df8  MOV dword ptr [EBP + 0x24],ESI
005c2dfb  MOV dword ptr [EBP + 0x28],ESI
005c2dfe  MOV EDI,dword ptr [ESP + 0x24]
005c2e02  MOV dword ptr [EBP + 0x2c],ESI
005c2e05  MOV dword ptr [EBP + 0x30],ESI
005c2e08  MOV dword ptr [EBP + 0xc],ESI
005c2e0b  MOV dword ptr [EBP + 0x14],ESI
005c2e0e  MOV dword ptr [EBP + 0x18],ESI
005c2e11  MOV dword ptr [EBP + 0x1c],ESI
005c2e14  MOV dword ptr [EBP + 0x20],ESI
005c2e17  MOV EAX,dword ptr [EDI + 0x2c]
005c2e1a  PUSH EAX
005c2e1b  MOV byte ptr [ESP + 0x20],0x1
005c2e20  CALL 0x005b2810
005c2e25  MOV ECX,dword ptr [EDI + 0x30]
005c2e28  MOV dword ptr [EBP + 0x30],ECX
005c2e2b  MOV EDX,dword ptr [EDI + 0xc]
005c2e2e  MOV dword ptr [EBP + 0xc],EDX
005c2e31  MOV EAX,dword ptr [EDI + 0x10]
005c2e34  MOV dword ptr [EBP + 0x10],EAX
005c2e37  MOV ECX,dword ptr [EDI + 0x14]
005c2e3a  MOV dword ptr [EBP + 0x14],ECX
005c2e3d  MOV EDX,dword ptr [EDI + 0x1c]
005c2e40  PUSH EDX
005c2e41  MOV ECX,EBP
005c2e43  CALL 0x005bf230
005c2e48  MOV AL,byte ptr [ESP + 0x28]
005c2e4c  TEST AL,AL
005c2e4e  MOV EAX,dword ptr [EBP + 0x1c]
005c2e51  JZ 0x005c2f5c
005c2e57  CMP EAX,ESI
005c2e59  MOV dword ptr [ESP + 0x28],ESI
005c2e5d  JBE 0x005c2f7d
005c2e63  MOV EAX,dword ptr [EDI + 0x20]
005c2e66  MOV DL,byte ptr [ESI + EAX*0x1]
005c2e69  MOV ECX,dword ptr [EBP + 0x20]
005c2e6c  MOV byte ptr [ESI + ECX*0x1],DL
005c2e6f  MOV EAX,dword ptr [EDI + 0x20]
005c2e72  MOV DL,byte ptr [EAX + ESI*0x1 + 0x1]
005c2e76  MOV ECX,dword ptr [EBP + 0x20]
005c2e79  MOV byte ptr [ESI + ECX*0x1 + 0x1],DL
005c2e7d  MOV EAX,dword ptr [EDI + 0x20]
005c2e80  MOV DL,byte ptr [EAX + ESI*0x1 + 0x2]
005c2e84  MOV ECX,dword ptr [EBP + 0x20]
005c2e87  MOV byte ptr [ESI + ECX*0x1 + 0x2],DL
005c2e8b  MOV EAX,dword ptr [EDI + 0x20]
005c2e8e  MOV DL,byte ptr [EAX + ESI*0x1 + 0x3]
005c2e92  MOV ECX,dword ptr [EBP + 0x20]
005c2e95  MOV byte ptr [ESI + ECX*0x1 + 0x3],DL
005c2e99  MOV ECX,dword ptr [EDI + 0x20]
005c2e9c  MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4]
005c2ea0  MOV EAX,dword ptr [EBP + 0x20]
005c2ea3  MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4]
005c2ea7  SHL EDX,0x8
005c2eaa  SAR EDX,0x8
005c2ead  XOR EDX,EBX
005c2eaf  LEA EAX,[ESI + EAX*0x1 + 0x4]
005c2eb3  AND EDX,0xffffff
005c2eb9  XOR EBX,EDX
005c2ebb  MOV dword ptr [EAX],EBX
005c2ebd  MOV EAX,dword ptr [EDI + 0x20]
005c2ec0  MOV DL,byte ptr [EAX + ESI*0x1 + 0x7]
005c2ec4  MOV ECX,dword ptr [EBP + 0x20]
005c2ec7  MOV byte ptr [ESI + ECX*0x1 + 0x7],DL
005c2ecb  MOV EAX,dword ptr [EDI + 0x20]
005c2ece  MOV ECX,dword ptr [EBP + 0x20]
005c2ed1  MOV EDX,dword ptr [EAX + ESI*0x1 + 0xc]
005c2ed5  MOV dword ptr [ESI + ECX*0x1 + 0xc],EDX
005c2ed9  MOV EDX,dword ptr [EAX + ESI*0x1 + 0x10]
005c2edd  LEA EAX,[EAX + ESI*0x1 + 0x8]
005c2ee1  LEA ECX,[ESI + ECX*0x1 + 0x8]
005c2ee5  MOV dword ptr [ECX + 0x8],EDX
005c2ee8  MOV EDX,dword ptr [EAX + 0xc]
005c2eeb  MOV dword ptr [ECX + 0xc],EDX
005c2eee  MOV EDX,dword ptr [EAX + 0x10]
005c2ef1  MOV dword ptr [ECX + 0x10],EDX
005c2ef4  MOV EDX,dword ptr [EAX + 0x14]
005c2ef7  MOV dword ptr [ECX + 0x14],EDX
005c2efa  MOV EDX,dword ptr [EAX + 0x18]
005c2efd  MOV dword ptr [ECX + 0x18],EDX
005c2f00  MOV EAX,dword ptr [EAX + 0x1c]
005c2f03  MOV dword ptr [ECX + 0x1c],EAX
005c2f06  MOV ECX,dword ptr [EDI + 0x20]
005c2f09  MOV EDX,dword ptr [EBP + 0x20]
005c2f0c  LEA EAX,[ECX + ESI*0x1 + 0x28]
005c2f10  XOR ECX,ECX
005c2f12  CMP EAX,ECX
005c2f14  MOV dword ptr [ESP + 0x24],EAX
005c2f18  LEA EBX,[ESI + EDX*0x1 + 0x28]
005c2f1c  JZ 0x005c2f39
005c2f1e  MOV CL,byte ptr [EBX + 0x4]
005c2f21  TEST CL,CL
005c2f23  JNZ 0x005c2f30
005c2f25  MOV ECX,EBX
005c2f27  CALL 0x005b3cd0
005c2f2c  MOV EAX,dword ptr [ESP + 0x24]
005c2f30  MOV dword ptr [EBX + 0x8],EAX
005c2f33  MOV byte ptr [EBX + 0x4],0x1
005c2f37  JMP 0x005c2f43
005c2f39  MOV dword ptr [EBX + 0x8],ECX
005c2f3c  MOV dword ptr [EBX + 0xc],ECX
005c2f3f  MOV byte ptr [EBX + 0x4],0x0
005c2f43  MOV EAX,dword ptr [ESP + 0x28]
005c2f47  MOV ECX,dword ptr [EBP + 0x1c]
005c2f4a  INC EAX
005c2f4b  ADD ESI,0x38
005c2f4e  CMP EAX,ECX
005c2f50  MOV dword ptr [ESP + 0x28],EAX
005c2f54  JC 0x005c2e63
005c2f5a  JMP 0x005c2f7d
005c2f5c  XOR EBX,EBX
005c2f5e  CMP EAX,ESI
005c2f60  JBE 0x005c2f7d
005c2f62  MOV EAX,dword ptr [EDI + 0x20]
005c2f65  MOV ECX,dword ptr [EBP + 0x20]
005c2f68  ADD EAX,ESI
005c2f6a  PUSH EAX
005c2f6b  ADD ECX,ESI
005c2f6d  CALL 0x005c1dc0
005c2f72  MOV EAX,dword ptr [EBP + 0x1c]
005c2f75  INC EBX
005c2f76  ADD ESI,0x38
005c2f79  CMP EBX,EAX
005c2f7b  JC 0x005c2f62
005c2f7d  MOV ECX,dword ptr [EDI + 0x24]
005c2f80  PUSH ECX
005c2f81  LEA EBX,[EBP + 0x24]
005c2f84  MOV ECX,EBX
005c2f86  CALL 0x005b5350
005c2f8b  MOV EAX,dword ptr [EBX]
005c2f8d  MOV ESI,dword ptr [EDI + 0x28]
005c2f90  MOV EDI,dword ptr [EBX + 0x4]
005c2f93  LEA ECX,[EAX + EAX*0x2]
005c2f96  SHL ECX,0x2
005c2f99  MOV EDX,ECX
005c2f9b  SHR ECX,0x2
005c2f9e  MOVSD.REP ES:EDI,ESI
005c2fa0  MOV ECX,EDX
005c2fa2  AND ECX,0x3
005c2fa5  MOVSB.REP ES:EDI,ESI
005c2fa7  MOV ECX,dword ptr [ESP + 0x14]
005c2fab  POP EDI
005c2fac  POP ESI
005c2fad  MOV EAX,EBP
005c2faf  POP EBP
005c2fb0  POP EBX
005c2fb1  MOV dword ptr FS:[0x0],ECX
005c2fb8  ADD ESP,0x10
005c2fbb  RET 0x8
