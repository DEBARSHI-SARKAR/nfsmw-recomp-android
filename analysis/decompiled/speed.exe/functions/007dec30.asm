007dec30  PUSH EBP
007dec31  MOV EBP,ESP
007dec33  SUB ESP,0x1c
007dec36  MOV dword ptr [EBP + -0x8],0x80000000
007dec3d  MOV word ptr [EBP + -0x10],0x0
007dec43  MOV EAX,dword ptr [EBP + 0xc]
007dec46  MOVZX ECX,word ptr [EAX + 0x6]
007dec4a  AND ECX,0x7ff0
007dec50  SAR ECX,0x4
007dec53  MOV word ptr [EBP + -0x4],CX
007dec57  MOV EDX,dword ptr [EBP + 0xc]
007dec5a  MOVZX EAX,word ptr [EDX + 0x6]
007dec5e  AND EAX,0x8000
007dec63  MOV word ptr [EBP + -0x14],AX
007dec67  MOV ECX,dword ptr [EBP + 0xc]
007dec6a  MOV EDX,dword ptr [ECX + 0x4]
007dec6d  AND EDX,0xfffff
007dec73  MOV dword ptr [EBP + -0xc],EDX
007dec76  MOV EAX,dword ptr [EBP + 0xc]
007dec79  MOV ECX,dword ptr [EAX]
007dec7b  MOV dword ptr [EBP + -0x18],ECX
007dec7e  MOVZX EDX,word ptr [EBP + -0x4]
007dec82  MOV dword ptr [EBP + -0x1c],EDX
007dec85  CMP dword ptr [EBP + -0x1c],0x0
007dec89  JZ 0x007dec9e
007dec8b  CMP dword ptr [EBP + -0x1c],0x7ff
007dec92  JZ 0x007dec96
007dec94  JMP 0x007dece1
007dec96  MOV word ptr [EBP + -0x10],0x7fff
007dec9c  JMP 0x007decfd
007dec9e  CMP dword ptr [EBP + -0xc],0x0
007deca2  JNZ 0x007deccb
007deca4  CMP dword ptr [EBP + -0x18],0x0
007deca8  JNZ 0x007deccb
007decaa  MOV EAX,dword ptr [EBP + 0x8]
007decad  MOV dword ptr [EAX + 0x4],0x0
007decb4  MOV ECX,dword ptr [EBP + 0x8]
007decb7  MOV dword ptr [ECX],0x0
007decbd  MOV EDX,dword ptr [EBP + 0x8]
007decc0  MOV word ptr [EDX + 0x8],0x0
007decc6  JMP 0x007ded78
007deccb  MOVSX EAX,word ptr [EBP + -0x4]
007deccf  ADD EAX,0x3c01
007decd4  MOV word ptr [EBP + -0x10],AX
007decd8  MOV dword ptr [EBP + -0x8],0x0
007decdf  JMP 0x007decfd
007dece1  MOVZX ECX,word ptr [EBP + -0x4]
007dece5  SUB ECX,0x3ff
007deceb  MOV word ptr [EBP + -0x4],CX
007decef  MOVSX EDX,word ptr [EBP + -0x4]
007decf3  ADD EDX,0x3fff
007decf9  MOV word ptr [EBP + -0x10],DX
007decfd  MOV EAX,dword ptr [EBP + -0xc]
007ded00  SHL EAX,0xb
007ded03  OR EAX,dword ptr [EBP + -0x8]
007ded06  MOV ECX,dword ptr [EBP + -0x18]
007ded09  SHR ECX,0x15
007ded0c  OR EAX,ECX
007ded0e  MOV EDX,dword ptr [EBP + 0x8]
007ded11  MOV dword ptr [EDX + 0x4],EAX
007ded14  MOV EAX,dword ptr [EBP + -0x18]
007ded17  SHL EAX,0xb
007ded1a  MOV ECX,dword ptr [EBP + 0x8]
007ded1d  MOV dword ptr [ECX],EAX
007ded1f  MOV EDX,dword ptr [EBP + 0x8]
007ded22  MOV EAX,dword ptr [EDX + 0x4]
007ded25  AND EAX,0x80000000
007ded2a  JNZ 0x007ded67
007ded2c  MOV ECX,dword ptr [EBP + 0x8]
007ded2f  MOV EDX,dword ptr [ECX + 0x4]
007ded32  SHL EDX,0x1
007ded34  MOV EAX,dword ptr [EBP + 0x8]
007ded37  MOV ECX,dword ptr [EAX]
007ded39  AND ECX,0x80000000
007ded3f  NEG ECX
007ded41  SBB ECX,ECX
007ded43  NEG ECX
007ded45  OR EDX,ECX
007ded47  MOV EAX,dword ptr [EBP + 0x8]
007ded4a  MOV dword ptr [EAX + 0x4],EDX
007ded4d  MOV ECX,dword ptr [EBP + 0x8]
007ded50  MOV EDX,dword ptr [ECX]
007ded52  SHL EDX,0x1
007ded54  MOV EAX,dword ptr [EBP + 0x8]
007ded57  MOV dword ptr [EAX],EDX
007ded59  MOV CX,word ptr [EBP + -0x10]
007ded5d  SUB CX,0x1
007ded61  MOV word ptr [EBP + -0x10],CX
007ded65  JMP 0x007ded1f
007ded67  MOVZX EDX,word ptr [EBP + -0x14]
007ded6b  MOVZX EAX,word ptr [EBP + -0x10]
007ded6f  OR EDX,EAX
007ded71  MOV ECX,dword ptr [EBP + 0x8]
007ded74  MOV word ptr [ECX + 0x8],DX
007ded78  MOV ESP,EBP
007ded7a  POP EBP
007ded7b  RET
