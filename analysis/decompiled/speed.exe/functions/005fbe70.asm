005fbe70  PUSH ESI
005fbe71  MOV ESI,ECX
005fbe73  MOV EAX,dword ptr [ESI + 0x4]
005fbe76  TEST EAX,EAX
005fbe78  JZ 0x005fbe84
005fbe7a  MOV EAX,dword ptr [EAX + 0x18]
005fbe7d  SHR EAX,0x7
005fbe80  AND AL,0x1
005fbe82  POP ESI
005fbe83  RET
005fbe84  MOV EAX,dword ptr [ESI + 0xc]
005fbe87  TEST EAX,EAX
005fbe89  JZ 0x005fbe9c
005fbe8b  CMP dword ptr [EAX],0x0
005fbe8e  JNZ 0x005fbe9c
005fbe90  MOV ECX,dword ptr [0x0091e00c]
005fbe96  PUSH EAX
005fbe97  CALL 0x005fa780
005fbe9c  MOV EAX,dword ptr [ESI + 0x10]
005fbe9f  TEST EAX,EAX
005fbea1  JZ 0x005fbeb4
005fbea3  CMP dword ptr [EAX],0x0
005fbea6  JNZ 0x005fbeb4
005fbea8  MOV ECX,dword ptr [0x0091e00c]
005fbeae  PUSH EAX
005fbeaf  CALL 0x005fa780
005fbeb4  MOV ECX,dword ptr [ESI + 0x8]
005fbeb7  PUSH 0x0
005fbeb9  PUSH 0x2b1f54f6
005fbebe  CALL 0x00454810
005fbec3  TEST EAX,EAX
005fbec5  JNZ 0x005fbed1
005fbec7  PUSH 0x1
005fbec9  CALL 0x006269b0
005fbece  ADD ESP,0x4
005fbed1  MOV AL,byte ptr [EAX]
005fbed3  POP ESI
005fbed4  RET
