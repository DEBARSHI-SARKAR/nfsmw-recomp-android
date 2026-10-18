004aba50  PUSH -0x1
004aba52  PUSH 0x86b13b
004aba57  MOV EAX,FS:[0x0]
004aba5d  PUSH EAX
004aba5e  MOV dword ptr FS:[0x0],ESP
004aba65  PUSH ECX
004aba66  PUSH ESI
004aba67  MOV ESI,ECX
004aba69  MOV dword ptr [ESP + 0x4],ESI
004aba6d  LEA ECX,[ESI + 0x28]
004aba70  MOV dword ptr [ESP + 0x10],0x0
004aba78  CALL 0x0045a430
004aba7d  LEA ECX,[ESI + 0x14]
004aba80  MOV dword ptr [ESP + 0x10],0xffffffff
004aba88  CALL 0x0045a430
004aba8d  MOV ECX,dword ptr [ESP + 0x8]
004aba91  POP ESI
004aba92  MOV dword ptr FS:[0x0],ECX
004aba99  ADD ESP,0x10
004aba9c  RET
