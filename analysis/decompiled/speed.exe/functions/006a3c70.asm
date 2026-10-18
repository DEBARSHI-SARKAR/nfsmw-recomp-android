006a3c70  PUSH ESI
006a3c71  PUSH EDI
006a3c72  MOV EDI,dword ptr [ESP + 0xc]
006a3c76  MOV EAX,dword ptr [EDI]
006a3c78  MOV ESI,ECX
006a3c7a  CMP EAX,dword ptr [0x0092c658]
006a3c80  JNZ 0x006a3cae
006a3c82  MOV EAX,dword ptr [ESI + 0x34]
006a3c85  MOV ECX,dword ptr [EAX + 0x4]
006a3c88  PUSH 0x404040
006a3c8d  CALL 0x005d59f0
006a3c92  MOV dword ptr [ESI + 0x88],EAX
006a3c98  MOV EAX,dword ptr [ESI + 0x34]
006a3c9b  MOV ECX,dword ptr [EAX + 0x4]
006a3c9e  PUSH 0x445650
006a3ca3  CALL 0x005d59f0
006a3ca8  MOV dword ptr [ESI + 0x9c],EAX
006a3cae  MOV ECX,dword ptr [EDI]
006a3cb0  CMP ECX,dword ptr [0x0092c5e0]
006a3cb6  JNZ 0x006a3cce
006a3cb8  MOV EAX,dword ptr [ESI + 0x34]
006a3cbb  MOV ECX,dword ptr [EAX + 0x4]
006a3cbe  PUSH 0x4039e0
006a3cc3  CALL 0x005d59f0
006a3cc8  MOV dword ptr [ESI + 0x98],EAX
006a3cce  MOV EDX,dword ptr [EDI]
006a3cd0  CMP EDX,dword ptr [0x0092c618]
006a3cd6  JNZ 0x006a3d1a
006a3cd8  MOV EAX,dword ptr [ESI + 0x34]
006a3cdb  MOV ECX,dword ptr [EAX + 0x4]
006a3cde  PUSH 0x405000
006a3ce3  CALL 0x005d59f0
006a3ce8  MOV dword ptr [ESI + 0x8c],EAX
006a3cee  MOV EAX,dword ptr [ESI + 0x34]
006a3cf1  MOV ECX,dword ptr [EAX + 0x4]
006a3cf4  PUSH 0x620fd0
006a3cf9  CALL 0x005d59f0
006a3cfe  MOV dword ptr [ESI + 0x94],EAX
006a3d04  MOV EAX,dword ptr [ESI + 0x34]
006a3d07  MOV ECX,dword ptr [EAX + 0x4]
006a3d0a  PUSH 0x68cc70
006a3d0f  CALL 0x005d59f0
006a3d14  MOV dword ptr [ESI + 0xa0],EAX
006a3d1a  POP EDI
006a3d1b  POP ESI
006a3d1c  RET 0x4
