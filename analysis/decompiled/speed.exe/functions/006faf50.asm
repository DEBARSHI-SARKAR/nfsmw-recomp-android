006faf50  PUSH EBP
006faf51  MOV EBP,ESP
006faf53  PUSH -0x1
006faf55  PUSH 0x87f4f0
006faf5a  MOV EAX,FS:[0x0]
006faf60  PUSH EAX
006faf61  MOV dword ptr FS:[0x0],ESP
006faf68  SUB ESP,0xc
006faf6b  MOV EDX,dword ptr [EBP + 0x8]
006faf6e  CMP EDX,0x3fffffff
006faf74  PUSH EBX
006faf75  PUSH ESI
006faf76  PUSH EDI
006faf77  MOV ESI,ECX
006faf79  MOV dword ptr [EBP + -0x10],ESP
006faf7c  MOV dword ptr [EBP + -0x18],ESI
006faf7f  JBE 0x006faf86
006faf81  CALL 0x006fa050
006faf86  MOV ECX,dword ptr [ESI + 0x4]
006faf89  XOR EBX,EBX
006faf8b  CMP ECX,EBX
006faf8d  JNZ 0x006faf93
006faf8f  XOR EAX,EAX
006faf91  JMP 0x006faf9b
006faf93  MOV EAX,dword ptr [ESI + 0xc]
006faf96  SUB EAX,ECX
006faf98  SAR EAX,0x2
006faf9b  CMP EAX,EDX
006faf9d  JNC 0x006fb01d
006faf9f  CMP EDX,EBX
006fafa1  JZ 0x006fafba
006fafa3  PUSH EBX
006fafa4  LEA EAX,[EDX*0x4 + 0x0]
006fafab  PUSH EAX
006fafac  MOV ECX,0x925b30
006fafb1  CALL 0x005d29d0
006fafb6  MOV EDI,EAX
006fafb8  JMP 0x006fafbc
006fafba  XOR EDI,EDI
006fafbc  MOV EDX,dword ptr [EBP + 0x8]
006fafbf  MOV EAX,dword ptr [ESI + 0x8]
006fafc2  MOV ECX,dword ptr [ESI + 0x4]
006fafc5  PUSH EDX
006fafc6  PUSH ESI
006fafc7  PUSH EDI
006fafc8  PUSH EAX
006fafc9  PUSH ECX
006fafca  MOV dword ptr [EBP + -0x14],EDI
006fafcd  MOV dword ptr [EBP + -0x4],EBX
006fafd0  CALL 0x006f08c0
006fafd5  MOV EAX,dword ptr [ESI + 0x4]
006fafd8  ADD ESP,0x14
006fafdb  CMP EAX,EBX
006fafdd  MOV dword ptr [EBP + -0x4],0xffffffff
006fafe4  JZ 0x006fafee
006fafe6  MOV EBX,dword ptr [ESI + 0x8]
006fafe9  SUB EBX,EAX
006fafeb  SAR EBX,0x2
006fafee  TEST EAX,EAX
006faff0  JZ 0x006fb00b
006faff2  MOV ECX,dword ptr [ESI + 0xc]
006faff5  SUB ECX,EAX
006faff7  SAR ECX,0x2
006faffa  PUSH 0x0
006faffc  SHL ECX,0x2
006fafff  PUSH ECX
006fb000  PUSH EAX
006fb001  MOV ECX,0x925b30
006fb006  CALL 0x005d0370
006fb00b  MOV EDX,dword ptr [EBP + 0x8]
006fb00e  LEA EAX,[EDI + EDX*0x4]
006fb011  LEA ECX,[EDI + EBX*0x4]
006fb014  MOV dword ptr [ESI + 0xc],EAX
006fb017  MOV dword ptr [ESI + 0x8],ECX
006fb01a  MOV dword ptr [ESI + 0x4],EDI
006fb01d  MOV ECX,dword ptr [EBP + -0xc]
006fb020  POP EDI
006fb021  POP ESI
006fb022  MOV dword ptr FS:[0x0],ECX
006fb029  POP EBX
006fb02a  MOV ESP,EBP
006fb02c  POP EBP
006fb02d  RET 0x4
