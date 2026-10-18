007cb1d0  PUSH EBP
007cb1d1  MOV EBP,ESP
007cb1d3  PUSH ECX
007cb1d4  CALL 0x007cb280
007cb1d9  MOV ECX,dword ptr [EBP + 0x8]
007cb1dc  MOV dword ptr [EAX],ECX
007cb1de  MOV dword ptr [EBP + -0x4],0x0
007cb1e5  JMP 0x007cb1f0
007cb1e7  MOV EDX,dword ptr [EBP + -0x4]
007cb1ea  ADD EDX,0x1
007cb1ed  MOV dword ptr [EBP + -0x4],EDX
007cb1f0  CMP dword ptr [EBP + -0x4],0x2d
007cb1f4  JNC 0x007cb21a
007cb1f6  MOV EAX,dword ptr [EBP + -0x4]
007cb1f9  MOV ECX,dword ptr [EBP + 0x8]
007cb1fc  CMP ECX,dword ptr [EAX*0x8 + 0x906600]
007cb203  JNZ 0x007cb218
007cb205  CALL 0x007cb270
007cb20a  MOV EDX,dword ptr [EBP + -0x4]
007cb20d  MOV ECX,dword ptr [EDX*0x8 + 0x906604]
007cb214  MOV dword ptr [EAX],ECX
007cb216  JMP 0x007cb25d
007cb218  JMP 0x007cb1e7
007cb21a  CMP dword ptr [EBP + 0x8],0x13
007cb21e  JC 0x007cb233
007cb220  CMP dword ptr [EBP + 0x8],0x24
007cb224  JA 0x007cb233
007cb226  CALL 0x007cb270
007cb22b  MOV dword ptr [EAX],0xd
007cb231  JMP 0x007cb25d
007cb233  CMP dword ptr [EBP + 0x8],0xbc
007cb23a  JC 0x007cb252
007cb23c  CMP dword ptr [EBP + 0x8],0xca
007cb243  JA 0x007cb252
007cb245  CALL 0x007cb270
007cb24a  MOV dword ptr [EAX],0x8
007cb250  JMP 0x007cb25d
007cb252  CALL 0x007cb270
007cb257  MOV dword ptr [EAX],0x16
007cb25d  MOV ESP,EBP
007cb25f  POP EBP
007cb260  RET
