007cfdf0  PUSH EBP
007cfdf1  MOV EBP,ESP
007cfdf3  SUB ESP,0x8
007cfdf6  MOV EAX,dword ptr [EBP + 0xc]
007cfdf9  MOV dword ptr [EBP + -0x4],EAX
007cfdfc  CMP dword ptr [EBP + 0x20],0x0
007cfe00  JZ 0x007cfe1a
007cfe02  MOV ECX,dword ptr [EBP + 0x20]
007cfe05  PUSH ECX
007cfe06  MOV EDX,dword ptr [EBP + 0x1c]
007cfe09  PUSH EDX
007cfe0a  MOV EAX,dword ptr [EBP + -0x4]
007cfe0d  PUSH EAX
007cfe0e  MOV ECX,dword ptr [EBP + 0x8]
007cfe11  PUSH ECX
007cfe12  CALL 0x007d0130
007cfe17  ADD ESP,0x10
007cfe1a  CMP dword ptr [EBP + 0x2c],0x0
007cfe1e  JNZ 0x007cfe2f
007cfe20  MOV EDX,dword ptr [EBP + 0x8]
007cfe23  PUSH EDX
007cfe24  MOV EAX,dword ptr [EBP + 0xc]
007cfe27  PUSH EAX
007cfe28  CALL 0x007c4c70
007cfe2d  JMP 0x007cfe3c
007cfe2f  MOV ECX,dword ptr [EBP + 0x8]
007cfe32  PUSH ECX
007cfe33  MOV EDX,dword ptr [EBP + 0x2c]
007cfe36  PUSH EDX
007cfe37  CALL 0x007c4c70
007cfe3c  MOV EAX,dword ptr [EBP + 0x24]
007cfe3f  MOV ECX,dword ptr [EAX]
007cfe41  PUSH ECX
007cfe42  MOV EDX,dword ptr [EBP + 0x18]
007cfe45  PUSH EDX
007cfe46  MOV EAX,dword ptr [EBP + 0x14]
007cfe49  PUSH EAX
007cfe4a  MOV ECX,dword ptr [EBP + -0x4]
007cfe4d  PUSH ECX
007cfe4e  CALL 0x007cfc60
007cfe53  ADD ESP,0x10
007cfe56  MOV EDX,dword ptr [EBP + 0x24]
007cfe59  MOV EAX,dword ptr [EDX + 0x4]
007cfe5c  ADD EAX,0x1
007cfe5f  MOV ECX,dword ptr [EBP + 0xc]
007cfe62  MOV dword ptr [ECX + 0x8],EAX
007cfe65  PUSH 0x100
007cfe6a  MOV EDX,dword ptr [EBP + 0x28]
007cfe6d  PUSH EDX
007cfe6e  MOV EAX,dword ptr [EBP + 0x1c]
007cfe71  MOV ECX,dword ptr [EAX + 0xc]
007cfe74  PUSH ECX
007cfe75  MOV EDX,dword ptr [EBP + 0x18]
007cfe78  PUSH EDX
007cfe79  MOV EAX,dword ptr [EBP + 0x10]
007cfe7c  PUSH EAX
007cfe7d  MOV ECX,dword ptr [EBP + -0x4]
007cfe80  PUSH ECX
007cfe81  MOV EDX,dword ptr [EBP + 0x8]
007cfe84  PUSH EDX
007cfe85  CALL 0x007cfeb0
007cfe8a  ADD ESP,0x1c
007cfe8d  MOV dword ptr [EBP + -0x8],EAX
007cfe90  CMP dword ptr [EBP + -0x8],0x0
007cfe94  JZ 0x007cfea3
007cfe96  MOV EAX,dword ptr [EBP + 0xc]
007cfe99  PUSH EAX
007cfe9a  MOV ECX,dword ptr [EBP + -0x8]
007cfe9d  PUSH ECX
007cfe9e  CALL 0x007c4c00
007cfea3  MOV ESP,EBP
007cfea5  POP EBP
007cfea6  RET
