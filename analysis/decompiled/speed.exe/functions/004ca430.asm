004ca430  SUB ESP,0x28
004ca433  PUSH EBX
004ca434  PUSH ESI
004ca435  MOV ESI,dword ptr [ESP + 0x34]
004ca439  PUSH EDI
004ca43a  MOV EDI,ECX
004ca43c  LEA ESP,[ESP]
004ca440  MOV EDX,dword ptr [EDI + 0x4]
004ca443  MOV EAX,dword ptr [EDX]
004ca445  CMP EAX,EDX
004ca447  JZ 0x004ca49e
004ca449  MOV ECX,dword ptr [EAX + 0x8]
004ca44c  MOV EBX,dword ptr [EAX + 0x2c]
004ca44f  MOV dword ptr [ESP + 0xc],ECX
004ca453  MOV ECX,dword ptr [EAX + 0x10]
004ca456  MOV dword ptr [ESP + 0x14],ECX
004ca45a  MOV ECX,dword ptr [EAX + 0x14]
004ca45d  MOV dword ptr [ESP + 0x18],ECX
004ca461  MOV ECX,dword ptr [EAX + 0x18]
004ca464  MOV dword ptr [ESP + 0x1c],ECX
004ca468  MOV ECX,dword ptr [EAX + 0x1c]
004ca46b  MOV dword ptr [ESP + 0x20],ECX
004ca46f  MOV ECX,dword ptr [EAX + 0x20]
004ca472  MOV dword ptr [ESP + 0x24],ECX
004ca476  MOV CL,byte ptr [EAX + 0x24]
004ca479  MOV byte ptr [ESP + 0x28],CL
004ca47d  MOV ECX,dword ptr [EAX + 0x28]
004ca480  CMP ECX,ESI
004ca482  MOV dword ptr [ESP + 0x2c],ECX
004ca486  MOV dword ptr [ESP + 0x30],EBX
004ca48a  JZ 0x004ca490
004ca48c  MOV EAX,dword ptr [EAX]
004ca48e  JMP 0x004ca445
004ca490  LEA EDX,[ESP + 0xc]
004ca494  PUSH EDX
004ca495  MOV ECX,EDI
004ca497  CALL 0x004c91d0
004ca49c  JMP 0x004ca440
004ca49e  POP EDI
004ca49f  POP ESI
004ca4a0  POP EBX
004ca4a1  ADD ESP,0x28
004ca4a4  RET 0x4
