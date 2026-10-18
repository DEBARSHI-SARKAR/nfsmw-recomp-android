005dbb40  MOV EAX,FS:[0x0]
005dbb46  MOV CL,byte ptr [0x0091e064]
005dbb4c  PUSH -0x1
005dbb4e  PUSH 0x874e3e
005dbb53  PUSH EAX
005dbb54  MOV EAX,0x1
005dbb59  TEST AL,CL
005dbb5b  MOV dword ptr FS:[0x0],ESP
005dbb62  JNZ 0x005dbb9a
005dbb64  OR dword ptr [0x0091e064],EAX
005dbb6a  PUSH 0x8a38d8
005dbb6f  MOV dword ptr [ESP + 0xc],0x0
005dbb77  CALL 0x005cc240
005dbb7c  MOV ECX,dword ptr [ESP + 0x14]
005dbb80  MOV [0x0091e060],EAX
005dbb85  MOV dword ptr [ECX],EAX
005dbb87  ADD ESP,0x4
005dbb8a  MOV EAX,ECX
005dbb8c  MOV ECX,dword ptr [ESP]
005dbb8f  MOV dword ptr FS:[0x0],ECX
005dbb96  ADD ESP,0xc
005dbb99  RET
005dbb9a  MOV ECX,dword ptr [0x0091e060]
005dbba0  MOV EAX,dword ptr [ESP + 0x10]
005dbba4  MOV dword ptr [EAX],ECX
005dbba6  MOV ECX,dword ptr [ESP]
005dbba9  MOV dword ptr FS:[0x0],ECX
005dbbb0  ADD ESP,0xc
005dbbb3  RET
