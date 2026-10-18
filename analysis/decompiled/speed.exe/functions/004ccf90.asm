004ccf90  PUSH -0x1
004ccf92  PUSH 0x86c518
004ccf97  MOV EAX,FS:[0x0]
004ccf9d  PUSH EAX
004ccf9e  MOV dword ptr FS:[0x0],ESP
004ccfa5  SUB ESP,0x44
004ccfa8  PUSH 0x12
004ccfaa  PUSH 0x89290c
004ccfaf  LEA ECX,[ESP + 0x8]
004ccfb3  MOV dword ptr [ESP + 0x20],0xf
004ccfbb  MOV dword ptr [ESP + 0x1c],0x0
004ccfc3  MOV byte ptr [ESP + 0xc],0x0
004ccfc8  CALL 0x004303b0
004ccfcd  LEA EAX,[ESP]
004ccfd0  PUSH EAX
004ccfd1  LEA ECX,[ESP + 0x20]
004ccfd5  MOV dword ptr [ESP + 0x50],0x0
004ccfdd  CALL 0x00432d50
004ccfe2  PUSH 0x8c9ca8
004ccfe7  LEA ECX,[ESP + 0x20]
004ccfeb  PUSH ECX
004ccfec  MOV dword ptr [ESP + 0x24],0x8bf290
004ccff4  CALL 0x007c56b0
