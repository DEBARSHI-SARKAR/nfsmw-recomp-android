007bcf80  PUSH -0x1
007bcf82  PUSH 0x8836d6
007bcf87  MOV EAX,FS:[0x0]
007bcf8d  PUSH EAX
007bcf8e  MOV dword ptr FS:[0x0],ESP
007bcf95  PUSH ECX
007bcf96  PUSH ESI
007bcf97  MOV ESI,ECX
007bcf99  MOV dword ptr [ESP + 0x4],ESI
007bcf9d  MOV dword ptr [ESI],0x8b7e84
007bcfa3  PUSH 0x89b2c8
007bcfa8  MOV dword ptr [ESP + 0x14],0x1
007bcfb0  CALL 0x00591e90
007bcfb5  OR ECX,0xffffffff
007bcfb8  MOV dword ptr [EAX + 0x88],ECX
007bcfbe  MOV dword ptr [ESP + 0x14],ECX
007bcfc2  ADD ESP,0x4
007bcfc5  MOV ECX,ESI
007bcfc7  MOV dword ptr [ESI + 0x154],0x8b7248
007bcfd1  MOV dword ptr [ESI + 0x164],0x8b7244
007bcfdb  CALL 0x00544dd0
007bcfe0  MOV ECX,dword ptr [ESP + 0x8]
007bcfe4  POP ESI
007bcfe5  MOV dword ptr FS:[0x0],ECX
007bcfec  ADD ESP,0x10
007bcfef  RET
