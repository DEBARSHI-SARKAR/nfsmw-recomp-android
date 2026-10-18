0079b890  PUSH ESI
0079b891  PUSH EDI
0079b892  MOV ESI,ECX
0079b894  CALL 0x0079b780
0079b899  MOV EAX,dword ptr [ESI + 0x4]
0079b89c  MOV ECX,dword ptr [EAX + 0x4]
0079b89f  PUSH ECX
0079b8a0  MOV ECX,ESI
0079b8a2  CALL 0x00794ef0
0079b8a7  MOV EAX,dword ptr [ESI + 0x4]
0079b8aa  MOV dword ptr [EAX + 0x4],EAX
0079b8ad  MOV ECX,dword ptr [ESI + 0x4]
0079b8b0  XOR EAX,EAX
0079b8b2  MOV dword ptr [ESI + 0x8],EAX
0079b8b5  MOV dword ptr [ECX],ECX
0079b8b7  MOV ECX,dword ptr [ESI + 0x4]
0079b8ba  MOV dword ptr [ECX + 0x8],ECX
0079b8bd  LEA EDX,[ESI + 0x1c]
0079b8c0  MOV dword ptr [ESI + 0x14],EAX
0079b8c3  MOV dword ptr [ESI + 0x18],EAX
0079b8c6  MOV dword ptr [ESI + 0xf8],EAX
0079b8cc  MOV dword ptr [ESI + 0xfc],EAX
0079b8d2  MOV dword ptr [ESI + 0xf0],0x80000000
0079b8dc  MOV dword ptr [ESI + 0xf4],EAX
0079b8e2  MOV dword ptr [ESI + 0x108],0xffffffff
0079b8ec  MOV dword ptr [ESI + 0x100],0xffffffff
0079b8f6  MOV dword ptr [ESI + 0x104],0xffffffff
0079b900  MOV byte ptr [ESI + 0x10c],AL
0079b906  MOV byte ptr [ESI + 0x10d],AL
0079b90c  MOV ECX,0x35
0079b911  MOV EDI,EDX
0079b913  STOSD.REP ES:EDI
0079b915  POP EDI
0079b916  MOV dword ptr [EDX],0xffffffff
0079b91c  POP ESI
0079b91d  RET
