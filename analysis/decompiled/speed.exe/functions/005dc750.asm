005dc750  MOV EDX,dword ptr [ESP + 0x4]
005dc754  LEA EAX,[ECX + 0x170]
005dc75a  PUSH ESI
005dc75b  MOV ESI,dword ptr [EDX]
005dc75d  MOV dword ptr [EAX],ESI
005dc75f  MOV ESI,dword ptr [EDX + 0x4]
005dc762  MOV dword ptr [EAX + 0x4],ESI
005dc765  MOV EDX,dword ptr [EDX + 0x8]
005dc768  MOV dword ptr [EAX + 0x8],EDX
005dc76b  MOV EAX,dword ptr [ESP + 0xc]
005dc76f  MOV EDX,dword ptr [EAX]
005dc771  ADD ECX,0x180
005dc777  MOV dword ptr [ECX],EDX
005dc779  MOV EDX,dword ptr [EAX + 0x4]
005dc77c  MOV dword ptr [ECX + 0x4],EDX
005dc77f  MOV EAX,dword ptr [EAX + 0x8]
005dc782  MOV dword ptr [ECX + 0x8],EAX
005dc785  POP ESI
005dc786  RET 0x8
