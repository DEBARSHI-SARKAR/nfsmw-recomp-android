004bbae0  PUSH ECX
004bbae1  PUSH ESI
004bbae2  MOV ESI,ECX
004bbae4  MOV EAX,dword ptr [ESI + 0x38]
004bbae7  DEC EAX
004bbae8  CMP EAX,0x6
004bbaeb  JA 0x004bbb3c
004bbaed  MOVZX EAX,byte ptr [EAX + 0x4bbb4c]
004bbaf4  JMP dword ptr [EAX*0x4 + 0x4bbb44]
004bbafb  MOV ECX,dword ptr [ESP + 0xc]
004bbaff  PUSH ECX
004bbb00  LEA ECX,[ESI + 0x6c]
004bbb03  CALL 0x004b0320
004bbb08  POP ESI
004bbb09  POP ECX
004bbb0a  RET 0x4
004bbb0d  MOV EDX,dword ptr [ESI + 0x28]
004bbb10  MOV ECX,dword ptr [EDX + 0x30]
004bbb13  MOV EAX,dword ptr [ECX]
004bbb15  CALL dword ptr [EAX + 0x34]
004bbb18  FST float ptr [ESP + 0x4]
004bbb1c  MOV ECX,dword ptr [ESP + 0xc]
004bbb20  FSTP float ptr [ESI + 0x78]
004bbb23  ADD ESI,0x6c
004bbb26  PUSH ECX
004bbb27  MOV ECX,ESI
004bbb29  CALL 0x004b0320
004bbb2e  MOV AL,byte ptr [ESI + 0x18]
004bbb31  TEST AL,AL
004bbb33  JZ 0x004bbb3c
004bbb35  MOV EDX,dword ptr [ESP + 0x4]
004bbb39  MOV dword ptr [ESI + 0x14],EDX
004bbb3c  POP ESI
004bbb3d  POP ECX
004bbb3e  RET 0x4
