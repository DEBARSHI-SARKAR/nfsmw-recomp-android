005d0bf0  CMP dword ptr [ECX + 0x6c],0x1
005d0bf4  JA 0x005d0c66
005d0bf6  MOV EDX,dword ptr [ESP + 0x4]
005d0bfa  PUSH ESI
005d0bfb  PUSH EDI
005d0bfc  XOR EAX,EAX
005d0bfe  MOV dword ptr [ECX + 0x60],EAX
005d0c01  MOV EDI,dword ptr [EDX]
005d0c03  MOV ESI,ECX
005d0c05  MOV dword ptr [ESI],EDI
005d0c07  MOV EDI,dword ptr [EDX + 0x4]
005d0c0a  MOV dword ptr [ESI + 0x4],EDI
005d0c0d  MOV EDX,dword ptr [EDX + 0x8]
005d0c10  MOV dword ptr [ESI + 0x8],EDX
005d0c13  MOV ESI,dword ptr [ESP + 0x10]
005d0c17  MOV EDI,dword ptr [ESI]
005d0c19  LEA EDX,[ECX + 0x10]
005d0c1c  MOV dword ptr [EDX],EDI
005d0c1e  MOV EDI,dword ptr [ESI + 0x4]
005d0c21  MOV dword ptr [EDX + 0x4],EDI
005d0c24  MOV ESI,dword ptr [ESI + 0x8]
005d0c27  MOV dword ptr [EDX + 0x8],ESI
005d0c2a  MOV ESI,dword ptr [ESP + 0x18]
005d0c2e  MOV EDI,dword ptr [ESI]
005d0c30  LEA EDX,[ECX + 0x20]
005d0c33  MOV dword ptr [EDX],EDI
005d0c35  MOV EDI,dword ptr [ESI + 0x4]
005d0c38  MOV dword ptr [EDX + 0x4],EDI
005d0c3b  MOV ESI,dword ptr [ESI + 0x8]
005d0c3e  MOV dword ptr [EDX + 0x8],ESI
005d0c41  MOV ESI,dword ptr [ESP + 0x14]
005d0c45  MOV EDI,dword ptr [ESI]
005d0c47  LEA EDX,[ECX + 0x30]
005d0c4a  MOV dword ptr [EDX],EDI
005d0c4c  MOV EDI,dword ptr [ESI + 0x4]
005d0c4f  MOV dword ptr [EDX + 0x4],EDI
005d0c52  MOV ESI,dword ptr [ESI + 0x8]
005d0c55  MOV dword ptr [EDX + 0x8],ESI
005d0c58  MOV dword ptr [ECX + 0xc],EAX
005d0c5b  MOV dword ptr [ECX + 0x1c],EAX
005d0c5e  POP EDI
005d0c5f  MOV dword ptr [ECX + 0x2c],EAX
005d0c62  MOV dword ptr [ECX + 0x3c],EAX
005d0c65  POP ESI
005d0c66  RET 0x10
