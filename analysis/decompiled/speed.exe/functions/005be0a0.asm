005be0a0  SUB ESP,0x20
005be0a3  PUSH EBX
005be0a4  MOV EBX,ECX
005be0a6  MOVZX EAX,byte ptr [EBX + 0x2]
005be0aa  SUB EAX,0x0
005be0ad  PUSH ESI
005be0ae  PUSH EDI
005be0af  MOV dword ptr [ESP + 0xc],0x0
005be0b7  MOV dword ptr [ESP + 0x10],0x0
005be0bf  MOV dword ptr [ESP + 0x14],0x0
005be0c7  MOV dword ptr [ESP + 0x18],0x3f800000
005be0cf  JZ 0x005be0eb
005be0d1  DEC EAX
005be0d2  JZ 0x005be0d9
005be0d4  SUB EAX,0x2
005be0d7  JNZ 0x005be0fe
005be0d9  MOV ECX,dword ptr [ESP + 0x30]
005be0dd  LEA EAX,[ESP + 0xc]
005be0e1  PUSH EAX
005be0e2  PUSH ECX
005be0e3  PUSH EBX
005be0e4  CALL 0x005b9d10
005be0e9  JMP 0x005be0fb
005be0eb  MOV EAX,dword ptr [ESP + 0x30]
005be0ef  LEA EDX,[ESP + 0xc]
005be0f3  PUSH EDX
005be0f4  PUSH EAX
005be0f5  PUSH EBX
005be0f6  CALL 0x005b5840
005be0fb  ADD ESP,0xc
005be0fe  FLD float ptr [ESP + 0xc]
005be102  MOV ESI,dword ptr [ESP + 0x34]
005be106  FCHS
005be108  LEA ECX,[ESP + 0xc]
005be10c  FSTP float ptr [ESP + 0xc]
005be110  PUSH ECX
005be111  FLD float ptr [ESP + 0x14]
005be115  LEA EDX,[ESP + 0x20]
005be119  FCHS
005be11b  PUSH EDX
005be11c  FSTP float ptr [ESP + 0x18]
005be120  MOV ECX,ESI
005be122  FLD float ptr [ESP + 0x1c]
005be126  FCHS
005be128  FSTP float ptr [ESP + 0x1c]
005be12c  CALL 0x005ad0f0
005be131  MOV ECX,dword ptr [EAX]
005be133  MOV dword ptr [ESI],ECX
005be135  MOV EDX,dword ptr [EAX + 0x4]
005be138  MOV dword ptr [ESI + 0x4],EDX
005be13b  MOV ECX,dword ptr [EAX + 0x8]
005be13e  MOV dword ptr [ESI + 0x8],ECX
005be141  MOV EDX,dword ptr [EAX + 0xc]
005be144  LEA EDI,[EBX + 0x18]
005be147  PUSH EDI
005be148  LEA EAX,[ESP + 0x20]
005be14c  PUSH EAX
005be14d  MOV ECX,ESI
005be14f  MOV dword ptr [ESI + 0xc],EDX
005be152  CALL 0x005ad0f0
005be157  MOV ECX,dword ptr [EAX]
005be159  MOV dword ptr [ESI],ECX
005be15b  MOV EDX,dword ptr [EAX + 0x4]
005be15e  MOV dword ptr [ESI + 0x4],EDX
005be161  MOV ECX,dword ptr [EAX + 0x8]
005be164  MOV dword ptr [ESI + 0x8],ECX
005be167  MOV EDX,dword ptr [EAX + 0xc]
005be16a  PUSH ESI
005be16b  MOV dword ptr [ESI + 0xc],EDX
005be16e  CALL 0x005b3a70
005be173  MOV EAX,dword ptr [ESI]
005be175  MOV dword ptr [EDI],EAX
005be177  MOV ECX,dword ptr [ESI + 0x4]
005be17a  MOV dword ptr [EDI + 0x4],ECX
005be17d  MOV EDX,dword ptr [ESI + 0x8]
005be180  MOV dword ptr [EDI + 0x8],EDX
005be183  MOV EAX,dword ptr [ESI + 0xc]
005be186  ADD ESP,0x4
005be189  MOV dword ptr [EDI + 0xc],EAX
005be18c  MOV AL,byte ptr [EBX + 0x3]
005be18f  POP EDI
005be190  AND AL,0x7f
005be192  POP ESI
005be193  MOV byte ptr [EBX + 0x3],AL
005be196  POP EBX
005be197  ADD ESP,0x20
005be19a  RET 0x8
