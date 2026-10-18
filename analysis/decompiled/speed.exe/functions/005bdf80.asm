005bdf80  SUB ESP,0x8
005bdf83  PUSH ESI
005bdf84  MOV ESI,ECX
005bdf86  MOVZX EAX,byte ptr [ESI + 0x2]
005bdf8a  SUB EAX,0x0
005bdf8d  MOV dword ptr [ESP + 0x8],0x0
005bdf95  MOV dword ptr [ESP + 0x4],0x0
005bdf9d  JZ 0x005bdfb9
005bdf9f  DEC EAX
005bdfa0  JZ 0x005bdfa7
005bdfa2  SUB EAX,0x2
005bdfa5  JNZ 0x005bdfcc
005bdfa7  MOV ECX,dword ptr [ESP + 0x10]
005bdfab  LEA EAX,[ESP + 0x4]
005bdfaf  PUSH EAX
005bdfb0  PUSH ECX
005bdfb1  PUSH ESI
005bdfb2  CALL 0x005b9d10
005bdfb7  JMP 0x005bdfc9
005bdfb9  MOV EAX,dword ptr [ESP + 0x10]
005bdfbd  LEA EDX,[ESP + 0x4]
005bdfc1  PUSH EDX
005bdfc2  PUSH EAX
005bdfc3  PUSH ESI
005bdfc4  CALL 0x005b5840
005bdfc9  ADD ESP,0xc
005bdfcc  MOV EAX,dword ptr [ESP + 0x14]
005bdfd0  FLD float ptr [EAX]
005bdfd2  FSUB float ptr [ESP + 0x4]
005bdfd6  FLD float ptr [EAX + 0x4]
005bdfd9  FSUB float ptr [ESP + 0x8]
005bdfdd  FXCH
005bdfdf  FADD float ptr [ESI + 0x18]
005bdfe2  FSTP float ptr [ESI + 0x18]
005bdfe5  FADD float ptr [ESI + 0x1c]
005bdfe8  FSTP float ptr [ESI + 0x1c]
005bdfeb  MOV AL,byte ptr [ESI + 0x3]
005bdfee  AND AL,0x7f
005bdff0  MOV byte ptr [ESI + 0x3],AL
005bdff3  POP ESI
005bdff4  ADD ESP,0x8
005bdff7  RET 0x8
