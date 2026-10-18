005ef450  PUSH -0x1
005ef452  PUSH 0x87568d
005ef457  MOV EAX,FS:[0x0]
005ef45d  PUSH EAX
005ef45e  MOV dword ptr FS:[0x0],ESP
005ef465  PUSH ECX
005ef466  MOV EAX,dword ptr [ESP + 0x14]
005ef46a  PUSH EBX
005ef46b  PUSH EBP
005ef46c  PUSH ESI
005ef46d  PUSH EDI
005ef46e  PUSH 0x1
005ef470  MOV ESI,ECX
005ef472  PUSH EAX
005ef473  MOV dword ptr [ESP + 0x18],ESI
005ef477  CALL 0x005e8130
005ef47c  LEA EDI,[ESI + 0x30]
005ef47f  XOR EBX,EBX
005ef481  PUSH 0x1
005ef483  MOV ECX,EDI
005ef485  MOV dword ptr [ESP + 0x20],EBX
005ef489  CALL 0x005d8660
005ef48e  MOV ECX,ESI
005ef490  NEG ECX
005ef492  SBB ECX,ECX
005ef494  AND ECX,EDI
005ef496  LEA EDI,[ESI + 0x28]
005ef499  PUSH EDI
005ef49a  PUSH 0x402820
005ef49f  MOV byte ptr [ESP + 0x24],0x1
005ef4a4  MOV dword ptr [EDI],0x890970
005ef4aa  MOV dword ptr [EDI + 0x4],ECX
005ef4ad  CALL 0x005d7930
005ef4b2  MOV dword ptr [EDI],0x894974
005ef4b8  MOV dword ptr [ESI],0x8a39ec
005ef4be  MOV dword ptr [EDI],0x8a39d0
005ef4c4  MOV EDX,dword ptr [0x008a2fb4]
005ef4ca  LEA ECX,[ESI + 0x40]
005ef4cd  MOV dword ptr [ECX],EDX
005ef4cf  MOV EAX,[0x008a2fb8]
005ef4d4  MOV dword ptr [ECX + 0x4],EAX
005ef4d7  MOV EDX,dword ptr [0x008a2fbc]
005ef4dd  MOV dword ptr [ECX + 0x8],EDX
005ef4e0  MOV byte ptr [ESI + 0x4c],0x1
005ef4e4  MOV byte ptr [ESI + 0x4d],BL
005ef4e7  MOV word ptr [ESI + 0x4e],BX
005ef4eb  MOV ECX,dword ptr [0x008a2fb4]
005ef4f1  LEA EAX,[ESI + 0x50]
005ef4f4  MOV dword ptr [EAX],ECX
005ef4f6  MOV EDX,dword ptr [0x008a2fb8]
005ef4fc  MOV dword ptr [EAX + 0x4],EDX
005ef4ff  MOV ECX,dword ptr [0x008a2fbc]
005ef505  MOV dword ptr [EAX + 0x8],ECX
005ef508  MOV dword ptr [ESI + 0x5c],EBX
005ef50b  MOV EAX,[0x008a2fb4]
005ef510  LEA EDX,[ESI + 0x60]
005ef513  MOV dword ptr [EDX],EAX
005ef515  MOV ECX,dword ptr [0x008a2fb8]
005ef51b  MOV dword ptr [EDX + 0x4],ECX
005ef51e  MOV EAX,[0x008a2fbc]
005ef523  MOV dword ptr [EDX + 0x8],EAX
005ef526  MOV dword ptr [ESI + 0x6c],EBX
005ef529  MOV EDX,dword ptr [0x008a2fb4]
005ef52f  LEA ECX,[ESI + 0x70]
005ef532  MOV dword ptr [ECX],EDX
005ef534  MOV EAX,[0x008a2fb8]
005ef539  MOV dword ptr [ECX + 0x4],EAX
005ef53c  MOV EDX,dword ptr [0x008a2fbc]
005ef542  PUSH EBX
005ef543  MOV dword ptr [ECX + 0x8],EDX
005ef546  PUSH 0x14
005ef548  MOV ECX,0x925b30
005ef54d  MOV byte ptr [ESP + 0x24],0x2
005ef552  CALL 0x005d29d0
005ef557  MOV EBP,EAX
005ef559  MOV dword ptr [ESP + 0x24],EBP
005ef55d  CMP EBP,EBX
005ef55f  MOV byte ptr [ESP + 0x1c],0x3
005ef564  JZ 0x005ef589
005ef566  LEA EBX,[EBP + 0x4]
005ef569  MOV ECX,EBX
005ef56b  MOV dword ptr [EBP],0x8952f0
005ef572  CALL 0x00478ec0
005ef577  MOV dword ptr [EBX + 0x4],EAX
005ef57a  MOV dword ptr [EBX + 0x8],0x0
005ef581  MOV dword ptr [EBP + 0x10],EDI
005ef584  MOV dword ptr [ESI + 0x7c],EBP
005ef587  JMP 0x005ef58c
005ef589  MOV dword ptr [ESI + 0x7c],EBX
005ef58c  MOV ECX,dword ptr [ESP + 0x14]
005ef590  POP EDI
005ef591  MOV EAX,ESI
005ef593  POP ESI
005ef594  POP EBP
005ef595  POP EBX
005ef596  MOV dword ptr FS:[0x0],ECX
005ef59d  ADD ESP,0x10
005ef5a0  RET 0x4
