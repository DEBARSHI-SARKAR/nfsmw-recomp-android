005c12f0  PUSH -0x1
005c12f2  PUSH 0x874534
005c12f7  MOV EAX,FS:[0x0]
005c12fd  PUSH EAX
005c12fe  MOV dword ptr FS:[0x0],ESP
005c1305  PUSH ECX
005c1306  XOR EDX,EDX
005c1308  PUSH EBX
005c1309  PUSH ESI
005c130a  MOV ESI,ECX
005c130c  MOV dword ptr [ESI + 0x10],EDX
005c130f  MOV dword ptr [ESI + 0xc],EDX
005c1312  MOV dword ptr [ESI + 0x8],EDX
005c1315  MOV word ptr [ESI + 0x16],DX
005c1319  MOV word ptr [ESI + 0x14],DX
005c131d  MOV dword ptr [ESI + 0x20],EDX
005c1320  MOV dword ptr [ESI + 0x1c],EDX
005c1323  MOV dword ptr [ESI + 0x18],EDX
005c1326  MOV byte ptr [ESI + 0x24],DL
005c1329  MOV byte ptr [ESI + 0x25],DL
005c132c  MOV EAX,0x8a2d48
005c1331  PUSH EDI
005c1332  MOV dword ptr [ESP + 0xc],ESI
005c1336  MOV dword ptr [ESI + 0xe0],EDX
005c133c  MOV dword ptr [ESI + 0xe4],EDX
005c1342  MOV dword ptr [ESI + 0xdc],EDX
005c1348  MOV dword ptr [ESI + 0xd8],EAX
005c134e  MOV dword ptr [ESP + 0x18],EDX
005c1352  MOV dword ptr [ESI + 0xf0],EDX
005c1358  MOV dword ptr [ESI + 0xf4],EDX
005c135e  MOV dword ptr [ESI + 0xec],EDX
005c1364  MOV dword ptr [ESI + 0xe8],EAX
005c136a  MOV dword ptr [ESI + 0x100],EDX
005c1370  MOV dword ptr [ESI + 0x104],EDX
005c1376  MOV dword ptr [ESI + 0xfc],EDX
005c137c  MOV dword ptr [ESI + 0xf8],EAX
005c1382  MOV dword ptr [ESI + 0x10c],EDX
005c1388  MOV dword ptr [ESI + 0x4110],0x8a2c18
005c1392  MOV dword ptr [ESI + 0x4118],EDX
005c1398  MOV dword ptr [ESI + 0x411c],EDX
005c139e  MOV dword ptr [ESI + 0x4114],EDX
005c13a4  MOV dword ptr [ESI + 0x4128],EDX
005c13aa  MOV dword ptr [ESI + 0x412c],EDX
005c13b0  MOV dword ptr [ESI + 0x4124],EDX
005c13b6  MOV dword ptr [ESI + 0x4120],EAX
005c13bc  LEA EBX,[ESI + 0x4130]
005c13c2  MOV dword ptr [EBX + 0x8],EDX
005c13c5  MOV dword ptr [EBX + 0xc],EDX
005c13c8  MOV dword ptr [EBX + 0x4],EDX
005c13cb  MOV dword ptr [EBX],EAX
005c13cd  MOV byte ptr [EBX + 0x10],DL
005c13d0  MOV AL,0x1
005c13d2  MOV byte ptr [ESI],AL
005c13d4  MOV byte ptr [ESI + 0x2],AL
005c13d7  MOV byte ptr [ESI + 0x3],AL
005c13da  XOR EAX,EAX
005c13dc  MOV byte ptr [ESI + 0x524d],DL
005c13e2  MOV dword ptr [ESI + 0xd0],EDX
005c13e8  MOV dword ptr [ESI + 0x4],EDX
005c13eb  MOV dword ptr [ESI + 0x2c],EDX
005c13ee  MOV dword ptr [ESI + 0x28],EDX
005c13f1  MOV dword ptr [ESI + 0xcc],EDX
005c13f7  MOV byte ptr [ESI + 0x1],DL
005c13fa  MOV byte ptr [ESI + 0x524c],DL
005c1400  MOV byte ptr [ESI + 0x524e],DL
005c1406  MOV ECX,0x13
005c140b  LEA EDI,[ESI + 0x80]
005c1411  STOSD.REP ES:EDI
005c1413  MOV dword ptr [ESI + 0x4144],EDX
005c1419  MOV ECX,0x400
005c141e  LEA EDI,[ESI + 0x4148]
005c1424  STOSD.REP ES:EDI
005c1426  MOV dword ptr [ESI + 0x5148],EDX
005c142c  MOV ECX,0x40
005c1431  LEA EDI,[ESI + 0x514c]
005c1437  STOSD.REP ES:EDI
005c1439  MOV ECX,EBX
005c143b  MOV byte ptr [ESP + 0x18],0x5
005c1440  CALL 0x005bf940
005c1445  MOV EAX,ESI
005c1447  POP EDI
005c1448  MOV ECX,dword ptr [ESP + 0xc]
005c144c  POP ESI
005c144d  POP EBX
005c144e  MOV dword ptr FS:[0x0],ECX
005c1455  ADD ESP,0x10
005c1458  RET
