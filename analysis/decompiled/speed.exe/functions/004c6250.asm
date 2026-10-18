004c6250  PUSH ESI
004c6251  MOV ESI,ECX
004c6253  MOV EAX,dword ptr [ESI + 0x28]
004c6256  XOR ECX,ECX
004c6258  CMP EAX,ECX
004c625a  MOV EAX,dword ptr [ESI + 0xc]
004c625d  JNZ 0x004c6286
004c625f  MOV dword ptr [EAX + 0xc],ECX
004c6262  MOV EDX,dword ptr [ESI + 0xc]
004c6265  MOV dword ptr [EDX + 0x4],0xffffffff
004c626c  MOV EAX,dword ptr [ESI + 0xc]
004c626f  MOV dword ptr [EAX + 0x8],ECX
004c6272  MOV ECX,dword ptr [ESI + 0xc]
004c6275  MOV dword ptr [ECX],0xffffffff
004c627b  MOV ESI,dword ptr [ESI + 0xc]
004c627e  AND dword ptr [ESI + 0x3c],0xfffffffe
004c6282  POP ESI
004c6283  RET 0x4
004c6286  OR dword ptr [EAX + 0x3c],0x1
004c628a  MOV EDX,dword ptr [ESI + 0xc]
004c628d  MOV EAX,dword ptr [ESI + 0x44]
004c6290  MOV dword ptr [EDX + 0x2c],EAX
004c6293  MOV EDX,dword ptr [ESI]
004c6295  PUSH ECX
004c6296  MOV ECX,ESI
004c6298  CALL dword ptr [EDX + 0x34]
004c629b  MOV EAX,dword ptr [ESP + 0x8]
004c629f  MOV ECX,dword ptr [ESI + 0x44]
004c62a2  PUSH EAX
004c62a3  PUSH ECX
004c62a4  MOV ECX,ESI
004c62a6  CALL 0x004bf2e0
004c62ab  POP ESI
004c62ac  RET 0x4
