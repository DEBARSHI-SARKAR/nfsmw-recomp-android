005bdee0  SUB ESP,0xc
005bdee3  PUSH ESI
005bdee4  MOV ESI,ECX
005bdee6  MOVZX EAX,byte ptr [ESI + 0x2]
005bdeea  SUB EAX,0x0
005bdeed  MOV dword ptr [ESP + 0xc],0x0
005bdef5  MOV dword ptr [ESP + 0x8],0x0
005bdefd  MOV dword ptr [ESP + 0x4],0x0
005bdf05  JZ 0x005bdf21
005bdf07  DEC EAX
005bdf08  JZ 0x005bdf0f
005bdf0a  SUB EAX,0x2
005bdf0d  JNZ 0x005bdf34
005bdf0f  MOV ECX,dword ptr [ESP + 0x14]
005bdf13  LEA EAX,[ESP + 0x4]
005bdf17  PUSH EAX
005bdf18  PUSH ECX
005bdf19  PUSH ESI
005bdf1a  CALL 0x005b9d10
005bdf1f  JMP 0x005bdf31
005bdf21  MOV EAX,dword ptr [ESP + 0x14]
005bdf25  LEA EDX,[ESP + 0x4]
005bdf29  PUSH EDX
005bdf2a  PUSH EAX
005bdf2b  PUSH ESI
005bdf2c  CALL 0x005b5840
005bdf31  ADD ESP,0xc
005bdf34  MOV EAX,dword ptr [ESP + 0x18]
005bdf38  FLD float ptr [EAX]
005bdf3a  FSUB float ptr [ESP + 0x4]
005bdf3e  FLD float ptr [EAX + 0x4]
005bdf41  FSUB float ptr [ESP + 0x8]
005bdf45  FLD float ptr [EAX + 0x8]
005bdf48  FSUB float ptr [ESP + 0xc]
005bdf4c  FSTP float ptr [ESP + 0xc]
005bdf50  FXCH
005bdf52  FADD float ptr [ESI + 0x18]
005bdf55  FSTP float ptr [ESI + 0x18]
005bdf58  FADD float ptr [ESI + 0x1c]
005bdf5b  FSTP float ptr [ESI + 0x1c]
005bdf5e  FLD float ptr [ESP + 0xc]
005bdf62  FADD float ptr [ESI + 0x20]
005bdf65  FSTP float ptr [ESI + 0x20]
005bdf68  MOV AL,byte ptr [ESI + 0x3]
005bdf6b  AND AL,0x7f
005bdf6d  MOV byte ptr [ESI + 0x3],AL
005bdf70  POP ESI
005bdf71  ADD ESP,0xc
005bdf74  RET 0x8
