005eff90  MOV EAX,FS:[0x0]
005eff96  MOV EDX,dword ptr [ESP + 0x4]
005eff9a  PUSH -0x1
005eff9c  PUSH 0x8757a8
005effa1  PUSH EAX
005effa2  MOV dword ptr FS:[0x0],ESP
005effa9  MOV EAX,dword ptr [ECX + 0x8]
005effac  SUB ESP,0x44
005effaf  PUSH ESI
005effb0  MOV ESI,0x3fffffff
005effb5  SUB ESI,EAX
005effb7  CMP ESI,EDX
005effb9  POP ESI
005effba  JNC 0x005f000d
005effbc  PUSH 0x10
005effbe  PUSH 0x8928f8
005effc3  LEA ECX,[ESP + 0x8]
005effc7  MOV dword ptr [ESP + 0x20],0xf
005effcf  MOV dword ptr [ESP + 0x1c],0x0
005effd7  MOV byte ptr [ESP + 0xc],0x0
005effdc  CALL 0x004303b0
005effe1  LEA EAX,[ESP]
005effe4  PUSH EAX
005effe5  LEA ECX,[ESP + 0x20]
005effe9  MOV dword ptr [ESP + 0x50],0x0
005efff1  CALL 0x00432d50
005efff6  PUSH 0x8c9ca8
005efffb  LEA ECX,[ESP + 0x20]
005effff  PUSH ECX
005f0000  MOV dword ptr [ESP + 0x24],0x8bf290
005f0008  CALL 0x007c56b0
005f000d  ADD EAX,EDX
005f000f  MOV dword ptr [ECX + 0x8],EAX
005f0012  MOV ECX,dword ptr [ESP + 0x44]
005f0016  MOV dword ptr FS:[0x0],ECX
005f001d  ADD ESP,0x50
005f0020  RET 0x4
