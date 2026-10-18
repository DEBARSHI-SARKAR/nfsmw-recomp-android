00716d20  PUSH -0x1
00716d22  PUSH 0x88023e
00716d27  MOV EAX,FS:[0x0]
00716d2d  PUSH EAX
00716d2e  MOV dword ptr FS:[0x0],ESP
00716d35  PUSH ECX
00716d36  PUSH ESI
00716d37  MOV ESI,ECX
00716d39  PUSH EDI
00716d3a  XOR EDI,EDI
00716d3c  MOV dword ptr [ESI + 0x10],EDI
00716d3f  MOV dword ptr [ESI + 0x20],EDI
00716d42  MOV dword ptr [ESI + 0x24],EDI
00716d45  MOV dword ptr [ESI + 0x28],EDI
00716d48  MOV dword ptr [ESI + 0x2c],EDI
00716d4b  MOV dword ptr [ESI + 0x30],EDI
00716d4e  MOV dword ptr [ESI + 0x34],EDI
00716d51  MOV dword ptr [ESI + 0x38],EDI
00716d54  MOV dword ptr [ESI + 0x3c],0x890978
00716d5b  MOV dword ptr [ESI + 0x40],EDI
00716d5e  MOV dword ptr [ESP + 0x8],ESI
00716d62  MOV dword ptr [ESI + 0x44],EDI
00716d65  MOV dword ptr [ESI + 0x48],EDI
00716d68  MOV dword ptr [ESI + 0x4c],EDI
00716d6b  LEA ECX,[ESI + 0x58]
00716d6e  MOV dword ptr [ESI],0x8b24f0
00716d74  MOV dword ptr [ESP + 0x14],EDI
00716d78  MOV dword ptr [ECX + 0x4],EDI
00716d7b  MOV dword ptr [ECX + 0x8],EDI
00716d7e  MOV dword ptr [ECX + 0xc],EDI
00716d81  MOV dword ptr [ECX + 0x10],EDI
00716d84  MOV dword ptr [ESI + 0x70],EDI
00716d87  MOV dword ptr [ESI + 0x7c],EDI
00716d8a  MOV dword ptr [ESI + 0x80],EDI
00716d90  MOV dword ptr [ESI + 0x84],EDI
00716d96  MOV dword ptr [ESI + 0x74],0x8b2648
00716d9d  MOV dword ptr [ESI + 0x88],EDI
00716da3  MOV dword ptr [ESI + 0x8c],EDI
00716da9  MOV word ptr [ESI + 0x94],DI
00716db0  MOV dword ptr [ESI + 0x98],EDI
00716db6  MOV byte ptr [ESP + 0x14],0x2
00716dbb  MOV dword ptr [ESI + 0xa0],0x7fff
00716dc5  MOV dword ptr [ESI + 0xa4],0x1000
00716dcf  MOV dword ptr [ESI + 0x9c],EDI
00716dd5  MOV dword ptr [ESI + 0xa8],EDI
00716ddb  MOV dword ptr [ESI + 0xac],EDI
00716de1  MOV dword ptr [ESI + 0xb0],EDI
00716de7  CALL 0x00708a50
00716dec  CMP dword ptr [ESI + 0x2c],EDI
00716def  JNZ 0x00716e03
00716df1  CMP dword ptr [0x008f8700],EDI
00716df7  JZ 0x00716e03
00716df9  PUSH 0x7
00716dfb  LEA ECX,[ESI + 0x78]
00716dfe  CALL 0x00711d30
00716e03  MOV ECX,dword ptr [ESP + 0xc]
00716e07  MOV dword ptr [ESI + 0xa0],EDI
00716e0d  MOV dword ptr [ESI + 0xa8],EDI
00716e13  MOV dword ptr [ESI + 0xa4],0x1000
00716e1d  POP EDI
00716e1e  MOV EAX,ESI
00716e20  POP ESI
00716e21  MOV dword ptr FS:[0x0],ECX
00716e28  ADD ESP,0x10
00716e2b  RET
