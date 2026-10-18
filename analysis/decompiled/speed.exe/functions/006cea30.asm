006cea30  MOV EAX,dword ptr [ESP + 0x4]
006cea34  MOV ECX,dword ptr [ESP + 0x8]
006cea38  CMP EAX,ECX
006cea3a  JZ 0x006cea61
006cea3c  MOV EDX,dword ptr [ESP + 0xc]
006cea40  PUSH EBX
006cea41  PUSH ESI
006cea42  PUSH EDI
006cea43  MOV ESI,EDX
006cea45  MOV EBX,dword ptr [ESI]
006cea47  MOV EDI,EAX
006cea49  MOV dword ptr [EDI],EBX
006cea4b  MOV EBX,dword ptr [ESI + 0x4]
006cea4e  MOV dword ptr [EDI + 0x4],EBX
006cea51  MOV ESI,dword ptr [ESI + 0x8]
006cea54  ADD EAX,0xc
006cea57  CMP EAX,ECX
006cea59  MOV dword ptr [EDI + 0x8],ESI
006cea5c  JNZ 0x006cea43
006cea5e  POP EDI
006cea5f  POP ESI
006cea60  POP EBX
006cea61  RET
