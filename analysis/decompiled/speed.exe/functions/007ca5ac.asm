007ca5ac  MOV EBX,dword ptr [ESP + 0x4]
007ca5b0  MOV EBP,dword ptr [EBX]
007ca5b2  MOV ESI,dword ptr [EBX + 0x18]
007ca5b5  CMP ESI,dword ptr FS:[0x0]
007ca5bc  JZ 0x007ca5c7
007ca5be  PUSH ESI
007ca5bf  CALL 0x007c5108
007ca5c4  ADD ESP,0x4
007ca5c7  CMP ESI,0x0
007ca5ca  JZ 0x007ca5fc
007ca5cc  LEA EAX,[EBX + 0x20]
007ca5cf  PUSH EAX
007ca5d0  CALL 0x007dacb0
007ca5d5  OR EAX,EAX
007ca5d7  JZ 0x007ca5ef
007ca5d9  MOV EAX,dword ptr [EBX + 0x20]
007ca5dc  CMP EAX,0x56433230
007ca5e1  JNZ 0x007ca5ef
007ca5e3  MOV EAX,dword ptr [EBX + 0x24]
007ca5e6  OR EAX,EAX
007ca5e8  JZ 0x007ca5fc
007ca5ea  PUSH EBX
007ca5eb  CALL EAX
007ca5ed  JMP 0x007ca5fc
007ca5ef  MOV EAX,dword ptr [EBX + 0x1c]
007ca5f2  PUSH EAX
007ca5f3  PUSH ESI
007ca5f4  CALL 0x007c514a
007ca5f9  ADD ESP,0x8
007ca5fc  PUSH 0x0
007ca5fe  MOV EAX,dword ptr [EBX + 0x14]
007ca601  CALL 0x007c51de
007ca606  MOV EDX,EBX
007ca608  MOV EBX,dword ptr [EDX + 0x4]
007ca60b  MOV EDI,dword ptr [EDX + 0x8]
007ca60e  MOV ESI,dword ptr [EDX + 0xc]
007ca611  MOV EAX,dword ptr [ESP + 0x8]
007ca615  CMP EAX,0x1
007ca618  ADC EAX,0x0
007ca61b  MOV ESP,dword ptr [EDX + 0x10]
007ca61e  ADD ESP,0x4
007ca621  JMP dword ptr [EDX + 0x14]
