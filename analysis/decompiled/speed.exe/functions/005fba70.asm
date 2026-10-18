005fba70  PUSH ESI
005fba71  MOV ESI,ECX
005fba73  MOV EAX,dword ptr [ESI + 0x4]
005fba76  TEST EAX,EAX
005fba78  JZ 0x005fba7f
005fba7a  ADD EAX,0x4
005fba7d  POP ESI
005fba7e  RET
005fba7f  MOV EAX,dword ptr [ESI + 0xc]
005fba82  TEST EAX,EAX
005fba84  JZ 0x005fba97
005fba86  CMP dword ptr [EAX],0x0
005fba89  JNZ 0x005fba97
005fba8b  MOV ECX,dword ptr [0x0091e00c]
005fba91  PUSH EAX
005fba92  CALL 0x005fa780
005fba97  MOV EAX,dword ptr [ESI + 0x10]
005fba9a  TEST EAX,EAX
005fba9c  JZ 0x005fbaaf
005fba9e  CMP dword ptr [EAX],0x0
005fbaa1  JNZ 0x005fbaaf
005fbaa3  MOV ECX,dword ptr [0x0091e00c]
005fbaa9  PUSH EAX
005fbaaa  CALL 0x005fa780
005fbaaf  MOV ECX,dword ptr [ESI + 0x8]
005fbab2  PUSH 0x0
005fbab4  PUSH 0xa78403ec
005fbab9  CALL 0x00454810
005fbabe  TEST EAX,EAX
005fbac0  JNZ 0x005fbacc
005fbac2  PUSH 0x4
005fbac4  CALL 0x006269b0
005fbac9  ADD ESP,0x4
005fbacc  MOV EAX,dword ptr [EAX]
005fbace  POP ESI
005fbacf  RET
