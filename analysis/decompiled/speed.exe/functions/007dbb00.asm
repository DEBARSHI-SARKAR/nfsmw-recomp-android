007dbb00  PUSH EBP
007dbb01  MOV EBP,ESP
007dbb03  PUSH ECX
007dbb04  CMP dword ptr [EBP + 0x8],0x0
007dbb08  JNZ 0x007dbb28
007dbb0a  PUSH 0x8b8ad0
007dbb0f  PUSH 0x0
007dbb11  PUSH 0x2e
007dbb13  PUSH 0x8bd744
007dbb18  PUSH 0x2
007dbb1a  CALL 0x007d2670
007dbb1f  ADD ESP,0x14
007dbb22  CMP EAX,0x1
007dbb25  JNZ 0x007dbb28
007dbb27  INT3
007dbb28  MOV ECX,dword ptr [0x009baa18]
007dbb2e  ADD ECX,0x1
007dbb31  MOV dword ptr [0x009baa18],ECX
007dbb37  MOV EDX,dword ptr [EBP + 0x8]
007dbb3a  MOV dword ptr [EBP + -0x4],EDX
007dbb3d  PUSH 0x3a
007dbb3f  PUSH 0x8bd744
007dbb44  PUSH 0x2
007dbb46  PUSH 0x1000
007dbb4b  CALL 0x007c6700
007dbb50  ADD ESP,0x10
007dbb53  MOV ECX,dword ptr [EBP + -0x4]
007dbb56  MOV dword ptr [ECX + 0x8],EAX
007dbb59  MOV EDX,dword ptr [EBP + -0x4]
007dbb5c  CMP dword ptr [EDX + 0x8],0x0
007dbb60  JZ 0x007dbb7d
007dbb62  MOV EAX,dword ptr [EBP + -0x4]
007dbb65  MOV ECX,dword ptr [EAX + 0xc]
007dbb68  OR ECX,0x8
007dbb6b  MOV EDX,dword ptr [EBP + -0x4]
007dbb6e  MOV dword ptr [EDX + 0xc],ECX
007dbb71  MOV EAX,dword ptr [EBP + -0x4]
007dbb74  MOV dword ptr [EAX + 0x18],0x1000
007dbb7b  JMP 0x007dbba2
007dbb7d  MOV ECX,dword ptr [EBP + -0x4]
007dbb80  MOV EDX,dword ptr [ECX + 0xc]
007dbb83  OR EDX,0x4
007dbb86  MOV EAX,dword ptr [EBP + -0x4]
007dbb89  MOV dword ptr [EAX + 0xc],EDX
007dbb8c  MOV ECX,dword ptr [EBP + -0x4]
007dbb8f  ADD ECX,0x14
007dbb92  MOV EDX,dword ptr [EBP + -0x4]
007dbb95  MOV dword ptr [EDX + 0x8],ECX
007dbb98  MOV EAX,dword ptr [EBP + -0x4]
007dbb9b  MOV dword ptr [EAX + 0x18],0x2
007dbba2  MOV ECX,dword ptr [EBP + -0x4]
007dbba5  MOV EDX,dword ptr [EBP + -0x4]
007dbba8  MOV EAX,dword ptr [EDX + 0x8]
007dbbab  MOV dword ptr [ECX],EAX
007dbbad  MOV ECX,dword ptr [EBP + -0x4]
007dbbb0  MOV dword ptr [ECX + 0x4],0x0
007dbbb7  MOV ESP,EBP
007dbbb9  POP EBP
007dbbba  RET
