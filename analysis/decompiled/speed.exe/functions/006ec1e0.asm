006ec1e0  MOV EDX,dword ptr [ESP + 0x4]
006ec1e4  MOV ECX,dword ptr [ESP + 0x8]
006ec1e8  CMP EDX,ECX
006ec1ea  MOV EAX,dword ptr [ESP + 0xc]
006ec1ee  JZ 0x006ec21a
006ec1f0  PUSH EBX
006ec1f1  PUSH ESI
006ec1f2  PUSH EDI
006ec1f3  SUB ECX,0x10
006ec1f6  SUB EAX,0x10
006ec1f9  CMP ECX,EDX
006ec1fb  MOV ESI,ECX
006ec1fd  MOV EBX,dword ptr [ESI]
006ec1ff  MOV EDI,EAX
006ec201  MOV dword ptr [EDI],EBX
006ec203  MOV EBX,dword ptr [ESI + 0x4]
006ec206  MOV dword ptr [EDI + 0x4],EBX
006ec209  MOV EBX,dword ptr [ESI + 0x8]
006ec20c  MOV dword ptr [EDI + 0x8],EBX
006ec20f  MOV ESI,dword ptr [ESI + 0xc]
006ec212  MOV dword ptr [EDI + 0xc],ESI
006ec215  JNZ 0x006ec1f3
006ec217  POP EDI
006ec218  POP ESI
006ec219  POP EBX
006ec21a  RET
