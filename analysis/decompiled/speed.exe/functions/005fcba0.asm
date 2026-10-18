005fcba0  PUSH ESI
005fcba1  MOV ESI,ECX
005fcba3  MOV EAX,dword ptr [ESI + 0xc]
005fcba6  TEST EAX,EAX
005fcba8  JZ 0x005fcbbb
005fcbaa  CMP dword ptr [EAX],0x0
005fcbad  JNZ 0x005fcbbb
005fcbaf  MOV ECX,dword ptr [0x0091e00c]
005fcbb5  PUSH EAX
005fcbb6  CALL 0x005fa780
005fcbbb  MOV EAX,dword ptr [ESI + 0x10]
005fcbbe  TEST EAX,EAX
005fcbc0  JZ 0x005fcbd3
005fcbc2  CMP dword ptr [EAX],0x0
005fcbc5  JNZ 0x005fcbd3
005fcbc7  MOV ECX,dword ptr [0x0091e00c]
005fcbcd  PUSH EAX
005fcbce  CALL 0x005fa780
005fcbd3  MOV ECX,dword ptr [ESI + 0x8]
005fcbd6  PUSH 0x0
005fcbd8  PUSH 0x6319b692
005fcbdd  CALL 0x00454810
005fcbe2  TEST EAX,EAX
005fcbe4  POP ESI
005fcbe5  JNZ 0x005fcbf1
005fcbe7  PUSH 0x4
005fcbe9  CALL 0x006269b0
005fcbee  ADD ESP,0x4
005fcbf1  MOV EAX,dword ptr [EAX]
005fcbf3  RET
