005aebf0  PUSH EBX
005aebf1  PUSH EBP
005aebf2  PUSH ESI
005aebf3  MOV ESI,dword ptr [ESP + 0x10]
005aebf7  MOV EBP,dword ptr [ESI]
005aebf9  PUSH EDI
005aebfa  MOV EDI,dword ptr [ESP + 0x18]
005aebfe  MOV EAX,dword ptr [EDI]
005aec00  SUB EAX,EBP
005aec02  MOV dword ptr [ESP + 0x14],EAX
005aec06  FILD dword ptr [ESP + 0x14]
005aec0a  FMUL float ptr [ESP + 0x1c]
005aec0e  FADD float ptr [0x008933d4]
005aec14  CALL 0x007c4b80
005aec19  MOV EBX,dword ptr [ESP + 0x20]
005aec1d  ADD EAX,dword ptr [EBX]
005aec1f  ADD EAX,EBP
005aec21  MOV EBP,dword ptr [ESP + 0x24]
005aec25  MOV dword ptr [EBP],EAX
005aec28  MOV EAX,dword ptr [ESI + 0x4]
005aec2b  MOV ECX,dword ptr [EDI + 0x4]
005aec2e  SUB ECX,EAX
005aec30  MOV dword ptr [ESP + 0x14],ECX
005aec34  FILD dword ptr [ESP + 0x14]
005aec38  FMUL float ptr [ESP + 0x1c]
005aec3c  FADD float ptr [0x008933d4]
005aec42  CALL 0x007c4b80
005aec47  MOV ECX,dword ptr [EBX + 0x4]
005aec4a  MOV EDX,dword ptr [ESI + 0x4]
005aec4d  ADD EAX,ECX
005aec4f  ADD EAX,EDX
005aec51  MOV dword ptr [EBP + 0x4],EAX
005aec54  MOV EAX,dword ptr [ESI + 0x8]
005aec57  MOV EDX,dword ptr [EDI + 0x8]
005aec5a  SUB EDX,EAX
005aec5c  MOV dword ptr [ESP + 0x14],EDX
005aec60  FILD dword ptr [ESP + 0x14]
005aec64  FMUL float ptr [ESP + 0x1c]
005aec68  FADD float ptr [0x008933d4]
005aec6e  CALL 0x007c4b80
005aec73  MOV EDX,dword ptr [EBX + 0x8]
005aec76  MOV ECX,dword ptr [ESI + 0x8]
005aec79  ADD EAX,EDX
005aec7b  ADD EAX,ECX
005aec7d  MOV dword ptr [EBP + 0x8],EAX
005aec80  MOV ESI,dword ptr [ESI + 0xc]
005aec83  MOV EAX,dword ptr [EDI + 0xc]
005aec86  SUB EAX,ESI
005aec88  MOV dword ptr [ESP + 0x14],EAX
005aec8c  FILD dword ptr [ESP + 0x14]
005aec90  FMUL float ptr [ESP + 0x1c]
005aec94  FADD float ptr [0x008933d4]
005aec9a  CALL 0x007c4b80
005aec9f  MOV EDX,dword ptr [EBX + 0xc]
005aeca2  POP EDI
005aeca3  ADD EAX,EDX
005aeca5  ADD EAX,ESI
005aeca7  POP ESI
005aeca8  MOV dword ptr [EBP + 0xc],EAX
005aecab  POP EBP
005aecac  POP EBX
005aecad  RET
