007cc000  PUSH EBP
007cc001  MOV EBP,ESP
007cc003  SUB ESP,0x18
007cc006  CALL 0x007cd100
007cc00b  MOV dword ptr [EBP + -0x8],EAX
007cc00e  MOV EAX,dword ptr [EBP + -0x8]
007cc011  MOV ECX,dword ptr [EAX + 0x54]
007cc014  PUSH ECX
007cc015  MOV EDX,dword ptr [EBP + 0x8]
007cc018  PUSH EDX
007cc019  CALL 0x007cc1c0
007cc01e  ADD ESP,0x8
007cc021  MOV dword ptr [EBP + -0x4],EAX
007cc024  CMP dword ptr [EBP + -0x4],0x0
007cc028  JZ 0x007cc033
007cc02a  MOV EAX,dword ptr [EBP + -0x4]
007cc02d  CMP dword ptr [EAX + 0x8],0x0
007cc031  JNZ 0x007cc042
007cc033  MOV ECX,dword ptr [EBP + 0xc]
007cc036  PUSH ECX
007cc037  CALL dword ptr [0x008901d0]
007cc03d  JMP 0x007cc1ba
007cc042  MOV EDX,dword ptr [EBP + -0x4]
007cc045  CMP dword ptr [EDX + 0x8],0x5
007cc049  JNZ 0x007cc05f
007cc04b  MOV EAX,dword ptr [EBP + -0x4]
007cc04e  MOV dword ptr [EAX + 0x8],0x0
007cc055  MOV EAX,0x1
007cc05a  JMP 0x007cc1ba
007cc05f  MOV ECX,dword ptr [EBP + -0x4]
007cc062  CMP dword ptr [ECX + 0x8],0x1
007cc066  JNZ 0x007cc070
007cc068  OR EAX,0xffffffff
007cc06b  JMP 0x007cc1ba
007cc070  MOV EDX,dword ptr [EBP + -0x4]
007cc073  MOV EAX,dword ptr [EDX + 0x8]
007cc076  MOV dword ptr [EBP + -0x14],EAX
007cc079  MOV ECX,dword ptr [EBP + -0x8]
007cc07c  MOV EDX,dword ptr [ECX + 0x58]
007cc07f  MOV dword ptr [EBP + -0xc],EDX
007cc082  MOV EAX,dword ptr [EBP + -0x8]
007cc085  MOV ECX,dword ptr [EBP + 0xc]
007cc088  MOV dword ptr [EAX + 0x58],ECX
007cc08b  MOV EDX,dword ptr [EBP + -0x4]
007cc08e  CMP dword ptr [EDX + 0x4],0x8
007cc092  JNZ 0x007cc197
007cc098  MOV EAX,[0x009067f8]
007cc09d  MOV dword ptr [EBP + -0x10],EAX
007cc0a0  JMP 0x007cc0ab
007cc0a2  MOV ECX,dword ptr [EBP + -0x10]
007cc0a5  ADD ECX,0x1
007cc0a8  MOV dword ptr [EBP + -0x10],ECX
007cc0ab  MOV EDX,dword ptr [0x009067f8]
007cc0b1  ADD EDX,dword ptr [0x009067fc]
007cc0b7  CMP dword ptr [EBP + -0x10],EDX
007cc0ba  JGE 0x007cc0d2
007cc0bc  MOV EAX,dword ptr [EBP + -0x10]
007cc0bf  IMUL EAX,EAX,0xc
007cc0c2  MOV ECX,dword ptr [EBP + -0x8]
007cc0c5  MOV EDX,dword ptr [ECX + 0x54]
007cc0c8  MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0
007cc0d0  JMP 0x007cc0a2
007cc0d2  MOV EAX,dword ptr [EBP + -0x8]
007cc0d5  MOV ECX,dword ptr [EAX + 0x5c]
007cc0d8  MOV dword ptr [EBP + -0x18],ECX
007cc0db  MOV EDX,dword ptr [EBP + -0x4]
007cc0de  CMP dword ptr [EDX],0xc000008e
007cc0e4  JNZ 0x007cc0f5
007cc0e6  MOV EAX,dword ptr [EBP + -0x8]
007cc0e9  MOV dword ptr [EAX + 0x5c],0x83
007cc0f0  JMP 0x007cc17d
007cc0f5  MOV ECX,dword ptr [EBP + -0x4]
007cc0f8  CMP dword ptr [ECX],0xc0000090
007cc0fe  JNZ 0x007cc10c
007cc100  MOV EDX,dword ptr [EBP + -0x8]
007cc103  MOV dword ptr [EDX + 0x5c],0x81
007cc10a  JMP 0x007cc17d
007cc10c  MOV EAX,dword ptr [EBP + -0x4]
007cc10f  CMP dword ptr [EAX],0xc0000091
007cc115  JNZ 0x007cc123
007cc117  MOV ECX,dword ptr [EBP + -0x8]
007cc11a  MOV dword ptr [ECX + 0x5c],0x84
007cc121  JMP 0x007cc17d
007cc123  MOV EDX,dword ptr [EBP + -0x4]
007cc126  CMP dword ptr [EDX],0xc0000093
007cc12c  JNZ 0x007cc13a
007cc12e  MOV EAX,dword ptr [EBP + -0x8]
007cc131  MOV dword ptr [EAX + 0x5c],0x85
007cc138  JMP 0x007cc17d
007cc13a  MOV ECX,dword ptr [EBP + -0x4]
007cc13d  CMP dword ptr [ECX],0xc000008d
007cc143  JNZ 0x007cc151
007cc145  MOV EDX,dword ptr [EBP + -0x8]
007cc148  MOV dword ptr [EDX + 0x5c],0x82
007cc14f  JMP 0x007cc17d
007cc151  MOV EAX,dword ptr [EBP + -0x4]
007cc154  CMP dword ptr [EAX],0xc000008f
007cc15a  JNZ 0x007cc168
007cc15c  MOV ECX,dword ptr [EBP + -0x8]
007cc15f  MOV dword ptr [ECX + 0x5c],0x86
007cc166  JMP 0x007cc17d
007cc168  MOV EDX,dword ptr [EBP + -0x4]
007cc16b  CMP dword ptr [EDX],0xc0000092
007cc171  JNZ 0x007cc17d
007cc173  MOV EAX,dword ptr [EBP + -0x8]
007cc176  MOV dword ptr [EAX + 0x5c],0x8a
007cc17d  MOV ECX,dword ptr [EBP + -0x8]
007cc180  MOV EDX,dword ptr [ECX + 0x5c]
007cc183  PUSH EDX
007cc184  PUSH 0x8
007cc186  CALL dword ptr [EBP + -0x14]
007cc189  ADD ESP,0x8
007cc18c  MOV EAX,dword ptr [EBP + -0x8]
007cc18f  MOV ECX,dword ptr [EBP + -0x18]
007cc192  MOV dword ptr [EAX + 0x5c],ECX
007cc195  JMP 0x007cc1ae
007cc197  MOV EDX,dword ptr [EBP + -0x4]
007cc19a  MOV dword ptr [EDX + 0x8],0x0
007cc1a1  MOV EAX,dword ptr [EBP + -0x4]
007cc1a4  MOV ECX,dword ptr [EAX + 0x4]
007cc1a7  PUSH ECX
007cc1a8  CALL dword ptr [EBP + -0x14]
007cc1ab  ADD ESP,0x4
007cc1ae  MOV EDX,dword ptr [EBP + -0x8]
007cc1b1  MOV EAX,dword ptr [EBP + -0xc]
007cc1b4  MOV dword ptr [EDX + 0x58],EAX
007cc1b7  OR EAX,0xffffffff
007cc1ba  MOV ESP,EBP
007cc1bc  POP EBP
007cc1bd  RET
