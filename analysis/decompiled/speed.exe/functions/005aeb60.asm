005aeb60  MOV ECX,dword ptr [ESP + 0x8]
005aeb64  MOV EAX,dword ptr [ESP + 0x4]
005aeb68  FLD float ptr [ECX]
005aeb6a  FSUB float ptr [EAX]
005aeb6c  MOV EDX,dword ptr [ESP + 0x10]
005aeb70  PUSH ESI
005aeb71  MOV ESI,dword ptr [ESP + 0x18]
005aeb75  FMUL float ptr [ESP + 0x10]
005aeb79  FADD float ptr [EAX]
005aeb7b  FADD float ptr [EDX]
005aeb7d  FSTP float ptr [ESI]
005aeb7f  FLD float ptr [ECX + 0x4]
005aeb82  FSUB float ptr [EAX + 0x4]
005aeb85  FMUL float ptr [ESP + 0x10]
005aeb89  FADD float ptr [EDX + 0x4]
005aeb8c  FADD float ptr [EAX + 0x4]
005aeb8f  FSTP float ptr [ESI + 0x4]
005aeb92  POP ESI
005aeb93  RET
