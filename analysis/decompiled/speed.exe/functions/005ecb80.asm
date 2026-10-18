005ecb80  PUSH ECX
005ecb81  PUSH ESI
005ecb82  MOV EAX,ECX
005ecb84  MOV dword ptr [ESP + 0x4],0x0
005ecb8c  MOV dword ptr [ESP + 0x4],EBP
005ecb90  MOV EDX,dword ptr [ESP + 0x4]
005ecb94  AND EDX,0x3
005ecb97  MOV ECX,dword ptr [EDX*0x4 + 0x8f5c08]
005ecb9e  MOV EDX,dword ptr [EDX*0x4 + 0x8f5c18]
005ecba5  MOV dword ptr [EAX],EDX
005ecba7  MOV EDX,dword ptr [ESP + 0xc]
005ecbab  MOV dword ptr [EAX + 0x4],0x18005801
005ecbb2  MOV dword ptr [EAX + 0x8],0x58084a02
005ecbb9  MOV dword ptr [EAX + 0xc],0x18005801
005ecbc0  MOV EDX,dword ptr [EDX]
005ecbc2  MOV dword ptr [EAX + 0x10],EDX
005ecbc5  MOV EDX,dword ptr [ESP + 0x10]
005ecbc9  MOV EDX,dword ptr [EDX]
005ecbcb  MOV dword ptr [EAX + 0x14],EDX
005ecbce  MOV EDX,ECX
005ecbd0  IMUL EDX,ECX
005ecbd3  XOR EDX,0x18005801
005ecbd9  MOV dword ptr [EAX + 0x4],EDX
005ecbdc  IMUL EDX,ECX
005ecbdf  XOR EDX,0x58084a02
005ecbe5  MOV ESI,dword ptr [EAX + 0x10]
005ecbe8  MOV dword ptr [EAX + 0x8],EDX
005ecbeb  IMUL EDX,ECX
005ecbee  XOR EDX,0x18005801
005ecbf4  MOV dword ptr [EAX + 0xc],EDX
005ecbf7  IMUL EDX,ECX
005ecbfa  XOR ESI,EDX
005ecbfc  MOV EDX,ESI
005ecbfe  IMUL EDX,ECX
005ecc01  MOV dword ptr [EAX + 0x10],ESI
005ecc04  MOV ESI,dword ptr [EAX + 0x14]
005ecc07  XOR ESI,EDX
005ecc09  MOV EDX,ESI
005ecc0b  IMUL EDX,ECX
005ecc0e  MOV dword ptr [EAX + 0x14],ESI
005ecc11  MOV ESI,dword ptr [EAX + 0x18]
005ecc14  XOR ESI,EDX
005ecc16  MOV EDX,ESI
005ecc18  IMUL EDX,ECX
005ecc1b  MOV ECX,dword ptr [EAX + 0x1c]
005ecc1e  XOR ECX,EDX
005ecc20  MOV dword ptr [EAX + 0x18],ESI
005ecc23  MOV dword ptr [EAX + 0x1c],ECX
005ecc26  POP ESI
005ecc27  POP ECX
005ecc28  RET 0x8
