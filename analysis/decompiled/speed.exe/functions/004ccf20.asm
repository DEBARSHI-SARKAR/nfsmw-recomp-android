004ccf20  PUSH -0x1
004ccf22  PUSH 0x86c4f8
004ccf27  MOV EAX,FS:[0x0]
004ccf2d  PUSH EAX
004ccf2e  MOV dword ptr FS:[0x0],ESP
004ccf35  SUB ESP,0x44
004ccf38  PUSH 0x12
004ccf3a  PUSH 0x89290c
004ccf3f  LEA ECX,[ESP + 0x8]
004ccf43  MOV dword ptr [ESP + 0x20],0xf
004ccf4b  MOV dword ptr [ESP + 0x1c],0x0
004ccf53  MOV byte ptr [ESP + 0xc],0x0
004ccf58  CALL 0x004303b0
004ccf5d  LEA EAX,[ESP]
004ccf60  PUSH EAX
004ccf61  LEA ECX,[ESP + 0x20]
004ccf65  MOV dword ptr [ESP + 0x50],0x0
004ccf6d  CALL 0x00432d50
004ccf72  PUSH 0x8c9ca8
004ccf77  LEA ECX,[ESP + 0x20]
004ccf7b  PUSH ECX
004ccf7c  MOV dword ptr [ESP + 0x24],0x8bf290
004ccf84  CALL 0x007c56b0
