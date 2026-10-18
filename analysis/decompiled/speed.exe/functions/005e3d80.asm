005e3d80  PUSH EBX
005e3d81  PUSH EBP
005e3d82  MOV EBP,dword ptr [ESP + 0xc]
005e3d86  MOV EAX,dword ptr [EBP + 0xc]
005e3d89  PUSH ESI
005e3d8a  PUSH EDI
005e3d8b  PUSH EAX
005e3d8c  MOV EBX,ECX
005e3d8e  CALL 0x00652ad0
005e3d93  MOV dword ptr [EBX + 0x28],EAX
005e3d96  MOV ECX,dword ptr [EBP + 0xc]
005e3d99  MOV ESI,dword ptr [EBP + 0x8]
005e3d9c  MOV EDI,EAX
005e3d9e  MOV EAX,ECX
005e3da0  SHR ECX,0x2
005e3da3  ADD ESI,EBP
005e3da5  MOVSD.REP ES:EDI,ESI
005e3da7  MOV ECX,EAX
005e3da9  AND ECX,0x3
005e3dac  MOVSB.REP ES:EDI,ESI
005e3dae  MOV EAX,dword ptr [EBP + 0x4]
005e3db1  MOV dword ptr [EBX + 0x20],EAX
005e3db4  SHL EAX,0x6
005e3db7  PUSH 0x1000
005e3dbc  PUSH EAX
005e3dbd  CALL 0x00465a70
005e3dc2  MOV dword ptr [EBX + 0x24],EAX
005e3dc5  MOV EAX,dword ptr [EBX + 0x20]
005e3dc8  XOR EDX,EDX
005e3dca  ADD ESP,0xc
005e3dcd  CMP EAX,EDX
005e3dcf  MOV dword ptr [ESP + 0x14],EDX
005e3dd3  JBE 0x005e3e4b
005e3dd5  XOR EDI,EDI
005e3dd7  LEA ECX,[EBP + 0x14]
005e3dda  LEA EBX,[EBX]
005e3de0  MOV EAX,dword ptr [EBX + 0x28]
005e3de3  MOV ESI,dword ptr [ECX + -0x4]
005e3de6  ADD ESI,EAX
005e3de8  MOV EAX,dword ptr [EBX + 0x24]
005e3deb  ADD EAX,EDI
005e3ded  JZ 0x005e3e35
005e3def  MOV dword ptr [EAX + 0x4],ESI
005e3df2  MOV dword ptr [EAX],EDX
005e3df4  MOV dword ptr [EAX + 0x8],EDX
005e3df7  MOV dword ptr [EAX + 0xc],EDX
005e3dfa  MOV ESI,dword ptr [ECX + 0x8]
005e3dfd  MOV dword ptr [EAX + 0x10],ESI
005e3e00  MOV ESI,dword ptr [ECX]
005e3e02  ADD ESI,0xf
005e3e05  AND ESI,0xfffffff0
005e3e08  MOV dword ptr [EAX + 0x14],ESI
005e3e0b  MOV ESI,dword ptr [ECX + 0xc]
005e3e0e  MOV dword ptr [EAX + 0x18],ESI
005e3e11  MOV ESI,dword ptr [ECX + 0x4]
005e3e14  ADD ESI,0xf
005e3e17  AND ESI,0xfffffff0
005e3e1a  MOV dword ptr [EAX + 0x1c],ESI
005e3e1d  MOV dword ptr [EAX + 0x20],EDX
005e3e20  MOV dword ptr [EAX + 0x24],EDX
005e3e23  MOV dword ptr [EAX + 0x28],EDX
005e3e26  MOV dword ptr [EAX + 0x2c],EDX
005e3e29  MOV dword ptr [EAX + 0x30],EDX
005e3e2c  MOV dword ptr [EAX + 0x34],EDX
005e3e2f  MOV dword ptr [EAX + 0x38],EDX
005e3e32  MOV dword ptr [EAX + 0x3c],EDX
005e3e35  MOV EAX,dword ptr [ESP + 0x14]
005e3e39  MOV ESI,dword ptr [EBX + 0x20]
005e3e3c  INC EAX
005e3e3d  ADD ECX,0x14
005e3e40  ADD EDI,0x40
005e3e43  CMP EAX,ESI
005e3e45  MOV dword ptr [ESP + 0x14],EAX
005e3e49  JC 0x005e3de0
005e3e4b  POP EDI
005e3e4c  POP ESI
005e3e4d  POP EBP
005e3e4e  POP EBX
005e3e4f  RET 0x4
