005fbee0  PUSH ESI
005fbee1  MOV ESI,ECX
005fbee3  MOV EAX,dword ptr [ESI + 0x4]
005fbee6  TEST EAX,EAX
005fbee8  JZ 0x005fbef4
005fbeea  MOV EAX,dword ptr [EAX + 0x18]
005fbeed  SHR EAX,0x8
005fbef0  AND AL,0x1
005fbef2  POP ESI
005fbef3  RET
005fbef4  MOV EAX,dword ptr [ESI + 0xc]
005fbef7  TEST EAX,EAX
005fbef9  JZ 0x005fbf0c
005fbefb  CMP dword ptr [EAX],0x0
005fbefe  JNZ 0x005fbf0c
005fbf00  MOV ECX,dword ptr [0x0091e00c]
005fbf06  PUSH EAX
005fbf07  CALL 0x005fa780
005fbf0c  MOV EAX,dword ptr [ESI + 0x10]
005fbf0f  TEST EAX,EAX
005fbf11  JZ 0x005fbf24
005fbf13  CMP dword ptr [EAX],0x0
005fbf16  JNZ 0x005fbf24
005fbf18  MOV ECX,dword ptr [0x0091e00c]
005fbf1e  PUSH EAX
005fbf1f  CALL 0x005fa780
005fbf24  MOV ECX,dword ptr [ESI + 0x8]
005fbf27  PUSH 0x0
005fbf29  PUSH 0x6a9a6f5b
005fbf2e  CALL 0x00454810
005fbf33  TEST EAX,EAX
005fbf35  JNZ 0x005fbf41
005fbf37  PUSH 0x1
005fbf39  CALL 0x006269b0
005fbf3e  ADD ESP,0x4
005fbf41  MOV AL,byte ptr [EAX]
005fbf43  POP ESI
005fbf44  RET
