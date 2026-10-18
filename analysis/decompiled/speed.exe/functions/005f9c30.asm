005f9c30  PUSH -0x1
005f9c32  PUSH 0x875ec3
005f9c37  MOV EAX,FS:[0x0]
005f9c3d  PUSH EAX
005f9c3e  MOV dword ptr FS:[0x0],ESP
005f9c45  PUSH ECX
005f9c46  MOV EAX,dword ptr [ESP + 0x14]
005f9c4a  PUSH EBX
005f9c4b  PUSH ESI
005f9c4c  PUSH EDI
005f9c4d  XOR EBX,EBX
005f9c4f  PUSH EBX
005f9c50  MOV ESI,ECX
005f9c52  PUSH EAX
005f9c53  MOV dword ptr [ESP + 0x14],ESI
005f9c57  CALL 0x005e8210
005f9c5c  LEA EDI,[ESI + 0x30]
005f9c5f  MOV ECX,EDI
005f9c61  MOV dword ptr [ESP + 0x18],EBX
005f9c65  MOV dword ptr [ESI],0x8a3ae0
005f9c6b  MOV dword ptr [ESI + 0x28],EBX
005f9c6e  MOV dword ptr [ESI + 0x2c],EBX
005f9c71  CALL 0x005e6dc0
005f9c76  MOV dword ptr [EDI + 0x4],EAX
005f9c79  MOV CL,0x1
005f9c7b  MOV byte ptr [EAX + 0x21],CL
005f9c7e  MOV EAX,dword ptr [EDI + 0x4]
005f9c81  MOV dword ptr [EAX + 0x4],EAX
005f9c84  MOV EAX,dword ptr [EDI + 0x4]
005f9c87  MOV dword ptr [EAX],EAX
005f9c89  MOV EAX,dword ptr [EDI + 0x4]
005f9c8c  MOV dword ptr [EAX + 0x8],EAX
005f9c8f  MOV dword ptr [EDI + 0x8],EBX
005f9c92  MOV byte ptr [ESP + 0x18],CL
005f9c96  MOV ECX,ESI
005f9c98  MOV byte ptr [ESI + 0x3c],BL
005f9c9b  MOV byte ptr [ESI + 0x3d],BL
005f9c9e  CALL 0x005f9480
005f9ca3  MOV ECX,dword ptr [ESP + 0x10]
005f9ca7  POP EDI
005f9ca8  MOV EAX,ESI
005f9caa  POP ESI
005f9cab  POP EBX
005f9cac  MOV dword ptr FS:[0x0],ECX
005f9cb3  ADD ESP,0x10
005f9cb6  RET 0x4
