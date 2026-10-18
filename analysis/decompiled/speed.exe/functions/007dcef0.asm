007dcef0  PUSH EBP
007dcef1  MOV EBP,ESP
007dcef3  PUSH -0x1
007dcef5  PUSH 0x8bd810
007dcefa  PUSH 0x7cd5e4
007dceff  MOV EAX,FS:[0x0]
007dcf05  PUSH EAX
007dcf06  MOV dword ptr FS:[0x0],ESP
007dcf0d  ADD ESP,-0x28
007dcf10  PUSH EBX
007dcf11  PUSH ESI
007dcf12  PUSH EDI
007dcf13  MOV dword ptr [EBP + -0x28],0x0
007dcf1a  MOV EAX,dword ptr [EBP + 0x8]
007dcf1d  MOV dword ptr [EBP + -0x38],EAX
007dcf20  MOV ECX,dword ptr [EBP + -0x38]
007dcf23  SUB ECX,0x2
007dcf26  MOV dword ptr [EBP + -0x38],ECX
007dcf29  CMP dword ptr [EBP + -0x38],0x14
007dcf2d  JA 0x007dcfda
007dcf33  MOV EDX,dword ptr [EBP + -0x38]
007dcf36  MOVZX EAX,byte ptr [EDX + 0x7dd131]
007dcf3d  JMP dword ptr [EAX*0x4 + 0x7dd119]
007dcf44  MOV dword ptr [EBP + -0x30],0x9bae70
007dcf4b  MOV ECX,dword ptr [EBP + -0x30]
007dcf4e  MOV EDX,dword ptr [ECX]
007dcf50  MOV dword ptr [EBP + -0x1c],EDX
007dcf53  MOV EAX,dword ptr [EBP + -0x28]
007dcf56  ADD EAX,0x1
007dcf59  MOV dword ptr [EBP + -0x28],EAX
007dcf5c  JMP 0x007dcfe2
007dcf61  MOV dword ptr [EBP + -0x30],0x9bae74
007dcf68  MOV ECX,dword ptr [EBP + -0x30]
007dcf6b  MOV EDX,dword ptr [ECX]
007dcf6d  MOV dword ptr [EBP + -0x1c],EDX
007dcf70  MOV EAX,dword ptr [EBP + -0x28]
007dcf73  ADD EAX,0x1
007dcf76  MOV dword ptr [EBP + -0x28],EAX
007dcf79  JMP 0x007dcfe2
007dcf7b  MOV dword ptr [EBP + -0x30],0x9bae78
007dcf82  MOV ECX,dword ptr [EBP + -0x30]
007dcf85  MOV EDX,dword ptr [ECX]
007dcf87  MOV dword ptr [EBP + -0x1c],EDX
007dcf8a  MOV EAX,dword ptr [EBP + -0x28]
007dcf8d  ADD EAX,0x1
007dcf90  MOV dword ptr [EBP + -0x28],EAX
007dcf93  JMP 0x007dcfe2
007dcf95  MOV dword ptr [EBP + -0x30],0x9bae7c
007dcf9c  MOV ECX,dword ptr [EBP + -0x30]
007dcf9f  MOV EDX,dword ptr [ECX]
007dcfa1  MOV dword ptr [EBP + -0x1c],EDX
007dcfa4  MOV EAX,dword ptr [EBP + -0x28]
007dcfa7  ADD EAX,0x1
007dcfaa  MOV dword ptr [EBP + -0x28],EAX
007dcfad  JMP 0x007dcfe2
007dcfaf  CALL 0x007cd100
007dcfb4  MOV dword ptr [EBP + -0x20],EAX
007dcfb7  MOV ECX,dword ptr [EBP + -0x20]
007dcfba  MOV EDX,dword ptr [ECX + 0x54]
007dcfbd  PUSH EDX
007dcfbe  MOV EAX,dword ptr [EBP + 0x8]
007dcfc1  PUSH EAX
007dcfc2  CALL 0x007dd150
007dcfc7  ADD ESP,0x8
007dcfca  ADD EAX,0x8
007dcfcd  MOV dword ptr [EBP + -0x30],EAX
007dcfd0  MOV ECX,dword ptr [EBP + -0x30]
007dcfd3  MOV EDX,dword ptr [ECX]
007dcfd5  MOV dword ptr [EBP + -0x1c],EDX
007dcfd8  JMP 0x007dcfe2
007dcfda  OR EAX,0xffffffff
007dcfdd  JMP 0x007dd108
007dcfe2  CMP dword ptr [EBP + -0x1c],0x1
007dcfe6  JNZ 0x007dcfef
007dcfe8  XOR EAX,EAX
007dcfea  JMP 0x007dd108
007dcfef  CMP dword ptr [EBP + -0x1c],0x0
007dcff3  JNZ 0x007dcffc
007dcff5  PUSH 0x3
007dcff7  CALL 0x007ca340
007dcffc  CMP dword ptr [EBP + -0x28],0x0
007dd000  JZ 0x007dd00c
007dd002  PUSH 0x0
007dd004  CALL 0x007d0fd0
007dd009  ADD ESP,0x4
007dd00c  MOV dword ptr [EBP + -0x4],0x0
007dd013  CMP dword ptr [EBP + 0x8],0x8
007dd017  JZ 0x007dd025
007dd019  CMP dword ptr [EBP + 0x8],0xb
007dd01d  JZ 0x007dd025
007dd01f  CMP dword ptr [EBP + 0x8],0x4
007dd023  JNZ 0x007dd051
007dd025  MOV EAX,dword ptr [EBP + -0x20]
007dd028  MOV ECX,dword ptr [EAX + 0x58]
007dd02b  MOV dword ptr [EBP + -0x24],ECX
007dd02e  MOV EDX,dword ptr [EBP + -0x20]
007dd031  MOV dword ptr [EDX + 0x58],0x0
007dd038  CMP dword ptr [EBP + 0x8],0x8
007dd03c  JNZ 0x007dd051
007dd03e  MOV EAX,dword ptr [EBP + -0x20]
007dd041  MOV ECX,dword ptr [EAX + 0x5c]
007dd044  MOV dword ptr [EBP + -0x34],ECX
007dd047  MOV EDX,dword ptr [EBP + -0x20]
007dd04a  MOV dword ptr [EDX + 0x5c],0x8c
007dd051  CMP dword ptr [EBP + 0x8],0x8
007dd055  JNZ 0x007dd093
007dd057  MOV EAX,[0x009067f8]
007dd05c  MOV dword ptr [EBP + -0x2c],EAX
007dd05f  JMP 0x007dd06a
007dd061  MOV ECX,dword ptr [EBP + -0x2c]
007dd064  ADD ECX,0x1
007dd067  MOV dword ptr [EBP + -0x2c],ECX
007dd06a  MOV EDX,dword ptr [0x009067f8]
007dd070  ADD EDX,dword ptr [0x009067fc]
007dd076  CMP dword ptr [EBP + -0x2c],EDX
007dd079  JGE 0x007dd091
007dd07b  MOV EAX,dword ptr [EBP + -0x2c]
007dd07e  IMUL EAX,EAX,0xc
007dd081  MOV ECX,dword ptr [EBP + -0x20]
007dd084  MOV EDX,dword ptr [ECX + 0x54]
007dd087  MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0
007dd08f  JMP 0x007dd061
007dd091  JMP 0x007dd09c
007dd093  MOV EAX,dword ptr [EBP + -0x30]
007dd096  MOV dword ptr [EAX],0x0
007dd09c  MOV dword ptr [EBP + -0x4],0xffffffff
007dd0a3  CALL 0x007dd0aa
007dd0a8  JMP 0x007dd0bb
