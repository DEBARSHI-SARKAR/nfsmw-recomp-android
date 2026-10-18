005f9ba0  PUSH -0x1
005f9ba2  PUSH 0x875ea3
005f9ba7  MOV EAX,FS:[0x0]
005f9bad  PUSH EAX
005f9bae  MOV dword ptr FS:[0x0],ESP
005f9bb5  PUSH ECX
005f9bb6  MOV EAX,dword ptr [ESP + 0x14]
005f9bba  PUSH EBX
005f9bbb  PUSH ESI
005f9bbc  PUSH EDI
005f9bbd  XOR EBX,EBX
005f9bbf  PUSH EBX
005f9bc0  MOV ESI,ECX
005f9bc2  PUSH EAX
005f9bc3  MOV dword ptr [ESP + 0x14],ESI
005f9bc7  CALL 0x005e8130
005f9bcc  LEA EDI,[ESI + 0x30]
005f9bcf  MOV ECX,EDI
005f9bd1  MOV dword ptr [ESP + 0x18],EBX
005f9bd5  MOV dword ptr [ESI],0x8a3ae0
005f9bdb  MOV dword ptr [ESI + 0x28],EBX
005f9bde  MOV dword ptr [ESI + 0x2c],EBX
005f9be1  CALL 0x005e6dc0
005f9be6  MOV dword ptr [EDI + 0x4],EAX
005f9be9  MOV CL,0x1
005f9beb  MOV byte ptr [EAX + 0x21],CL
005f9bee  MOV EAX,dword ptr [EDI + 0x4]
005f9bf1  MOV dword ptr [EAX + 0x4],EAX
005f9bf4  MOV EAX,dword ptr [EDI + 0x4]
005f9bf7  MOV dword ptr [EAX],EAX
005f9bf9  MOV EAX,dword ptr [EDI + 0x4]
005f9bfc  MOV dword ptr [EAX + 0x8],EAX
005f9bff  MOV dword ptr [EDI + 0x8],EBX
005f9c02  MOV byte ptr [ESP + 0x18],CL
005f9c06  MOV ECX,ESI
005f9c08  MOV byte ptr [ESI + 0x3c],BL
005f9c0b  MOV byte ptr [ESI + 0x3d],BL
005f9c0e  CALL 0x005f9480
005f9c13  MOV ECX,dword ptr [ESP + 0x10]
005f9c17  POP EDI
005f9c18  MOV EAX,ESI
005f9c1a  POP ESI
005f9c1b  POP EBX
005f9c1c  MOV dword ptr FS:[0x0],ECX
005f9c23  ADD ESP,0x10
005f9c26  RET 0x4
