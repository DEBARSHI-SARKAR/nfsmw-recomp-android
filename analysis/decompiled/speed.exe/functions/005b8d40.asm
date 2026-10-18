005b8d40  MOV EAX,FS:[0x0]
005b8d46  PUSH -0x1
005b8d48  PUSH 0x873fe3
005b8d4d  PUSH EAX
005b8d4e  MOV dword ptr FS:[0x0],ESP
005b8d55  SUB ESP,0x1c
005b8d58  PUSH EDI
005b8d59  MOV EDI,ECX
005b8d5b  MOV EAX,dword ptr [EDI + 0x4]
005b8d5e  MOV ECX,dword ptr [EAX + 0x4]
005b8d61  LEA EDX,[ECX + EAX*0x1 + 0x8]
005b8d65  MOV ECX,dword ptr [EAX + 0x8]
005b8d68  ADD EAX,0x8
005b8d6b  CMP ECX,0x67726154
005b8d71  JZ 0x005b8d86
005b8d73  CMP EAX,EDX
005b8d75  JZ 0x005b8d86
005b8d77  MOV ECX,dword ptr [EAX + 0x4]
005b8d7a  LEA EAX,[EAX + ECX*0x1 + 0x8]
005b8d7e  CMP dword ptr [EAX],0x67726154
005b8d84  JNZ 0x005b8d73
005b8d86  CMP dword ptr [EAX],0x67726154
005b8d8c  JNZ 0x005b8f02
005b8d92  PUSH ESI
005b8d93  LEA ESI,[EAX + 0x8]
005b8d96  MOV EAX,dword ptr [EAX + 0x4]
005b8d99  ADD EAX,ESI
005b8d9b  CMP ESI,EAX
005b8d9d  MOV dword ptr [ESP + 0x10],ESI
005b8da1  MOV dword ptr [ESP + 0x14],EAX
005b8da5  JNC 0x005b8f01
005b8dab  PUSH EBX
005b8dac  PUSH EBP
005b8dad  MOV dword ptr [ESP + 0x10],0x0
005b8db5  JMP 0x005b8dc0
005b8db7  MOV ESI,dword ptr [ESP + 0x18]
005b8dbb  JMP 0x005b8dc0
005b8dc0  MOVZX EAX,word ptr [ESI]
005b8dc3  CMP EAX,0x6354
005b8dc8  JZ 0x005b8e9b
005b8dce  CMP EAX,0x744d
005b8dd3  JNZ 0x005b8ee7
005b8dd9  MOV EAX,dword ptr [EDI]
005b8ddb  MOV EAX,dword ptr [EAX + 0x70]
005b8dde  MOV EDX,dword ptr [ESP + 0x10]
005b8de2  MOVZX EBP,word ptr [ESI + 0x2]
005b8de6  MOV ECX,dword ptr [ESI + 0x4]
005b8de9  LEA EBX,[ESI + 0x4]
005b8dec  ADD EAX,EDX
005b8dee  MOV dword ptr [EAX],ECX
005b8df0  MOV ECX,dword ptr [EDI]
005b8df2  MOV ECX,dword ptr [ECX + 0x70]
005b8df5  SHR EBP,0x2
005b8df8  DEC EBP
005b8df9  PUSH EBP
005b8dfa  ADD ECX,EDX
005b8dfc  ADD EBX,0x4
005b8dff  CALL 0x005b6f20
005b8e04  TEST EBP,EBP
005b8e06  MOV dword ptr [ESP + 0x14],0x0
005b8e0e  JBE 0x005b8e94
005b8e14  MOV EDX,dword ptr [ESP + 0x14]
005b8e18  MOV EAX,dword ptr [EBX + EDX*0x4]
005b8e1b  MOV ECX,dword ptr [EDI]
005b8e1d  MOV dword ptr [ESP + 0x20],0x8a2cb0
005b8e25  MOV dword ptr [ESP + 0x24],EAX
005b8e29  LEA EAX,[ESP + 0x20]
005b8e2d  PUSH EAX
005b8e2e  MOV dword ptr [ESP + 0x38],0x1
005b8e36  MOV dword ptr [ESP + 0x2c],0x0
005b8e3e  CALL 0x005b1560
005b8e43  MOV ECX,dword ptr [EDI]
005b8e45  MOV ESI,dword ptr [ECX + 0x70]
005b8e48  MOV EDX,dword ptr [ESP + 0x10]
005b8e4c  MOV EAX,dword ptr [ESI + EDX*0x1 + 0x4]
005b8e50  MOV ECX,dword ptr [ESI + EDX*0x1 + 0x8]
005b8e54  ADD ESI,EDX
005b8e56  CMP ECX,EAX
005b8e58  MOV dword ptr [ESP + 0x34],0xffffffff
005b8e60  MOV dword ptr [ESP + 0x20],0x89b064
005b8e68  JNZ 0x005b8e73
005b8e6a  INC EAX
005b8e6b  PUSH EAX
005b8e6c  MOV ECX,ESI
005b8e6e  CALL 0x005b6f20
005b8e73  MOV EDX,dword ptr [ESI + 0x8]
005b8e76  MOV EAX,dword ptr [ESI + 0xc]
005b8e79  MOV ECX,dword ptr [ESP + 0x28]
005b8e7d  MOV dword ptr [EAX + EDX*0x4],ECX
005b8e80  INC dword ptr [ESI + 0x8]
005b8e83  MOV EAX,dword ptr [ESP + 0x14]
005b8e87  INC EAX
005b8e88  CMP EAX,EBP
005b8e8a  MOV dword ptr [ESP + 0x14],EAX
005b8e8e  JC 0x005b8e14
005b8e90  MOV ESI,dword ptr [ESP + 0x18]
005b8e94  ADD dword ptr [ESP + 0x10],0x10
005b8e99  JMP 0x005b8ee7
005b8e9b  MOV EBX,dword ptr [ESI + 0x4]
005b8e9e  MOV EDX,dword ptr [EDI]
005b8ea0  MOV EAX,EBX
005b8ea2  SHL EAX,0x4
005b8ea5  ADD EAX,0x4
005b8ea8  PUSH EAX
005b8ea9  MOV dword ptr [EDX + 0x6c],EBX
005b8eac  CALL 0x00652ad0
005b8eb1  ADD ESP,0x4
005b8eb4  MOV dword ptr [ESP + 0x18],EAX
005b8eb8  XOR EBP,EBP
005b8eba  CMP EAX,EBP
005b8ebc  MOV dword ptr [ESP + 0x34],EBP
005b8ec0  JZ 0x005b8eda
005b8ec2  PUSH 0x5ad810
005b8ec7  PUSH 0x5ad800
005b8ecc  PUSH EBX
005b8ecd  LEA EBP,[EAX + 0x4]
005b8ed0  PUSH 0x10
005b8ed2  PUSH EBP
005b8ed3  MOV dword ptr [EAX],EBX
005b8ed5  CALL 0x007c90a0
005b8eda  MOV ECX,dword ptr [EDI]
005b8edc  MOV dword ptr [ESP + 0x34],0xffffffff
005b8ee4  MOV dword ptr [ECX + 0x70],EBP
005b8ee7  MOVZX EDX,word ptr [ESI + 0x2]
005b8eeb  MOV EAX,dword ptr [ESP + 0x1c]
005b8eef  LEA ESI,[ESI + EDX*0x1 + 0x4]
005b8ef3  CMP ESI,EAX
005b8ef5  MOV dword ptr [ESP + 0x18],ESI
005b8ef9  JC 0x005b8db7
005b8eff  POP EBP
005b8f00  POP EBX
005b8f01  POP ESI
005b8f02  MOV ECX,dword ptr [ESP + 0x20]
005b8f06  MOV AL,0x1
005b8f08  POP EDI
005b8f09  MOV dword ptr FS:[0x0],ECX
005b8f10  ADD ESP,0x28
005b8f13  RET
