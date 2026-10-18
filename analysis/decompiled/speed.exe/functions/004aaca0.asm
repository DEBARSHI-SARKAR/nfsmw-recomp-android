004aaca0  PUSH -0x1
004aaca2  PUSH 0x86b038
004aaca7  MOV EAX,FS:[0x0]
004aacad  PUSH EAX
004aacae  MOV dword ptr FS:[0x0],ESP
004aacb5  SUB ESP,0x10
004aacb8  PUSH ESI
004aacb9  PUSH 0xdadb5580
004aacbe  LEA EAX,[ESP + 0x8]
004aacc2  PUSH EAX
004aacc3  CALL 0x004546c0
004aacc8  MOV ECX,EAX
004aacca  MOV dword ptr [ESP + 0x1c],0x0
004aacd2  CALL 0x00452d40
004aacd7  LEA ECX,[ESP + 0x4]
004aacdb  MOV ESI,EAX
004aacdd  MOV dword ptr [ESP + 0x1c],0xffffffff
004aace5  CALL 0x00452bd0
004aacea  MOV ECX,dword ptr [ESP + 0x14]
004aacee  MOV EAX,ESI
004aacf0  POP ESI
004aacf1  MOV dword ptr FS:[0x0],ECX
004aacf8  ADD ESP,0x1c
004aacfb  RET
