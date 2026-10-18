006f2d4c  SUB ESP,0x10
006f2d4f  MOV EAX,ESP
006f2d51  MOV dword ptr [EAX],ESI
006f2d53  LEA EDX,[ESP + 0x7c]
006f2d57  MOV dword ptr [EAX + 0x4],0xa6b47fac
006f2d5e  MOV dword ptr [EAX + 0x8],EDX
006f2d61  CALL dword ptr [ECX + 0x4]
006f2d64  ADD ESP,0x10
006f2d67  JMP 0x006f2ca7
