005d5bb0  SUB ESP,0x8
005d5bb3  MOV EAX,dword ptr [ESP + 0xc]
005d5bb7  MOV EDX,dword ptr [0x0091de00]
005d5bbd  PUSH 0x0
005d5bbf  LEA ECX,[ESP + 0x4]
005d5bc3  PUSH ECX
005d5bc4  MOV dword ptr [ESP + 0x8],EAX
005d5bc8  MOV EAX,[0x0091ddfc]
005d5bcd  PUSH EDX
005d5bce  PUSH EAX
005d5bcf  LEA ECX,[ESP + 0x1c]
005d5bd3  PUSH ECX
005d5bd4  CALL 0x005d4a90
005d5bd9  MOV EDX,dword ptr [ESP + 0x24]
005d5bdd  MOV EAX,dword ptr [ESP + 0x20]
005d5be1  PUSH EDX
005d5be2  CALL dword ptr [EAX + 0x4]
005d5be5  ADD ESP,0x20
005d5be8  RET
