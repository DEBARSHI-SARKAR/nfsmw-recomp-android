007cb140  PUSH EBP
007cb141  MOV EBP,ESP
007cb143  SUB ESP,0xc
007cb146  CALL 0x007cd100
007cb14b  MOV dword ptr [EBP + -0x8],EAX
007cb14e  MOV EAX,dword ptr [EBP + -0x8]
007cb151  CMP dword ptr [EAX + 0x24],0x0
007cb155  JNZ 0x007cb185
007cb157  PUSH 0x5a
007cb159  PUSH 0x8b8c64
007cb15e  PUSH 0x2
007cb160  PUSH 0x86
007cb165  CALL 0x007c6700
007cb16a  ADD ESP,0x10
007cb16d  MOV ECX,dword ptr [EBP + -0x8]
007cb170  MOV dword ptr [ECX + 0x24],EAX
007cb173  MOV EDX,dword ptr [EBP + -0x8]
007cb176  CMP dword ptr [EDX + 0x24],0x0
007cb17a  JNZ 0x007cb185
007cb17c  MOV dword ptr [EBP + -0x4],0x9baa68
007cb183  JMP 0x007cb18e
007cb185  MOV EAX,dword ptr [EBP + -0x8]
007cb188  MOV ECX,dword ptr [EAX + 0x24]
007cb18b  MOV dword ptr [EBP + -0x4],ECX
007cb18e  CMP dword ptr [EBP + 0x8],0x0
007cb192  JL 0x007cb1a7
007cb194  MOV EDX,dword ptr [EBP + 0x8]
007cb197  CMP EDX,dword ptr [0x009070a8]
007cb19d  JGE 0x007cb1a7
007cb19f  MOV EAX,dword ptr [EBP + 0x8]
007cb1a2  MOV dword ptr [EBP + -0xc],EAX
007cb1a5  JMP 0x007cb1b0
007cb1a7  MOV ECX,dword ptr [0x009070a8]
007cb1ad  MOV dword ptr [EBP + -0xc],ECX
007cb1b0  MOV EDX,dword ptr [EBP + -0xc]
007cb1b3  MOV EAX,dword ptr [EDX*0x4 + 0x906ff8]
007cb1ba  PUSH EAX
007cb1bb  MOV ECX,dword ptr [EBP + -0x4]
007cb1be  PUSH ECX
007cb1bf  CALL 0x007d0bd0
007cb1c4  ADD ESP,0x8
007cb1c7  MOV EAX,dword ptr [EBP + -0x4]
007cb1ca  MOV ESP,EBP
007cb1cc  POP EBP
007cb1cd  RET
