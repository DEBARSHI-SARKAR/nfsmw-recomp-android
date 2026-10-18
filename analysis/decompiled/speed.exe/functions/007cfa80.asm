007cfa80  PUSH EBP
007cfa81  MOV EBP,ESP
007cfa83  SUB ESP,0xc
007cfa86  MOV EAX,dword ptr [EBP + 0x8]
007cfa89  CMP dword ptr [EAX],0x80000003
007cfa8f  JNZ 0x007cfa96
007cfa91  JMP 0x007cfb9f
007cfa96  CALL 0x007cd100
007cfa9b  CMP dword ptr [EAX + 0x74],0x0
007cfa9f  JZ 0x007cface
007cfaa1  MOV ECX,dword ptr [EBP + 0x24]
007cfaa4  PUSH ECX
007cfaa5  MOV EDX,dword ptr [EBP + 0x20]
007cfaa8  PUSH EDX
007cfaa9  MOV EAX,dword ptr [EBP + 0x18]
007cfaac  PUSH EAX
007cfaad  MOV ECX,dword ptr [EBP + 0x14]
007cfab0  PUSH ECX
007cfab1  MOV EDX,dword ptr [EBP + 0x10]
007cfab4  PUSH EDX
007cfab5  MOV EAX,dword ptr [EBP + 0xc]
007cfab8  PUSH EAX
007cfab9  MOV ECX,dword ptr [EBP + 0x8]
007cfabc  PUSH ECX
007cfabd  CALL 0x007c4e10
007cfac2  ADD ESP,0x1c
007cfac5  TEST EAX,EAX
007cfac7  JZ 0x007cface
007cfac9  JMP 0x007cfb9f
007cface  LEA EDX,[EBP + -0xc]
007cfad1  PUSH EDX
007cfad2  LEA EAX,[EBP + -0x8]
007cfad5  PUSH EAX
007cfad6  MOV ECX,dword ptr [EBP + 0x1c]
007cfad9  PUSH ECX
007cfada  MOV EDX,dword ptr [EBP + 0x20]
007cfadd  PUSH EDX
007cfade  MOV EAX,dword ptr [EBP + 0x18]
007cfae1  PUSH EAX
007cfae2  CALL 0x007c4fc0
007cfae7  ADD ESP,0x14
007cfaea  MOV dword ptr [EBP + -0x4],EAX
007cfaed  JMP 0x007cfb01
007cfaef  MOV ECX,dword ptr [EBP + -0x8]
007cfaf2  ADD ECX,0x1
007cfaf5  MOV dword ptr [EBP + -0x8],ECX
007cfaf8  MOV EDX,dword ptr [EBP + -0x4]
007cfafb  ADD EDX,0x14
007cfafe  MOV dword ptr [EBP + -0x4],EDX
007cfb01  MOV EAX,dword ptr [EBP + -0x8]
007cfb04  CMP EAX,dword ptr [EBP + -0xc]
007cfb07  JNC 0x007cfb9f
007cfb0d  MOV ECX,dword ptr [EBP + -0x4]
007cfb10  MOV EDX,dword ptr [EBP + 0x1c]
007cfb13  CMP EDX,dword ptr [ECX]
007cfb15  JL 0x007cfb59
007cfb17  MOV EAX,dword ptr [EBP + -0x4]
007cfb1a  MOV ECX,dword ptr [EBP + 0x1c]
007cfb1d  CMP ECX,dword ptr [EAX + 0x4]
007cfb20  JG 0x007cfb59
007cfb22  MOV EDX,dword ptr [EBP + -0x4]
007cfb25  MOV EAX,dword ptr [EDX + 0xc]
007cfb28  SUB EAX,0x1
007cfb2b  SHL EAX,0x4
007cfb2e  MOV ECX,dword ptr [EBP + -0x4]
007cfb31  MOV EDX,dword ptr [ECX + 0x10]
007cfb34  CMP dword ptr [EDX + EAX*0x1 + 0x4],0x0
007cfb39  JZ 0x007cfb5b
007cfb3b  MOV EAX,dword ptr [EBP + -0x4]
007cfb3e  MOV ECX,dword ptr [EAX + 0xc]
007cfb41  SUB ECX,0x1
007cfb44  SHL ECX,0x4
007cfb47  MOV EDX,dword ptr [EBP + -0x4]
007cfb4a  MOV EAX,dword ptr [EDX + 0x10]
007cfb4d  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x4]
007cfb51  MOVSX EDX,byte ptr [ECX + 0x8]
007cfb55  TEST EDX,EDX
007cfb57  JZ 0x007cfb5b
007cfb59  JMP 0x007cfaef
007cfb5b  PUSH 0x1
007cfb5d  MOV EAX,dword ptr [EBP + 0x24]
007cfb60  PUSH EAX
007cfb61  MOV ECX,dword ptr [EBP + 0x20]
007cfb64  PUSH ECX
007cfb65  MOV EDX,dword ptr [EBP + -0x4]
007cfb68  PUSH EDX
007cfb69  PUSH 0x0
007cfb6b  MOV EAX,dword ptr [EBP + -0x4]
007cfb6e  MOV ECX,dword ptr [EAX + 0xc]
007cfb71  SUB ECX,0x1
007cfb74  SHL ECX,0x4
007cfb77  MOV EDX,dword ptr [EBP + -0x4]
007cfb7a  ADD ECX,dword ptr [EDX + 0x10]
007cfb7d  PUSH ECX
007cfb7e  MOV EAX,dword ptr [EBP + 0x18]
007cfb81  PUSH EAX
007cfb82  MOV ECX,dword ptr [EBP + 0x14]
007cfb85  PUSH ECX
007cfb86  MOV EDX,dword ptr [EBP + 0x10]
007cfb89  PUSH EDX
007cfb8a  MOV EAX,dword ptr [EBP + 0xc]
007cfb8d  PUSH EAX
007cfb8e  MOV ECX,dword ptr [EBP + 0x8]
007cfb91  PUSH ECX
007cfb92  CALL 0x007cfdf0
007cfb97  ADD ESP,0x2c
007cfb9a  JMP 0x007cfaef
007cfb9f  MOV ESP,EBP
007cfba1  POP EBP
007cfba2  RET
