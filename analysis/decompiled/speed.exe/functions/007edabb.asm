007edabb  PUSH EBP
007edabc  MOV EBP,ESP
007edabe  PUSH ECX
007edabf  PUSH EBX
007edac0  PUSH ESI
007edac1  PUSH EDI
007edac2  PUSH dword ptr [EBP + 0x8]
007edac5  CALL 0x007ed010
007edaca  MOV ESI,EAX
007edacc  POP ECX
007edacd  LEA EDI,[ESI + 0x28]
007edad0  MOV ECX,EDI
007edad2  CALL 0x007ec1bd
007edad7  PUSH dword ptr [EBP + 0x8]
007edada  LEA EBX,[EBP + -0x4]
007edadd  CALL 0x007ed83c
007edae2  CMP dword ptr [EBP + -0x4],0x0
007edae6  POP ECX
007edae7  JZ 0x007edaf1
007edae9  MOV ECX,dword ptr [EBP + 0xc]
007edaec  MOV dword ptr [EAX + 0x1c],ECX
007edaef  JMP 0x007edb02
007edaf1  PUSH dword ptr [EAX + 0x18]
007edaf4  MOVSX ECX,byte ptr [EAX + 0x11]
007edaf8  PUSH ECX
007edaf9  PUSH dword ptr [EAX + 0xc]
007edafc  CALL dword ptr [EBP + 0xc]
007edaff  ADD ESP,0xc
007edb02  MOV ECX,EDI
007edb04  CALL 0x007ec1c8
007edb09  POP EDI
007edb0a  POP ESI
007edb0b  POP EBX
007edb0c  LEAVE
007edb0d  RET
