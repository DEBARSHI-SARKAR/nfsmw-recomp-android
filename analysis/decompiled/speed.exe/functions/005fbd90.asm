005fbd90  PUSH ESI
005fbd91  MOV ESI,ECX
005fbd93  MOV EAX,dword ptr [ESI + 0x4]
005fbd96  TEST EAX,EAX
005fbd98  JZ 0x005fbda4
005fbd9a  MOV EAX,dword ptr [EAX + 0x18]
005fbd9d  SHR EAX,0x5
005fbda0  AND AL,0x1
005fbda2  POP ESI
005fbda3  RET
005fbda4  MOV EAX,dword ptr [ESI + 0xc]
005fbda7  TEST EAX,EAX
005fbda9  JZ 0x005fbdbc
005fbdab  CMP dword ptr [EAX],0x0
005fbdae  JNZ 0x005fbdbc
005fbdb0  MOV ECX,dword ptr [0x0091e00c]
005fbdb6  PUSH EAX
005fbdb7  CALL 0x005fa780
005fbdbc  MOV EAX,dword ptr [ESI + 0x10]
005fbdbf  TEST EAX,EAX
005fbdc1  JZ 0x005fbdd4
005fbdc3  CMP dword ptr [EAX],0x0
005fbdc6  JNZ 0x005fbdd4
005fbdc8  MOV ECX,dword ptr [0x0091e00c]
005fbdce  PUSH EAX
005fbdcf  CALL 0x005fa780
005fbdd4  MOV ECX,dword ptr [ESI + 0x8]
005fbdd7  PUSH 0x0
005fbdd9  PUSH 0xff5ee5d6
005fbdde  CALL 0x00454810
005fbde3  TEST EAX,EAX
005fbde5  JNZ 0x005fbdf1
005fbde7  PUSH 0x1
005fbde9  CALL 0x006269b0
005fbdee  ADD ESP,0x4
005fbdf1  MOV AL,byte ptr [EAX]
005fbdf3  POP ESI
005fbdf4  RET
