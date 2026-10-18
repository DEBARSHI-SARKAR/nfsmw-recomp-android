004fc990  MOV EDX,dword ptr [ESP + 0x8]
004fc994  MOV EAX,dword ptr [ESP + 0x4]
004fc998  LEA ECX,[EDX + -0x2]
004fc99b  IMUL EDX,EDX,0x1c
004fc99e  PUSH ESI
004fc99f  MOV ESI,0x1
004fc9a4  SHL ESI,CL
004fc9a6  OR dword ptr [EAX + 0x90],ESI
004fc9ac  MOV ECX,dword ptr [ESP + 0x20]
004fc9b0  FLD float ptr [ECX + 0x4]
004fc9b3  POP ESI
004fc9b4  FLD float ptr [ECX + 0x8]
004fc9b7  MOV ECX,dword ptr [ECX]
004fc9b9  MOV dword ptr [EAX + 0x80],ECX
004fc9bf  FXCH
004fc9c1  MOV ECX,dword ptr [ESP + 0x10]
004fc9c5  FSTP float ptr [EAX + 0x84]
004fc9cb  FSTP float ptr [EAX + 0x88]
004fc9d1  ADD EAX,EDX
004fc9d3  MOV EDX,dword ptr [ESP + 0xc]
004fc9d7  MOV dword ptr [EAX + 0x10],EDX
004fc9da  MOV EDX,dword ptr [ESP + 0x14]
004fc9de  MOV dword ptr [EAX + 0x14],ECX
004fc9e1  MOV ECX,dword ptr [ESP + 0x18]
004fc9e5  MOV dword ptr [EAX + 0x4],0x4
004fc9ec  MOV dword ptr [EAX + 0x18],EDX
004fc9ef  MOV dword ptr [EAX + 0x1c],ECX
004fc9f2  RET
