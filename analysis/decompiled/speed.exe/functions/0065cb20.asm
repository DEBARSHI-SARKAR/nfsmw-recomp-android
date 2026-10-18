0065cb20  MOV EDX,dword ptr [ESP + 0x4]
0065cb24  MOV EAX,dword ptr [EDX + 0x8]
0065cb27  PUSH EBX
0065cb28  PUSH ESI
0065cb29  MOV ESI,dword ptr [EAX]
0065cb2b  MOV dword ptr [EDX + 0x8],ESI
0065cb2e  MOV ESI,dword ptr [EAX]
0065cb30  MOV BL,byte ptr [ESI + 0x29]
0065cb33  TEST BL,BL
0065cb35  JNZ 0x0065cb3a
0065cb37  MOV dword ptr [ESI + 0x4],EDX
0065cb3a  MOV ESI,dword ptr [EDX + 0x4]
0065cb3d  MOV dword ptr [EAX + 0x4],ESI
0065cb40  MOV ECX,dword ptr [ECX + 0x4]
0065cb43  CMP EDX,dword ptr [ECX + 0x4]
0065cb46  JNZ 0x0065cb55
0065cb48  MOV dword ptr [ECX + 0x4],EAX
0065cb4b  POP ESI
0065cb4c  MOV dword ptr [EAX],EDX
0065cb4e  MOV dword ptr [EDX + 0x4],EAX
0065cb51  POP EBX
0065cb52  RET 0x4
0065cb55  MOV ECX,dword ptr [EDX + 0x4]
0065cb58  CMP EDX,dword ptr [ECX]
0065cb5a  JNZ 0x0065cb68
0065cb5c  MOV dword ptr [ECX],EAX
0065cb5e  POP ESI
0065cb5f  MOV dword ptr [EAX],EDX
0065cb61  MOV dword ptr [EDX + 0x4],EAX
0065cb64  POP EBX
0065cb65  RET 0x4
0065cb68  MOV dword ptr [ECX + 0x8],EAX
0065cb6b  POP ESI
0065cb6c  MOV dword ptr [EAX],EDX
0065cb6e  MOV dword ptr [EDX + 0x4],EAX
0065cb71  POP EBX
0065cb72  RET 0x4
