007cda60  PUSH EBP
007cda61  MOV EBP,ESP
007cda63  PUSH ECX
007cda64  MOV EAX,dword ptr [EBP + 0x8]
007cda67  MOVSX ECX,byte ptr [EAX]
007cda6a  PUSH ECX
007cda6b  CALL 0x007c5f80
007cda70  ADD ESP,0x4
007cda73  CMP EAX,0x65
007cda76  JZ 0x007cda94
007cda78  MOV EDX,dword ptr [EBP + 0x8]
007cda7b  ADD EDX,0x1
007cda7e  MOV dword ptr [EBP + 0x8],EDX
007cda81  MOV EAX,dword ptr [EBP + 0x8]
007cda84  MOVSX ECX,byte ptr [EAX]
007cda87  PUSH ECX
007cda88  CALL 0x007ca7e0
007cda8d  ADD ESP,0x4
007cda90  TEST EAX,EAX
007cda92  JNZ 0x007cda78
007cda94  MOV EDX,dword ptr [EBP + 0x8]
007cda97  MOV AL,byte ptr [EDX]
007cda99  MOV byte ptr [EBP + -0x1],AL
007cda9c  MOV ECX,dword ptr [EBP + 0x8]
007cda9f  MOV DL,byte ptr [0x0090725c]
007cdaa5  MOV byte ptr [ECX],DL
007cdaa7  MOV EAX,dword ptr [EBP + 0x8]
007cdaaa  ADD EAX,0x1
007cdaad  MOV dword ptr [EBP + 0x8],EAX
007cdab0  MOV ECX,dword ptr [EBP + 0x8]
007cdab3  MOV DL,byte ptr [ECX]
007cdab5  MOV byte ptr [EBP + -0x2],DL
007cdab8  MOV EAX,dword ptr [EBP + 0x8]
007cdabb  MOV CL,byte ptr [EBP + -0x1]
007cdabe  MOV byte ptr [EAX],CL
007cdac0  MOV DL,byte ptr [EBP + -0x2]
007cdac3  MOV byte ptr [EBP + -0x1],DL
007cdac6  MOV EAX,dword ptr [EBP + 0x8]
007cdac9  MOVSX ECX,byte ptr [EAX]
007cdacc  MOV EDX,dword ptr [EBP + 0x8]
007cdacf  ADD EDX,0x1
007cdad2  MOV dword ptr [EBP + 0x8],EDX
007cdad5  TEST ECX,ECX
007cdad7  JNZ 0x007cdab0
007cdad9  MOV ESP,EBP
007cdadb  POP EBP
007cdadc  RET
