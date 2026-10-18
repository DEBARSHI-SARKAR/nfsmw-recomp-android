004aada0  PUSH -0x1
004aada2  PUSH 0x86b078
004aada7  MOV EAX,FS:[0x0]
004aadad  PUSH EAX
004aadae  MOV dword ptr FS:[0x0],ESP
004aadb5  SUB ESP,0x10
004aadb8  PUSH ESI
004aadb9  PUSH 0xefbca3c9
004aadbe  LEA EAX,[ESP + 0x8]
004aadc2  PUSH EAX
004aadc3  CALL 0x004546c0
004aadc8  MOV ECX,EAX
004aadca  MOV dword ptr [ESP + 0x1c],0x0
004aadd2  CALL 0x00452d40
004aadd7  LEA ECX,[ESP + 0x4]
004aaddb  MOV ESI,EAX
004aaddd  MOV dword ptr [ESP + 0x1c],0xffffffff
004aade5  CALL 0x00452bd0
004aadea  MOV ECX,dword ptr [ESP + 0x14]
004aadee  MOV EAX,ESI
004aadf0  POP ESI
004aadf1  MOV dword ptr FS:[0x0],ECX
004aadf8  ADD ESP,0x1c
004aadfb  RET
