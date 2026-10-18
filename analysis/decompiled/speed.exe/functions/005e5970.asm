005e5970  SUB ESP,0xc
005e5973  MOV AX,word ptr [ESP + 0x10]
005e5978  FLD float ptr [ESP + 0x18]
005e597c  FMUL float ptr [0x00893348]
005e5982  PUSH ESI
005e5983  MOV ESI,ECX
005e5985  MOV word ptr [ESI],AX
005e5988  XOR EAX,EAX
005e598a  OR ECX,0xffffffff
005e598d  MOV word ptr [ESI + 0x2],AX
005e5991  MOV dword ptr [ESI + 0x8],EAX
005e5994  MOV dword ptr [ESI + 0xc],EAX
005e5997  MOV EAX,dword ptr [ESP + 0x18]
005e599b  MOV word ptr [ESI + 0x4],CX
005e599f  MOV word ptr [ESI + 0x6],CX
005e59a3  MOV ECX,dword ptr [EAX]
005e59a5  MOV EDX,dword ptr [EAX + 0x4]
005e59a8  MOV EAX,dword ptr [EAX + 0x8]
005e59ab  MOV dword ptr [ESP + 0x4],ECX
005e59af  MOV dword ptr [ESP + 0x8],EDX
005e59b3  MOV EDX,dword ptr [ESP + 0x4]
005e59b7  MOV dword ptr [ESP + 0xc],EAX
005e59bb  MOV EAX,dword ptr [ESP + 0x8]
005e59bf  LEA ECX,[ESI + 0x10]
005e59c2  MOV dword ptr [ECX],EDX
005e59c4  MOV EDX,dword ptr [ESP + 0xc]
005e59c8  MOV dword ptr [ECX + 0x4],EAX
005e59cb  MOV dword ptr [ECX + 0x8],EDX
005e59ce  CALL 0x007c4b80
005e59d3  MOV ECX,EAX
005e59d5  MOV EAX,0xb60b60b7
005e59da  IMUL ECX
005e59dc  ADD EDX,ECX
005e59de  SAR EDX,0x8
005e59e1  MOV EAX,EDX
005e59e3  SHR EAX,0x1f
005e59e6  ADD EAX,EDX
005e59e8  MOV ECX,ESI
005e59ea  MOV word ptr [ESI + 0x1c],AX
005e59ee  CALL 0x005de590
005e59f3  MOV EAX,ESI
005e59f5  POP ESI
005e59f6  ADD ESP,0xc
005e59f9  RET 0xc
