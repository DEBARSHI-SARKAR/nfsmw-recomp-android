005eb960  PUSH EBX
005eb961  PUSH ESI
005eb962  PUSH EDI
005eb963  MOV EDI,ECX
005eb965  MOV EAX,dword ptr [EDI + 0x130]
005eb96b  MOV ECX,dword ptr [EAX + 0x4]
005eb96e  LEA ESI,[EDI + 0x12c]
005eb974  PUSH ECX
005eb975  MOV ECX,ESI
005eb977  CALL 0x005e6020
005eb97c  MOV EAX,dword ptr [ESI + 0x4]
005eb97f  MOV dword ptr [EAX + 0x4],EAX
005eb982  MOV EAX,dword ptr [ESI + 0x4]
005eb985  XOR EBX,EBX
005eb987  MOV dword ptr [ESI + 0x8],EBX
005eb98a  MOV dword ptr [EAX],EAX
005eb98c  MOV ESI,dword ptr [ESI + 0x4]
005eb98f  MOV dword ptr [ESI + 0x8],ESI
005eb992  MOV EDX,dword ptr [EDI + 0x13c]
005eb998  MOV EAX,dword ptr [EDX + 0x4]
005eb99b  LEA ESI,[EDI + 0x138]
005eb9a1  PUSH EAX
005eb9a2  MOV ECX,ESI
005eb9a4  CALL 0x005e6020
005eb9a9  MOV EAX,dword ptr [ESI + 0x4]
005eb9ac  MOV dword ptr [EAX + 0x4],EAX
005eb9af  MOV EAX,dword ptr [ESI + 0x4]
005eb9b2  MOV dword ptr [ESI + 0x8],EBX
005eb9b5  MOV dword ptr [EAX],EAX
005eb9b7  MOV ESI,dword ptr [ESI + 0x4]
005eb9ba  MOV dword ptr [ESI + 0x8],ESI
005eb9bd  MOV EAX,dword ptr [EDI + 0x120]
005eb9c3  CMP EAX,EBX
005eb9c5  JZ 0x005eb9d0
005eb9c7  PUSH EAX
005eb9c8  CALL 0x004655f0
005eb9cd  ADD ESP,0x4
005eb9d0  MOV dword ptr [EDI + 0x124],EBX
005eb9d6  MOV dword ptr [EDI + 0x128],EBX
005eb9dc  POP EDI
005eb9dd  POP ESI
005eb9de  POP EBX
005eb9df  RET
