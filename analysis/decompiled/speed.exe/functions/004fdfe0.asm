004fdfe0  PUSH EBP
004fdfe1  MOV EBP,ESP
004fdfe3  AND ESP,0xfffffff0
004fdfe6  SUB ESP,0x54
004fdfe9  MOV EAX,dword ptr [EBP + 0x8]
004fdfec  PUSH EBX
004fdfed  ADD EAX,-0x3
004fdff0  CMP EAX,0x5
004fdff3  PUSH ESI
004fdff4  PUSH EDI
004fdff5  MOV byte ptr [ESP + 0x1b],0x1
004fdffa  JA 0x004fe1f2
004fe000  JMP dword ptr [EAX*0x4 + 0x4fe204]
004fe007  MOV ESI,dword ptr [EBP + 0xc]
004fe00a  MOV EDI,dword ptr [EBP + 0x10]
004fe00d  XOR EBX,EBX
004fe00f  MOV EAX,0x3f800000
004fe014  MOV dword ptr [ESI],EAX
004fe016  MOV dword ptr [ESI + 0x4],EBX
004fe019  MOV dword ptr [ESI + 0x8],EBX
004fe01c  MOV dword ptr [ESI + 0xc],EBX
004fe01f  MOV dword ptr [EDI + 0x4],EAX
004fe022  MOV EAX,dword ptr [EBP + 0x14]
004fe025  MOV dword ptr [EDI],EBX
004fe027  MOV dword ptr [EDI + 0x8],EBX
004fe02a  MOV dword ptr [EDI + 0xc],EBX
004fe02d  MOVZX EAX,word ptr [EAX]
004fe030  CMP AX,BX
004fe033  JZ 0x004fe1f7
004fe039  PUSH EAX
004fe03a  CALL 0x0045dbf0
004fe03f  FSTP float ptr [ESP + 0x20]
004fe043  MOV ECX,dword ptr [EBP + 0x14]
004fe046  XOR EDX,EDX
004fe048  MOV DX,word ptr [ECX]
004fe04b  PUSH EDX
004fe04c  CALL 0x0045db30
004fe051  FST float ptr [ESI + 0x4]
004fe054  MOV EAX,dword ptr [ESP + 0x24]
004fe058  FCHS
004fe05a  MOV dword ptr [ESI],EAX
004fe05c  MOV dword ptr [ESI + 0x8],EBX
004fe05f  MOV dword ptr [ESI + 0xc],EBX
004fe062  FSTP float ptr [EDI]
004fe064  MOV ECX,EAX
004fe066  MOV AL,byte ptr [ESP + 0x23]
004fe06a  ADD ESP,0x8
004fe06d  MOV dword ptr [EDI + 0x4],ECX
004fe070  MOV dword ptr [EDI + 0x8],EBX
004fe073  MOV dword ptr [EDI + 0xc],EBX
004fe076  POP EDI
004fe077  POP ESI
004fe078  POP EBX
004fe079  MOV ESP,EBP
004fe07b  POP EBP
004fe07c  RET
004fe07d  MOV ESI,dword ptr [EBP + 0xc]
004fe080  MOV EDI,dword ptr [EBP + 0x10]
004fe083  MOV EDX,dword ptr [EBP + 0x14]
004fe086  XOR EBX,EBX
004fe088  MOV EAX,0x3f800000
004fe08d  MOV dword ptr [ESI],EAX
004fe08f  MOV dword ptr [ESI + 0x4],EBX
004fe092  MOV dword ptr [ESI + 0x8],EBX
004fe095  MOV dword ptr [ESI + 0xc],EBX
004fe098  MOV dword ptr [EDI + 0x8],EAX
004fe09b  XOR EAX,EAX
004fe09d  MOV dword ptr [EDI],EBX
004fe09f  MOV dword ptr [EDI + 0x4],EBX
004fe0a2  MOV dword ptr [EDI + 0xc],EBX
004fe0a5  MOV AX,word ptr [EDX]
004fe0a8  CMP AX,BX
004fe0ab  JZ 0x004fe1f7
004fe0b1  PUSH EAX
004fe0b2  CALL 0x0045dbf0
004fe0b7  FSTP float ptr [ESP + 0x20]
004fe0bb  MOV EAX,dword ptr [EBP + 0x14]
004fe0be  XOR ECX,ECX
004fe0c0  MOV CX,word ptr [EAX]
004fe0c3  PUSH ECX
004fe0c4  CALL 0x0045db30
004fe0c9  FLD ST0
004fe0cb  MOV EDX,dword ptr [ESP + 0x24]
004fe0cf  FCHS
004fe0d1  FSTP float ptr [ESI + 0x8]
004fe0d4  MOV dword ptr [ESI],EDX
004fe0d6  MOV dword ptr [ESI + 0x4],EBX
004fe0d9  MOV dword ptr [ESI + 0xc],EBX
004fe0dc  FSTP float ptr [EDI]
004fe0de  MOV EAX,EDX
004fe0e0  MOV dword ptr [EDI + 0x8],EAX
004fe0e3  MOV AL,byte ptr [ESP + 0x23]
004fe0e7  ADD ESP,0x8
004fe0ea  MOV dword ptr [EDI + 0x4],EBX
004fe0ed  MOV dword ptr [EDI + 0xc],EBX
004fe0f0  POP EDI
004fe0f1  POP ESI
004fe0f2  POP EBX
004fe0f3  MOV ESP,EBP
004fe0f5  POP EBP
004fe0f6  RET
004fe0f7  MOV ESI,dword ptr [EBP + 0xc]
004fe0fa  MOV EDI,dword ptr [EBP + 0x10]
004fe0fd  MOV ECX,dword ptr [EBP + 0x14]
004fe100  XOR EBX,EBX
004fe102  MOV dword ptr [ESI],EBX
004fe104  MOV EAX,0x3f800000
004fe109  MOV dword ptr [ESI + 0x4],EAX
004fe10c  MOV dword ptr [ESI + 0x8],EBX
004fe10f  MOV dword ptr [ESI + 0xc],EBX
004fe112  MOV dword ptr [EDI + 0x8],EAX
004fe115  XOR EAX,EAX
004fe117  MOV dword ptr [EDI],EBX
004fe119  MOV dword ptr [EDI + 0x4],EBX
004fe11c  MOV dword ptr [EDI + 0xc],EBX
004fe11f  MOV AX,word ptr [ECX]
004fe122  CMP AX,BX
004fe125  JZ 0x004fe1f7
004fe12b  PUSH EAX
004fe12c  CALL 0x0045dbf0
004fe131  FSTP float ptr [ESP + 0x20]
004fe135  MOV EDX,dword ptr [EBP + 0x14]
004fe138  XOR EAX,EAX
004fe13a  MOV AX,word ptr [EDX]
004fe13d  PUSH EAX
004fe13e  CALL 0x0045db30
004fe143  FST float ptr [ESI + 0x8]
004fe146  MOV ECX,dword ptr [ESP + 0x24]
004fe14a  FCHS
004fe14c  MOV AL,byte ptr [ESP + 0x23]
004fe150  MOV dword ptr [ESI],EBX
004fe152  MOV dword ptr [ESI + 0x4],ECX
004fe155  MOV dword ptr [ESI + 0xc],EBX
004fe158  FSTP float ptr [EDI + 0x4]
004fe15b  MOV EDX,ECX
004fe15d  ADD ESP,0x8
004fe160  MOV dword ptr [EDI],EBX
004fe162  MOV dword ptr [EDI + 0x8],EDX
004fe165  MOV dword ptr [EDI + 0xc],EBX
004fe168  POP EDI
004fe169  POP ESI
004fe16a  POP EBX
004fe16b  MOV ESP,EBP
004fe16d  POP EBP
004fe16e  RET
004fe16f  MOV EAX,dword ptr [EBP + 0x18]
004fe172  XOR EBX,EBX
004fe174  CMP EAX,EBX
004fe176  JZ 0x004fe1e5
004fe178  FLD float ptr [EAX]
004fe17a  MOV ESI,dword ptr [EBP + 0xc]
004fe17d  FLD float ptr [EAX + 0x10]
004fe180  MOV EDI,dword ptr [EBP + 0x10]
004fe183  FLD float ptr [EAX + 0x20]
004fe186  MOV dword ptr [ESI + 0xc],EBX
004fe189  FXCH ST2
004fe18b  FSTP float ptr [ESI]
004fe18d  FSTP float ptr [ESI + 0x4]
004fe190  FSTP float ptr [ESI + 0x8]
004fe193  FLD float ptr [EAX + 0x4]
004fe196  FLD float ptr [EAX + 0x14]
004fe199  FLD float ptr [EAX + 0x24]
004fe19c  MOV EAX,dword ptr [EBP + 0x14]
004fe19f  FXCH ST2
004fe1a1  MOV dword ptr [EDI + 0xc],EBX
004fe1a4  FSTP float ptr [EDI]
004fe1a6  FSTP float ptr [EDI + 0x4]
004fe1a9  FSTP float ptr [EDI + 0x8]
004fe1ac  MOVZX EAX,word ptr [EAX]
004fe1af  CMP AX,BX
004fe1b2  JZ 0x004fe1f7
004fe1b4  PUSH EAX
004fe1b5  LEA ECX,[ESP + 0x24]
004fe1b9  PUSH ECX
004fe1ba  CALL 0x006bdb50
004fe1bf  PUSH ESI
004fe1c0  LEA EDX,[ESP + 0x2c]
004fe1c4  PUSH EDX
004fe1c5  PUSH ESI
004fe1c6  CALL 0x006bd920
004fe1cb  PUSH EDI
004fe1cc  LEA EAX,[ESP + 0x38]
004fe1d0  PUSH EAX
004fe1d1  PUSH EDI
004fe1d2  CALL 0x006bd920
004fe1d7  MOV AL,byte ptr [ESP + 0x3b]
004fe1db  ADD ESP,0x20
004fe1de  POP EDI
004fe1df  POP ESI
004fe1e0  POP EBX
004fe1e1  MOV ESP,EBP
004fe1e3  POP EBP
004fe1e4  RET
004fe1e5  MOV byte ptr [ESP + 0x1b],BL
004fe1e9  MOV AL,BL
004fe1eb  POP EDI
004fe1ec  POP ESI
004fe1ed  POP EBX
004fe1ee  MOV ESP,EBP
004fe1f0  POP EBP
004fe1f1  RET
004fe1f2  MOV byte ptr [ESP + 0x1b],0x0
004fe1f7  MOV AL,byte ptr [ESP + 0x1b]
004fe1fb  POP EDI
004fe1fc  POP ESI
004fe1fd  POP EBX
004fe1fe  MOV ESP,EBP
004fe200  POP EBP
004fe201  RET
