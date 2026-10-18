005e5bb0  PUSH ESI
005e5bb1  MOV ESI,ECX
005e5bb3  MOV AL,byte ptr [ESI + 0x2]
005e5bb6  SHR AL,0x2
005e5bb9  TEST AL,0x1
005e5bbb  JZ 0x005e5be4
005e5bbd  CALL 0x005e5a90
005e5bc2  MOV EAX,dword ptr [ESI + 0x8]
005e5bc5  TEST EAX,EAX
005e5bc7  JZ 0x005e5bd4
005e5bc9  MOV byte ptr [EAX + 0x2b],0x1
005e5bcd  MOV ECX,dword ptr [ESI + 0x8]
005e5bd0  MOV byte ptr [ECX + 0x28],0x1
005e5bd4  MOV ECX,dword ptr [ESI + 0xc]
005e5bd7  TEST ECX,ECX
005e5bd9  JZ 0x005e5be0
005e5bdb  CALL 0x00503c30
005e5be0  OR byte ptr [ESI + 0x2],0x8
005e5be4  POP ESI
005e5be5  RET
