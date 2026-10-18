005e6070  MOV EDX,dword ptr [ESP + 0x4]
005e6074  MOV EAX,dword ptr [EDX + 0x8]
005e6077  PUSH EBX
005e6078  PUSH ESI
005e6079  MOV ESI,dword ptr [EAX]
005e607b  MOV dword ptr [EDX + 0x8],ESI
005e607e  MOV ESI,dword ptr [EAX]
005e6080  MOV BL,byte ptr [ESI + 0x15]
005e6083  TEST BL,BL
005e6085  JNZ 0x005e608a
005e6087  MOV dword ptr [ESI + 0x4],EDX
005e608a  MOV ESI,dword ptr [EDX + 0x4]
005e608d  MOV dword ptr [EAX + 0x4],ESI
005e6090  MOV ECX,dword ptr [ECX + 0x4]
005e6093  CMP EDX,dword ptr [ECX + 0x4]
005e6096  JNZ 0x005e60a5
005e6098  MOV dword ptr [ECX + 0x4],EAX
005e609b  POP ESI
005e609c  MOV dword ptr [EAX],EDX
005e609e  MOV dword ptr [EDX + 0x4],EAX
005e60a1  POP EBX
005e60a2  RET 0x4
005e60a5  MOV ECX,dword ptr [EDX + 0x4]
005e60a8  CMP EDX,dword ptr [ECX]
005e60aa  JNZ 0x005e60b8
005e60ac  MOV dword ptr [ECX],EAX
005e60ae  POP ESI
005e60af  MOV dword ptr [EAX],EDX
005e60b1  MOV dword ptr [EDX + 0x4],EAX
005e60b4  POP EBX
005e60b5  RET 0x4
005e60b8  MOV dword ptr [ECX + 0x8],EAX
005e60bb  POP ESI
005e60bc  MOV dword ptr [EAX],EDX
005e60be  MOV dword ptr [EDX + 0x4],EAX
005e60c1  POP EBX
005e60c2  RET 0x4
