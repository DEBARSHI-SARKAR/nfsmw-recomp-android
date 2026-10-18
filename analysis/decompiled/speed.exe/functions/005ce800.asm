005ce800  SUB ESP,0xc
005ce803  MOV ECX,dword ptr [ESP + 0x14]
005ce807  MOV EAX,dword ptr [ESP + 0x10]
005ce80b  FLD float ptr [ECX + 0x8]
005ce80e  FMUL float ptr [EAX + 0x4]
005ce811  FLD float ptr [EAX + 0x8]
005ce814  FMUL float ptr [ECX + 0x4]
005ce817  FSUBP
005ce819  FSTP float ptr [ESP]
005ce81c  FLD float ptr [EAX + 0x8]
005ce81f  FMUL float ptr [ECX]
005ce821  FLD float ptr [ECX + 0x8]
005ce824  FMUL float ptr [EAX]
005ce826  FSUBP
005ce828  FSTP float ptr [ESP + 0x4]
005ce82c  FLD float ptr [ECX + 0x4]
005ce82f  FMUL float ptr [EAX]
005ce831  FLD float ptr [ECX]
005ce833  LEA ECX,[ESP]
005ce836  FMUL float ptr [EAX + 0x4]
005ce839  MOV EAX,dword ptr [ESP + 0x18]
005ce83d  PUSH EAX
005ce83e  PUSH ECX
005ce83f  FSUBP
005ce841  FSTP float ptr [ESP + 0x10]
005ce845  CALL 0x005c67f0
005ce84a  ADD ESP,0x14
005ce84d  RET
