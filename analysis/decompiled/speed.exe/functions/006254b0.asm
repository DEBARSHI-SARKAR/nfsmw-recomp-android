006254b0  MOV EDX,dword ptr [ESP + 0x8]
006254b4  MOV EAX,ECX
006254b6  MOV ECX,dword ptr [ESP + 0x4]
006254ba  MOV dword ptr [EAX + 0x4],0x60
006254c1  MOV dword ptr [EAX],0x8a75c0
006254c7  MOV dword ptr [EAX + 0x8],ECX
006254ca  MOV ECX,dword ptr [ESP + 0xc]
006254ce  MOV dword ptr [EAX + 0xc],EDX
006254d1  MOV EDX,dword ptr [ESP + 0x10]
006254d5  MOV dword ptr [EAX + 0x10],ECX
006254d8  MOV ECX,dword ptr [ESP + 0x14]
006254dc  MOV dword ptr [EAX + 0x14],EDX
006254df  MOV EDX,dword ptr [ESP + 0x18]
006254e3  MOV dword ptr [EAX + 0x18],ECX
006254e6  MOV ECX,dword ptr [ESP + 0x1c]
006254ea  MOV dword ptr [EAX + 0x1c],EDX
006254ed  MOV EDX,dword ptr [ESP + 0x20]
006254f1  MOV dword ptr [EAX + 0x20],ECX
006254f4  MOV ECX,dword ptr [ESP + 0x24]
006254f8  MOV dword ptr [EAX + 0x24],EDX
006254fb  MOV EDX,dword ptr [ESP + 0x28]
006254ff  MOV dword ptr [EAX + 0x28],ECX
00625502  MOV ECX,dword ptr [ESP + 0x2c]
00625506  MOV dword ptr [EAX + 0x2c],EDX
00625509  MOV EDX,dword ptr [ESP + 0x30]
0062550d  MOV dword ptr [EAX + 0x30],ECX
00625510  MOV dword ptr [EAX + 0x34],EDX
00625513  MOV EDX,dword ptr [ESP + 0x34]
00625517  LEA ECX,[EAX + 0x38]
0062551a  MOV dword ptr [ECX],EDX
0062551c  MOV EDX,dword ptr [ESP + 0x38]
00625520  MOV dword ptr [ECX + 0x4],EDX
00625523  MOV EDX,dword ptr [ESP + 0x3c]
00625527  MOV dword ptr [ECX + 0x8],EDX
0062552a  MOV EDX,dword ptr [ESP + 0x40]
0062552e  MOV dword ptr [ECX + 0xc],EDX
00625531  MOV EDX,dword ptr [ESP + 0x44]
00625535  LEA ECX,[EAX + 0x48]
00625538  MOV dword ptr [ECX],EDX
0062553a  MOV EDX,dword ptr [ESP + 0x48]
0062553e  MOV dword ptr [ECX + 0x4],EDX
00625541  MOV EDX,dword ptr [ESP + 0x4c]
00625545  MOV dword ptr [ECX + 0x8],EDX
00625548  MOV EDX,dword ptr [ESP + 0x50]
0062554c  MOV dword ptr [ECX + 0xc],EDX
0062554f  RET 0x50
