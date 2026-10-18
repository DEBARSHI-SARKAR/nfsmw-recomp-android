005fbcb0  PUSH ESI
005fbcb1  MOV ESI,ECX
005fbcb3  MOV EAX,dword ptr [ESI + 0x4]
005fbcb6  TEST EAX,EAX
005fbcb8  JZ 0x005fbcc4
005fbcba  MOV EAX,dword ptr [EAX + 0x18]
005fbcbd  SHR EAX,0x2
005fbcc0  AND AL,0x1
005fbcc2  POP ESI
005fbcc3  RET
005fbcc4  MOV EAX,dword ptr [ESI + 0xc]
005fbcc7  TEST EAX,EAX
005fbcc9  JZ 0x005fbcdc
005fbccb  CMP dword ptr [EAX],0x0
005fbcce  JNZ 0x005fbcdc
005fbcd0  MOV ECX,dword ptr [0x0091e00c]
005fbcd6  PUSH EAX
005fbcd7  CALL 0x005fa780
005fbcdc  MOV EAX,dword ptr [ESI + 0x10]
005fbcdf  TEST EAX,EAX
005fbce1  JZ 0x005fbcf4
005fbce3  CMP dword ptr [EAX],0x0
005fbce6  JNZ 0x005fbcf4
005fbce8  MOV ECX,dword ptr [0x0091e00c]
005fbcee  PUSH EAX
005fbcef  CALL 0x005fa780
005fbcf4  MOV ECX,dword ptr [ESI + 0x8]
005fbcf7  PUSH 0x0
005fbcf9  PUSH 0xea855eaf
005fbcfe  CALL 0x00454810
005fbd03  TEST EAX,EAX
005fbd05  JNZ 0x005fbd11
005fbd07  PUSH 0x1
005fbd09  CALL 0x006269b0
005fbd0e  ADD ESP,0x4
005fbd11  MOV AL,byte ptr [EAX]
005fbd13  POP ESI
005fbd14  RET
