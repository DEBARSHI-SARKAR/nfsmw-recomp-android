004fd4f0  PUSH EBP
004fd4f1  MOV EBP,ESP
004fd4f3  AND ESP,0xfffffff0
004fd4f6  SUB ESP,0x10
004fd4f9  MOV ECX,dword ptr [0x00916054]
004fd4ff  TEST ECX,ECX
004fd501  JZ 0x004fd56f
004fd503  MOV EAX,dword ptr [EBP + 0x8]
004fd506  TEST EAX,EAX
004fd508  JZ 0x004fd54b
004fd50a  MOV EAX,dword ptr [EAX + 0x40]
004fd50d  FLD float ptr [EAX + 0x40]
004fd510  ADD EAX,0x40
004fd513  FLD float ptr [EAX + 0x4]
004fd516  MOV EAX,dword ptr [EAX + 0x8]
004fd519  FXCH
004fd51b  MOV dword ptr [ESP + 0x8],EAX
004fd51f  FADD float ptr [ECX + 0x20]
004fd522  MOV ECX,dword ptr [EBP + 0xc]
004fd525  MOV EAX,dword ptr [EBP + 0x10]
004fd528  FSTP float ptr [ECX]
004fd52a  MOV EDX,dword ptr [0x00916054]
004fd530  FADD float ptr [EDX + 0x24]
004fd533  MOV EDX,dword ptr [EBP + 0x14]
004fd536  FSTP float ptr [EAX]
004fd538  MOV ECX,dword ptr [0x00916054]
004fd53e  FLD float ptr [ESP + 0x8]
004fd542  FADD float ptr [ECX + 0x28]
004fd545  FSTP float ptr [EDX]
004fd547  MOV ESP,EBP
004fd549  POP EBP
004fd54a  RET
004fd54b  MOV EAX,dword ptr [ECX + 0x20]
004fd54e  MOV ECX,dword ptr [EBP + 0xc]
004fd551  MOV dword ptr [ECX],EAX
004fd553  MOV EDX,dword ptr [0x00916054]
004fd559  MOV EAX,dword ptr [EDX + 0x24]
004fd55c  MOV ECX,dword ptr [EBP + 0x10]
004fd55f  MOV dword ptr [ECX],EAX
004fd561  MOV EDX,dword ptr [0x00916054]
004fd567  MOV EAX,dword ptr [EDX + 0x28]
004fd56a  MOV ECX,dword ptr [EBP + 0x14]
004fd56d  MOV dword ptr [ECX],EAX
004fd56f  MOV ESP,EBP
004fd571  POP EBP
004fd572  RET
