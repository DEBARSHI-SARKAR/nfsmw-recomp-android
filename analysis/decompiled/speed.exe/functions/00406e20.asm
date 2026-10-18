00406e20  PUSH ESI
00406e21  MOV ESI,ECX
00406e23  MOV ECX,dword ptr [ESI + 0x50]
00406e26  MOV dword ptr [ESI + 0x70],0x0
00406e2d  MOV EAX,dword ptr [ECX]
00406e2f  PUSH EDI
00406e30  CALL dword ptr [EAX + 0x20]
00406e33  MOV EDI,dword ptr [EAX]
00406e35  LEA EDX,[ESI + 0x64]
00406e38  MOV ECX,EDX
00406e3a  MOV dword ptr [ECX],EDI
00406e3c  MOV EDI,dword ptr [EAX + 0x4]
00406e3f  MOV dword ptr [ECX + 0x4],EDI
00406e42  MOV EAX,dword ptr [EAX + 0x8]
00406e45  MOV dword ptr [ECX + 0x8],EAX
00406e48  MOV ECX,dword ptr [ESI + 0x54]
00406e4b  MOV EAX,dword ptr [ECX]
00406e4d  PUSH EDX
00406e4e  CALL dword ptr [EAX + 0x2c]
00406e51  FLD float ptr [0x008eb1f8]
00406e57  FADD float ptr [ESI + 0x68]
00406e5a  POP EDI
00406e5b  FSTP float ptr [ESI + 0x68]
00406e5e  POP ESI
00406e5f  RET 0x4
