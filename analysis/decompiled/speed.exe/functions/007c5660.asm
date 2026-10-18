007c5660  PUSH EBP
007c5661  MOV EBP,ESP
007c5663  PUSH ECX
007c5664  MOV EAX,dword ptr [EBP + 0x8]
007c5667  CMP EAX,dword ptr [EBP + 0xc]
007c566a  JZ 0x007c56aa
007c566c  MOV ECX,dword ptr [EBP + 0x10]
007c566f  MOV EDX,dword ptr [EBP + 0x10]
007c5672  SUB EDX,0x1
007c5675  MOV dword ptr [EBP + 0x10],EDX
007c5678  TEST ECX,ECX
007c567a  JZ 0x007c56aa
007c567c  MOV EAX,dword ptr [EBP + 0x8]
007c567f  MOV CL,byte ptr [EAX]
007c5681  MOV byte ptr [EBP + -0x1],CL
007c5684  MOV EDX,dword ptr [EBP + 0x8]
007c5687  MOV EAX,dword ptr [EBP + 0xc]
007c568a  MOV CL,byte ptr [EAX]
007c568c  MOV byte ptr [EDX],CL
007c568e  MOV EDX,dword ptr [EBP + 0x8]
007c5691  ADD EDX,0x1
007c5694  MOV dword ptr [EBP + 0x8],EDX
007c5697  MOV EAX,dword ptr [EBP + 0xc]
007c569a  MOV CL,byte ptr [EBP + -0x1]
007c569d  MOV byte ptr [EAX],CL
007c569f  MOV EDX,dword ptr [EBP + 0xc]
007c56a2  ADD EDX,0x1
007c56a5  MOV dword ptr [EBP + 0xc],EDX
007c56a8  JMP 0x007c566c
007c56aa  MOV ESP,EBP
007c56ac  POP EBP
007c56ad  RET
