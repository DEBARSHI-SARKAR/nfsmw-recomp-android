005e3b90  PUSH -0x1
005e3b92  PUSH 0x8750f6
005e3b97  MOV EAX,FS:[0x0]
005e3b9d  PUSH EAX
005e3b9e  MOV dword ptr FS:[0x0],ESP
005e3ba5  SUB ESP,0xc
005e3ba8  PUSH ESI
005e3ba9  MOV ESI,ECX
005e3bab  PUSH EDI
005e3bac  LEA EDI,[ESI + 0x28]
005e3baf  MOV dword ptr [ESP + 0x10],ESI
005e3bb3  MOV dword ptr [ESI],0x8a39ec
005e3bb9  MOV dword ptr [EDI],0x8a39d0
005e3bbf  MOV ECX,dword ptr [ESI + 0x7c]
005e3bc2  TEST ECX,ECX
005e3bc4  MOV dword ptr [ESP + 0x1c],0x2
005e3bcc  JZ 0x005e3bd4
005e3bce  MOV EAX,dword ptr [ECX]
005e3bd0  PUSH 0x1
005e3bd2  CALL dword ptr [EAX]
005e3bd4  MOV dword ptr [EDI],0x890970
005e3bda  MOV ECX,dword ptr [EDI + 0x4]
005e3bdd  PUSH EDI
005e3bde  MOV byte ptr [ESP + 0x20],0x1
005e3be3  CALL 0x005d5a50
005e3be8  LEA ECX,[ESI + 0x30]
005e3beb  MOV byte ptr [ESP + 0x1c],0x0
005e3bf0  CALL 0x005d59e0
005e3bf5  MOV ECX,ESI
005e3bf7  MOV dword ptr [ESP + 0x1c],0xffffffff
005e3bff  CALL 0x005e2770
005e3c04  MOV ECX,dword ptr [ESP + 0x14]
005e3c08  POP EDI
005e3c09  POP ESI
005e3c0a  MOV dword ptr FS:[0x0],ECX
005e3c11  ADD ESP,0x18
005e3c14  RET
