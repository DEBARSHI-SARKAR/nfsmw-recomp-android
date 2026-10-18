00404390  SUB ESP,0x10
00404393  MOVZX EAX,word ptr [ECX + 0xe]
00404397  MOVSX EDX,byte ptr [ECX + 0x13]
0040439b  MOV dword ptr [ESP],EAX
0040439e  MOVSX EAX,byte ptr [ECX + 0x14]
004043a2  FILD dword ptr [ESP]
004043a5  MOVSX ECX,byte ptr [ECX + 0x15]
004043a9  MOV dword ptr [ESP],EDX
004043ac  FMUL float ptr [0x008eb344]
004043b2  MOV EDX,dword ptr [ESP + 0x14]
004043b6  FMUL float ptr [0x00890bf0]
004043bc  FILD dword ptr [ESP]
004043bf  MOV dword ptr [ESP],EAX
004043c2  FMUL ST1
004043c4  FSTP float ptr [ESP + 0x4]
004043c8  MOV EAX,dword ptr [ESP + 0x4]
004043cc  FILD dword ptr [ESP]
004043cf  MOV dword ptr [ESP],ECX
004043d2  MOV dword ptr [EDX],EAX
004043d4  FMUL ST1
004043d6  FSTP float ptr [ESP + 0x8]
004043da  MOV ECX,dword ptr [ESP + 0x8]
004043de  FILD dword ptr [ESP]
004043e1  MOV dword ptr [EDX + 0x4],ECX
004043e4  FMUL ST1
004043e6  FSTP float ptr [ESP + 0xc]
004043ea  MOV EAX,dword ptr [ESP + 0xc]
004043ee  MOV dword ptr [EDX + 0x8],EAX
004043f1  FSTP ST0
004043f3  ADD ESP,0x10
004043f6  RET 0x4
