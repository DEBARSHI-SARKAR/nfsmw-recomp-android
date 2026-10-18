004b1110  PUSH -0x1
004b1112  PUSH 0x86b3ba
004b1117  MOV EAX,FS:[0x0]
004b111d  PUSH EAX
004b111e  MOV dword ptr FS:[0x0],ESP
004b1125  PUSH ECX
004b1126  PUSH EBX
004b1127  PUSH EBP
004b1128  PUSH ESI
004b1129  MOV ESI,ECX
004b112b  PUSH EDI
004b112c  MOV dword ptr [ESP + 0x10],ESI
004b1130  XOR EBX,EBX
004b1132  LEA ECX,[ESI + 0x18]
004b1135  MOV dword ptr [ESP + 0x1c],EBX
004b1139  MOV dword ptr [ESI],0x896ae4
004b113f  CALL 0x006539a0
004b1144  MOV EDI,0xbf800000
004b1149  MOV EBP,0x3f800000
004b114e  MOV dword ptr [ESI + 0x4],EBX
004b1151  MOV dword ptr [ESI + 0xc],EBX
004b1154  MOV dword ptr [ESI + 0x8],EBX
004b1157  MOV dword ptr [ESI + 0x10],EBX
004b115a  MOV dword ptr [ESI + 0x44],EDI
004b115d  MOV dword ptr [ESI + 0x48],EDI
004b1160  MOV dword ptr [ESI + 0x4c],EDI
004b1163  MOV dword ptr [ESI + 0x14],EBP
004b1166  MOV byte ptr [ESI + 0x40],BL
004b1169  LEA ECX,[ESI + 0x64]
004b116c  MOV byte ptr [ESP + 0x1c],0x1
004b1171  CALL 0x006539a0
004b1176  MOV dword ptr [ESI + 0x50],EBX
004b1179  MOV dword ptr [ESI + 0x58],EBX
004b117c  MOV dword ptr [ESI + 0x54],EBX
004b117f  MOV dword ptr [ESI + 0x5c],EBX
004b1182  MOV dword ptr [ESI + 0x90],EDI
004b1188  MOV dword ptr [ESI + 0x94],EDI
004b118e  MOV dword ptr [ESI + 0x98],EDI
004b1194  MOV dword ptr [ESI + 0x60],EBP
004b1197  MOV byte ptr [ESI + 0x8c],BL
004b119d  LEA ECX,[ESI + 0xb0]
004b11a3  MOV byte ptr [ESP + 0x1c],0x2
004b11a8  CALL 0x006539a0
004b11ad  MOV dword ptr [ESI + 0x9c],EBX
004b11b3  MOV dword ptr [ESI + 0xa4],EBX
004b11b9  MOV dword ptr [ESI + 0xa0],EBX
004b11bf  MOV dword ptr [ESI + 0xa8],EBX
004b11c5  MOV dword ptr [ESI + 0xdc],EDI
004b11cb  MOV dword ptr [ESI + 0xe0],EDI
004b11d1  MOV dword ptr [ESI + 0xe4],EDI
004b11d7  MOV dword ptr [ESI + 0xac],EBP
004b11dd  MOV byte ptr [ESI + 0xd8],BL
004b11e3  LEA ECX,[ESI + 0xfc]
004b11e9  MOV byte ptr [ESP + 0x1c],0x3
004b11ee  CALL 0x006539a0
004b11f3  MOV dword ptr [ESI + 0xe8],EBX
004b11f9  MOV dword ptr [ESI + 0xf0],EBX
004b11ff  MOV dword ptr [ESI + 0xec],EBX
004b1205  MOV dword ptr [ESI + 0xf4],EBX
004b120b  MOV dword ptr [ESI + 0x128],EDI
004b1211  MOV dword ptr [ESI + 0x12c],EDI
004b1217  MOV dword ptr [ESI + 0x130],EDI
004b121d  MOV dword ptr [ESI + 0xf8],EBP
004b1223  MOV byte ptr [ESI + 0x124],BL
004b1229  LEA ECX,[ESI + 0x148]
004b122f  MOV byte ptr [ESP + 0x1c],0x4
004b1234  CALL 0x006539a0
004b1239  MOV dword ptr [ESI + 0x134],EBX
004b123f  MOV dword ptr [ESI + 0x13c],EBX
004b1245  MOV dword ptr [ESI + 0x138],EBX
004b124b  MOV dword ptr [ESI + 0x140],EBX
004b1251  MOV dword ptr [ESI + 0x174],EDI
004b1257  MOV dword ptr [ESI + 0x178],EDI
004b125d  MOV dword ptr [ESI + 0x17c],EDI
004b1263  MOV dword ptr [ESI + 0x144],EBP
004b1269  MOV byte ptr [ESI + 0x170],BL
004b126f  MOV byte ptr [ESI + 0x18c],BL
004b1275  MOV dword ptr [ESI + 0x184],EBX
004b127b  MOV dword ptr [ESI + 0x188],EBX
004b1281  MOV dword ptr [ESI + 0x190],EBX
004b1287  MOV dword ptr [ESI + 0x180],EBX
004b128d  MOV EAX,ESI
004b128f  MOV ECX,dword ptr [ESP + 0x14]
004b1293  POP EDI
004b1294  POP ESI
004b1295  POP EBP
004b1296  POP EBX
004b1297  MOV dword ptr FS:[0x0],ECX
004b129e  ADD ESP,0x10
004b12a1  RET
