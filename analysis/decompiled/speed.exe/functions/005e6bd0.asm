005e6bd0  PUSH 0x0
005e6bd2  PUSH 0x24
005e6bd4  MOV ECX,0x925b30
005e6bd9  CALL 0x005d29d0
005e6bde  TEST EAX,EAX
005e6be0  JZ 0x005e6c26
005e6be2  MOV ECX,dword ptr [ESP + 0x4]
005e6be6  MOV EDX,dword ptr [ESP + 0x8]
005e6bea  MOV dword ptr [EAX],ECX
005e6bec  MOV ECX,dword ptr [ESP + 0xc]
005e6bf0  MOV dword ptr [EAX + 0x4],EDX
005e6bf3  MOV dword ptr [EAX + 0x8],ECX
005e6bf6  MOV ECX,dword ptr [ESP + 0x10]
005e6bfa  PUSH ESI
005e6bfb  MOV ESI,dword ptr [ECX]
005e6bfd  LEA EDX,[EAX + 0xc]
005e6c00  MOV dword ptr [EDX],ESI
005e6c02  MOV ESI,dword ptr [ECX + 0x4]
005e6c05  MOV dword ptr [EDX + 0x4],ESI
005e6c08  MOV ESI,dword ptr [ECX + 0x8]
005e6c0b  MOV dword ptr [EDX + 0x8],ESI
005e6c0e  MOV ESI,dword ptr [ECX + 0xc]
005e6c11  MOV dword ptr [EDX + 0xc],ESI
005e6c14  MOV ECX,dword ptr [ECX + 0x10]
005e6c17  MOV dword ptr [EDX + 0x10],ECX
005e6c1a  MOV DL,byte ptr [ESP + 0x18]
005e6c1e  MOV byte ptr [EAX + 0x20],DL
005e6c21  MOV byte ptr [EAX + 0x21],0x0
005e6c25  POP ESI
005e6c26  RET 0x14
