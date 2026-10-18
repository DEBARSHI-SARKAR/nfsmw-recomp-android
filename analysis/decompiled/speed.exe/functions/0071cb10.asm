0071cb10  PUSH EBX
0071cb11  PUSH ESI
0071cb12  MOV ESI,ECX
0071cb14  MOV ECX,dword ptr [ESI + 0x1fc]
0071cb1a  MOV EAX,dword ptr [ECX]
0071cb1c  CALL dword ptr [EAX + 0x14]
0071cb1f  MOV ECX,dword ptr [ESI + 0x200]
0071cb25  MOV EDX,dword ptr [ECX]
0071cb27  CALL dword ptr [EDX + 0x14]
0071cb2a  MOV ECX,dword ptr [ESI + 0x208]
0071cb30  MOV EAX,dword ptr [ECX]
0071cb32  CALL dword ptr [EAX + 0x14]
0071cb35  MOV ECX,dword ptr [ESI + 0x204]
0071cb3b  MOV EDX,dword ptr [ECX]
0071cb3d  CALL dword ptr [EDX + 0x14]
0071cb40  MOV AL,byte ptr [ESP + 0xc]
0071cb44  XOR EBX,EBX
0071cb46  CMP AL,BL
0071cb48  JZ 0x0071cb55
0071cb4a  MOV ECX,dword ptr [ESI + 0x20c]
0071cb50  MOV EAX,dword ptr [ECX]
0071cb52  CALL dword ptr [EAX + 0x14]
0071cb55  MOV ECX,0x992718
0071cb5a  CALL 0x004ba9e0
0071cb5f  MOV ECX,0x9933e4
0071cb64  CALL 0x007053d0
0071cb69  MOV dword ptr [ESI + 0x138],0x1
0071cb73  MOV dword ptr [ESI + 0x1d8],0x5
0071cb7d  MOV byte ptr [ESI + 0x15d],BL
0071cb83  MOV ECX,dword ptr [ESI + 0x5c]
0071cb86  CMP ECX,EBX
0071cb88  JZ 0x0071cbc0
0071cb8a  MOV EAX,dword ptr [ESI + 0x60]
0071cb8d  SUB EAX,ECX
0071cb8f  SAR EAX,0x3
0071cb92  CMP EAX,EBX
0071cb94  JBE 0x0071cbc0
0071cb96  PUSH EDI
0071cb97  MOV EDI,ECX
0071cb99  LEA ESP,[ESP]
0071cba0  MOV ECX,dword ptr [ESI + 0x5c]
0071cba3  CMP ECX,EBX
0071cba5  JZ 0x0071cbbf
0071cba7  MOV EAX,dword ptr [ESI + 0x60]
0071cbaa  SUB EAX,ECX
0071cbac  SAR EAX,0x3
0071cbaf  CMP EAX,EBX
0071cbb1  JBE 0x0071cbbf
0071cbb3  MOV ECX,dword ptr [EDI]
0071cbb5  PUSH ECX
0071cbb6  MOV ECX,ESI
0071cbb8  CALL 0x007159d0
0071cbbd  JMP 0x0071cba0
0071cbbf  POP EDI
0071cbc0  MOV dword ptr [ESI + 0xdc],EBX
0071cbc6  MOV EAX,dword ptr [ESI + 0xec]
0071cbcc  CMP EAX,EBX
0071cbce  JZ 0x0071cbeb
0071cbd0  MOV EDX,dword ptr [ESI + 0xf4]
0071cbd6  SUB EDX,EAX
0071cbd8  SAR EDX,0x2
0071cbdb  PUSH EBX
0071cbdc  SHL EDX,0x2
0071cbdf  PUSH EDX
0071cbe0  PUSH EAX
0071cbe1  MOV ECX,0x925b30
0071cbe6  CALL 0x005d0370
0071cbeb  MOV dword ptr [ESI + 0xec],EBX
0071cbf1  MOV dword ptr [ESI + 0xf0],EBX
0071cbf7  MOV dword ptr [ESI + 0xf4],EBX
0071cbfd  MOV dword ptr [ESI + 0x130],EBX
0071cc03  MOV dword ptr [ESI + 0x134],EBX
0071cc09  MOV dword ptr [ESI + 0xfc],EBX
0071cc0f  MOV dword ptr [ESI + 0x100],EBX
0071cc15  MOV EAX,[0x00925ae8]
0071cc1a  MOV dword ptr [ESI + 0x228],EAX
0071cc20  MOV dword ptr [ESI + 0x224],EBX
0071cc26  MOV dword ptr [ESI + 0x220],EBX
0071cc2c  MOV dword ptr [ESI + 0x218],EBX
0071cc32  MOV dword ptr [ESI + 0x214],EBX
0071cc38  MOV dword ptr [ESI + 0x210],EBX
0071cc3e  MOV dword ptr [ESI + 0x21c],EBX
0071cc44  MOV byte ptr [ESI + 0x1f8],BL
0071cc4a  MOV dword ptr [ESI + 0x1e8],EBX
0071cc50  MOV dword ptr [ESI + 0x54],EBX
0071cc53  MOV dword ptr [ESI + 0x13c],EBX
0071cc59  MOV dword ptr [ESI + 0x14c],EBX
0071cc5f  MOV dword ptr [ESI + 0x150],EBX
0071cc65  MOV dword ptr [ESI + 0x154],EBX
0071cc6b  MOV dword ptr [ESI + 0x1d4],0x2
0071cc75  POP ESI
0071cc76  POP EBX
0071cc77  RET 0x4
