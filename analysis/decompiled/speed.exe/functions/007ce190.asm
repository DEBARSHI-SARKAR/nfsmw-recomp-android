007ce190  CMP byte ptr [EDX + 0xe],0x5
007ce194  JNZ 0x007ce1a7
007ce196  MOV BX,word ptr [EBP + 0xffffff5c]
007ce19d  OR BH,0x2
007ce1a0  AND BH,0xfe
007ce1a3  MOV BL,0x3f
007ce1a5  JMP 0x007ce1ab
007ce1a7  MOV BX,0x133f
007ce1ab  MOV word ptr [EBP + 0xffffff5e],BX
007ce1b2  FLDCW word ptr [EBP + 0xffffff5e]
007ce1b8  MOV EBX,0x90690c
007ce1bd  FXAM
007ce1bf  MOV dword ptr [EBP + 0xffffff6c],EDX
007ce1c5  FSTSW word ptr [EBP + 0xffffff60]
007ce1cc  MOV byte ptr [EBP + 0xffffff70],0x0
007ce1d3  WAIT
007ce1d4  MOV CL,byte ptr [EBP + 0xffffff61]
007ce1da  SHL CL,0x1
007ce1dc  SAR CL,0x1
007ce1de  ROL CL,0x1
007ce1e0  MOV AL,CL
007ce1e2  AND AL,0xf
007ce1e4  XLAT EBX
007ce1e5  MOVSX EAX,AL
007ce1e8  AND ECX,0x404
007ce1ee  MOV EBX,EDX
007ce1f0  ADD EBX,EAX
007ce1f2  ADD EBX,0x10
007ce1f5  JMP dword ptr [EBX]
