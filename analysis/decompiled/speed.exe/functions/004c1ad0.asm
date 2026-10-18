004c1ad0  MOV EAX,dword ptr [ESP + 0x8]
004c1ad4  MOV ECX,dword ptr [ESP + 0x4]
004c1ad8  MOV EDX,dword ptr [EAX]
004c1ada  PUSH ESI
004c1adb  CMP EDX,dword ptr [ECX]
004c1add  PUSH EDI
004c1ade  JNC 0x004c1af2
004c1ae0  MOV EDI,dword ptr [ECX]
004c1ae2  MOV ESI,dword ptr [EAX + 0x4]
004c1ae5  MOV dword ptr [EAX],EDI
004c1ae7  MOV EDI,dword ptr [ECX + 0x4]
004c1aea  MOV dword ptr [EAX + 0x4],EDI
004c1aed  MOV dword ptr [ECX],EDX
004c1aef  MOV dword ptr [ECX + 0x4],ESI
004c1af2  MOV EDX,dword ptr [ESP + 0x14]
004c1af6  MOV ESI,dword ptr [EDX]
004c1af8  CMP ESI,dword ptr [EAX]
004c1afa  JNC 0x004c1b10
004c1afc  MOV EDI,dword ptr [EDX + 0x4]
004c1aff  PUSH EBX
004c1b00  MOV EBX,dword ptr [EAX]
004c1b02  MOV dword ptr [EDX],EBX
004c1b04  MOV EBX,dword ptr [EAX + 0x4]
004c1b07  MOV dword ptr [EDX + 0x4],EBX
004c1b0a  MOV dword ptr [EAX],ESI
004c1b0c  MOV dword ptr [EAX + 0x4],EDI
004c1b0f  POP EBX
004c1b10  MOV EDX,dword ptr [EAX]
004c1b12  CMP EDX,dword ptr [ECX]
004c1b14  JNC 0x004c1b28
004c1b16  MOV EDI,dword ptr [ECX]
004c1b18  MOV ESI,dword ptr [EAX + 0x4]
004c1b1b  MOV dword ptr [EAX],EDI
004c1b1d  MOV EDI,dword ptr [ECX + 0x4]
004c1b20  MOV dword ptr [EAX + 0x4],EDI
004c1b23  MOV dword ptr [ECX],EDX
004c1b25  MOV dword ptr [ECX + 0x4],ESI
004c1b28  POP EDI
004c1b29  POP ESI
004c1b2a  RET
