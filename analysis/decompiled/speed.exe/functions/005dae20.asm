005dae20  PUSH -0x1
005dae22  PUSH 0x874ce3
005dae27  MOV EAX,FS:[0x0]
005dae2d  PUSH EAX
005dae2e  MOV dword ptr FS:[0x0],ESP
005dae35  PUSH ECX
005dae36  PUSH EBX
005dae37  PUSH ESI
005dae38  MOV ESI,ECX
005dae3a  PUSH EDI
005dae3b  LEA EDI,[ESI + 0x8]
005dae3e  PUSH 0x1
005dae40  MOV ECX,EDI
005dae42  MOV dword ptr [ESP + 0x10],ESI
005dae46  CALL 0x005d8660
005dae4b  XOR EBX,EBX
005dae4d  MOV ECX,ESI
005dae4f  NEG ECX
005dae51  SBB ECX,ECX
005dae53  PUSH ESI
005dae54  AND ECX,EDI
005dae56  PUSH 0x5dadb0
005dae5b  MOV dword ptr [ESP + 0x20],EBX
005dae5f  MOV dword ptr [ESI],0x890970
005dae65  MOV dword ptr [ESI + 0x4],ECX
005dae68  CALL 0x005d7930
005dae6d  MOV EAX,dword ptr [ESP + 0x20]
005dae71  MOV ECX,dword ptr [ESP + 0x24]
005dae75  MOV EDX,dword ptr [ESP + 0x28]
005dae79  MOV dword ptr [ESI],0x8a3830
005dae7f  MOV dword ptr [ESI + 0x18],EAX
005dae82  MOV dword ptr [ESI + 0x1c],ECX
005dae85  MOV dword ptr [ESI + 0x20],EDX
005dae88  MOV byte ptr [ESI + 0x24],BL
005dae8b  MOV dword ptr [ESI + 0x28],EBX
005dae8e  MOV dword ptr [ESI + 0x2c],EBX
005dae91  MOV dword ptr [ESI + 0x30],EBX
005dae94  MOV ECX,dword ptr [0x0091e0c8]
005dae9a  MOV byte ptr [ESP + 0x18],0x1
005dae9f  CALL 0x00603cf0
005daea4  MOV ECX,dword ptr [ESP + 0x10]
005daea8  POP EDI
005daea9  MOV EAX,ESI
005daeab  POP ESI
005daeac  POP EBX
005daead  MOV dword ptr FS:[0x0],ECX
005daeb4  ADD ESP,0x10
005daeb7  RET 0xc
