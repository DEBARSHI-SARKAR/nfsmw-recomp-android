007caf70  PUSH EBP
007caf71  MOV EBP,ESP
007caf73  SUB ESP,0x24
007caf76  MOV EAX,dword ptr [EBP + 0x8]
007caf79  MOV dword ptr [EBP + -0x18],EAX
007caf7c  MOV ECX,dword ptr [EBP + 0xc]
007caf7f  IMUL ECX,dword ptr [EBP + 0x10]
007caf83  MOV dword ptr [EBP + -0xc],ECX
007caf86  MOV EDX,dword ptr [EBP + -0xc]
007caf89  MOV dword ptr [EBP + -0x4],EDX
007caf8c  CMP dword ptr [EBP + -0x4],0x0
007caf90  JNZ 0x007caf99
007caf92  XOR EAX,EAX
007caf94  JMP 0x007cb137
007caf99  MOV EAX,dword ptr [EBP + 0x14]
007caf9c  MOV ECX,dword ptr [EAX + 0xc]
007caf9f  AND ECX,0x10c
007cafa5  JZ 0x007cafb2
007cafa7  MOV EDX,dword ptr [EBP + 0x14]
007cafaa  MOV EAX,dword ptr [EDX + 0x18]
007cafad  MOV dword ptr [EBP + -0x8],EAX
007cafb0  JMP 0x007cafb9
007cafb2  MOV dword ptr [EBP + -0x8],0x1000
007cafb9  CMP dword ptr [EBP + -0x4],0x0
007cafbd  JZ 0x007cb134
007cafc3  MOV ECX,dword ptr [EBP + 0x14]
007cafc6  MOV EDX,dword ptr [ECX + 0xc]
007cafc9  AND EDX,0x10c
007cafcf  JZ 0x007cb045
007cafd1  MOV EAX,dword ptr [EBP + 0x14]
007cafd4  CMP dword ptr [EAX + 0x4],0x0
007cafd8  JZ 0x007cb045
007cafda  MOV ECX,dword ptr [EBP + 0x14]
007cafdd  MOV EDX,dword ptr [EBP + -0x4]
007cafe0  CMP EDX,dword ptr [ECX + 0x4]
007cafe3  JNC 0x007cafed
007cafe5  MOV EAX,dword ptr [EBP + -0x4]
007cafe8  MOV dword ptr [EBP + -0x20],EAX
007cafeb  JMP 0x007caff6
007cafed  MOV ECX,dword ptr [EBP + 0x14]
007caff0  MOV EDX,dword ptr [ECX + 0x4]
007caff3  MOV dword ptr [EBP + -0x20],EDX
007caff6  MOV EAX,dword ptr [EBP + -0x20]
007caff9  MOV dword ptr [EBP + -0x14],EAX
007caffc  MOV ECX,dword ptr [EBP + -0x14]
007cafff  PUSH ECX
007cb000  MOV EDX,dword ptr [EBP + 0x14]
007cb003  MOV EAX,dword ptr [EDX]
007cb005  PUSH EAX
007cb006  MOV ECX,dword ptr [EBP + -0x18]
007cb009  PUSH ECX
007cb00a  CALL 0x007d6d30
007cb00f  ADD ESP,0xc
007cb012  MOV EDX,dword ptr [EBP + -0x4]
007cb015  SUB EDX,dword ptr [EBP + -0x14]
007cb018  MOV dword ptr [EBP + -0x4],EDX
007cb01b  MOV EAX,dword ptr [EBP + 0x14]
007cb01e  MOV ECX,dword ptr [EAX + 0x4]
007cb021  SUB ECX,dword ptr [EBP + -0x14]
007cb024  MOV EDX,dword ptr [EBP + 0x14]
007cb027  MOV dword ptr [EDX + 0x4],ECX
007cb02a  MOV EAX,dword ptr [EBP + 0x14]
007cb02d  MOV ECX,dword ptr [EAX]
007cb02f  ADD ECX,dword ptr [EBP + -0x14]
007cb032  MOV EDX,dword ptr [EBP + 0x14]
007cb035  MOV dword ptr [EDX],ECX
007cb037  MOV EAX,dword ptr [EBP + -0x18]
007cb03a  ADD EAX,dword ptr [EBP + -0x14]
007cb03d  MOV dword ptr [EBP + -0x18],EAX
007cb040  JMP 0x007cb12f
007cb045  MOV ECX,dword ptr [EBP + -0x4]
007cb048  CMP ECX,dword ptr [EBP + -0x8]
007cb04b  JC 0x007cb0ea
007cb051  CMP dword ptr [EBP + -0x8],0x0
007cb055  JZ 0x007cb069
007cb057  MOV EAX,dword ptr [EBP + -0x4]
007cb05a  XOR EDX,EDX
007cb05c  DIV dword ptr [EBP + -0x8]
007cb05f  MOV EAX,dword ptr [EBP + -0x4]
007cb062  SUB EAX,EDX
007cb064  MOV dword ptr [EBP + -0x24],EAX
007cb067  JMP 0x007cb06f
007cb069  MOV ECX,dword ptr [EBP + -0x4]
007cb06c  MOV dword ptr [EBP + -0x24],ECX
007cb06f  MOV EDX,dword ptr [EBP + -0x24]
007cb072  MOV dword ptr [EBP + -0x14],EDX
007cb075  MOV EAX,dword ptr [EBP + -0x14]
007cb078  PUSH EAX
007cb079  MOV ECX,dword ptr [EBP + -0x18]
007cb07c  PUSH ECX
007cb07d  MOV EDX,dword ptr [EBP + 0x14]
007cb080  MOV EAX,dword ptr [EDX + 0x10]
007cb083  PUSH EAX
007cb084  CALL 0x007db5b0
007cb089  ADD ESP,0xc
007cb08c  MOV dword ptr [EBP + -0x10],EAX
007cb08f  CMP dword ptr [EBP + -0x10],0x0
007cb093  JNZ 0x007cb0b4
007cb095  MOV ECX,dword ptr [EBP + 0x14]
007cb098  MOV EDX,dword ptr [ECX + 0xc]
007cb09b  OR EDX,0x10
007cb09e  MOV EAX,dword ptr [EBP + 0x14]
007cb0a1  MOV dword ptr [EAX + 0xc],EDX
007cb0a4  MOV EAX,dword ptr [EBP + -0xc]
007cb0a7  SUB EAX,dword ptr [EBP + -0x4]
007cb0aa  XOR EDX,EDX
007cb0ac  DIV dword ptr [EBP + 0xc]
007cb0af  JMP 0x007cb137
007cb0b4  CMP dword ptr [EBP + -0x10],-0x1
007cb0b8  JNZ 0x007cb0d6
007cb0ba  MOV ECX,dword ptr [EBP + 0x14]
007cb0bd  MOV EDX,dword ptr [ECX + 0xc]
007cb0c0  OR EDX,0x20
007cb0c3  MOV EAX,dword ptr [EBP + 0x14]
007cb0c6  MOV dword ptr [EAX + 0xc],EDX
007cb0c9  MOV EAX,dword ptr [EBP + -0xc]
007cb0cc  SUB EAX,dword ptr [EBP + -0x4]
007cb0cf  XOR EDX,EDX
007cb0d1  DIV dword ptr [EBP + 0xc]
007cb0d4  JMP 0x007cb137
007cb0d6  MOV ECX,dword ptr [EBP + -0x4]
007cb0d9  SUB ECX,dword ptr [EBP + -0x10]
007cb0dc  MOV dword ptr [EBP + -0x4],ECX
007cb0df  MOV EDX,dword ptr [EBP + -0x18]
007cb0e2  ADD EDX,dword ptr [EBP + -0x10]
007cb0e5  MOV dword ptr [EBP + -0x18],EDX
007cb0e8  JMP 0x007cb12f
007cb0ea  MOV EAX,dword ptr [EBP + 0x14]
007cb0ed  PUSH EAX
007cb0ee  CALL 0x007db3e0
007cb0f3  ADD ESP,0x4
007cb0f6  MOV dword ptr [EBP + -0x1c],EAX
007cb0f9  CMP dword ptr [EBP + -0x1c],-0x1
007cb0fd  JNZ 0x007cb10c
007cb0ff  MOV EAX,dword ptr [EBP + -0xc]
007cb102  SUB EAX,dword ptr [EBP + -0x4]
007cb105  XOR EDX,EDX
007cb107  DIV dword ptr [EBP + 0xc]
007cb10a  JMP 0x007cb137
007cb10c  MOV ECX,dword ptr [EBP + -0x18]
007cb10f  MOV DL,byte ptr [EBP + -0x1c]
007cb112  MOV byte ptr [ECX],DL
007cb114  MOV EAX,dword ptr [EBP + -0x18]
007cb117  ADD EAX,0x1
007cb11a  MOV dword ptr [EBP + -0x18],EAX
007cb11d  MOV ECX,dword ptr [EBP + -0x4]
007cb120  SUB ECX,0x1
007cb123  MOV dword ptr [EBP + -0x4],ECX
007cb126  MOV EDX,dword ptr [EBP + 0x14]
007cb129  MOV EAX,dword ptr [EDX + 0x18]
007cb12c  MOV dword ptr [EBP + -0x8],EAX
007cb12f  JMP 0x007cafb9
007cb134  MOV EAX,dword ptr [EBP + 0x10]
007cb137  MOV ESP,EBP
007cb139  POP EBP
007cb13a  RET
