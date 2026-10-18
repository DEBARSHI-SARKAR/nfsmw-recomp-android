005fbbd0  PUSH ESI
005fbbd1  MOV ESI,ECX
005fbbd3  MOV EAX,dword ptr [ESI + 0x4]
005fbbd6  TEST EAX,EAX
005fbbd8  JZ 0x005fbbe2
005fbbda  MOV EAX,dword ptr [EAX + 0x18]
005fbbdd  AND EAX,0x1
005fbbe0  POP ESI
005fbbe1  RET
005fbbe2  MOV EAX,dword ptr [ESI + 0xc]
005fbbe5  TEST EAX,EAX
005fbbe7  JZ 0x005fbbfa
005fbbe9  CMP dword ptr [EAX],0x0
005fbbec  JNZ 0x005fbbfa
005fbbee  MOV ECX,dword ptr [0x0091e00c]
005fbbf4  PUSH EAX
005fbbf5  CALL 0x005fa780
005fbbfa  MOV EAX,dword ptr [ESI + 0x10]
005fbbfd  TEST EAX,EAX
005fbbff  JZ 0x005fbc12
005fbc01  CMP dword ptr [EAX],0x0
005fbc04  JNZ 0x005fbc12
005fbc06  MOV ECX,dword ptr [0x0091e00c]
005fbc0c  PUSH EAX
005fbc0d  CALL 0x005fa780
005fbc12  MOV ECX,dword ptr [ESI + 0x8]
005fbc15  PUSH 0x0
005fbc17  PUSH 0xb39ed8c3
005fbc1c  CALL 0x00454810
005fbc21  TEST EAX,EAX
005fbc23  JNZ 0x005fbc2f
005fbc25  PUSH 0x1
005fbc27  CALL 0x006269b0
005fbc2c  ADD ESP,0x4
005fbc2f  MOV AL,byte ptr [EAX]
005fbc31  POP ESI
005fbc32  RET
