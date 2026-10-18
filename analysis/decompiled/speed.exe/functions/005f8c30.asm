005f8c30  PUSH EBP
005f8c31  MOV EBP,ESP
005f8c33  PUSH -0x1
005f8c35  PUSH 0x875e01
005f8c3a  MOV EAX,FS:[0x0]
005f8c40  PUSH EAX
005f8c41  MOV dword ptr FS:[0x0],ESP
005f8c48  SUB ESP,0x10
005f8c4b  PUSH EBX
005f8c4c  PUSH ESI
005f8c4d  PUSH EDI
005f8c4e  MOV dword ptr [EBP + -0x10],ESP
005f8c51  PUSH 0x0
005f8c53  MOV dword ptr [EBP + -0x18],ECX
005f8c56  PUSH 0x20
005f8c58  MOV ECX,0x925b30
005f8c5d  CALL 0x005d29d0
005f8c62  MOV ESI,EAX
005f8c64  MOV dword ptr [EBP + -0x14],ESI
005f8c67  MOV dword ptr [EBP + -0x4],0x0
005f8c6e  MOV dword ptr [EBP + -0x1c],ESI
005f8c71  TEST ESI,ESI
005f8c73  MOV byte ptr [EBP + -0x4],0x1
005f8c77  JZ 0x005f8ca8
005f8c79  MOV EAX,dword ptr [EBP + 0x8]
005f8c7c  MOV ECX,dword ptr [EBP + 0xc]
005f8c7f  MOV EDX,dword ptr [EBP + 0x10]
005f8c82  MOV dword ptr [ESI],EAX
005f8c84  MOV EAX,dword ptr [EBP + 0x14]
005f8c87  MOV dword ptr [ESI + 0x4],ECX
005f8c8a  MOV dword ptr [ESI + 0x8],EDX
005f8c8d  MOV ECX,dword ptr [EAX]
005f8c8f  ADD EAX,0x4
005f8c92  MOV dword ptr [ESI + 0xc],ECX
005f8c95  LEA ECX,[ESI + 0x10]
005f8c98  PUSH EAX
005f8c99  CALL 0x005f3ce0
005f8c9e  MOV DL,byte ptr [EBP + 0x18]
005f8ca1  MOV byte ptr [ESI + 0x1c],DL
005f8ca4  MOV byte ptr [ESI + 0x1d],0x0
005f8ca8  MOV ECX,dword ptr [EBP + -0xc]
005f8cab  POP EDI
005f8cac  MOV EAX,ESI
005f8cae  POP ESI
005f8caf  MOV dword ptr FS:[0x0],ECX
005f8cb6  POP EBX
005f8cb7  MOV ESP,EBP
005f8cb9  POP EBP
005f8cba  RET 0x14
