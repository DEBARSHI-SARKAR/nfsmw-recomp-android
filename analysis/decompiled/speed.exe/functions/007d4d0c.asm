007d4d0c  CMP dword ptr [EBP + -0x20],0x0
007d4d10  JNZ 0x007d4d44
007d4d12  CMP dword ptr [EBP + 0xc],0x0
007d4d16  JNZ 0x007d4d1f
007d4d18  MOV dword ptr [EBP + 0xc],0x1
007d4d1f  MOV EAX,dword ptr [EBP + 0xc]
007d4d22  ADD EAX,0xf
007d4d25  AND EAX,0xfffffff0
007d4d28  MOV dword ptr [EBP + 0xc],EAX
007d4d2b  MOV ECX,dword ptr [EBP + 0xc]
007d4d2e  PUSH ECX
007d4d2f  MOV EDX,dword ptr [EBP + 0x8]
007d4d32  PUSH EDX
007d4d33  PUSH 0x10
007d4d35  MOV EAX,[0x009c5318]
007d4d3a  PUSH EAX
007d4d3b  CALL dword ptr [0x0089023c]
007d4d41  MOV dword ptr [EBP + -0x1c],EAX
007d4d44  JMP 0x007d4d6c
007d4d6c  MOV EAX,dword ptr [EBP + -0x1c]
007d4d6f  MOV ECX,dword ptr [EBP + -0x10]
007d4d72  MOV dword ptr FS:[0x0],ECX
007d4d79  POP EDI
007d4d7a  POP ESI
007d4d7b  POP EBX
007d4d7c  MOV ESP,EBP
007d4d7e  POP EBP
007d4d7f  RET
