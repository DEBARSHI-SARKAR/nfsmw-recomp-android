006b8de0  PUSH -0x1
006b8de2  PUSH 0x87de08
006b8de7  MOV EAX,FS:[0x0]
006b8ded  PUSH EAX
006b8dee  MOV dword ptr FS:[0x0],ESP
006b8df5  SUB ESP,0x10
006b8df8  PUSH EBX
006b8df9  PUSH EBP
006b8dfa  PUSH ESI
006b8dfb  MOV ESI,ECX
006b8dfd  LEA EBP,[ESI + 0x4c]
006b8e00  LEA EBX,[ESI + 0x60]
006b8e03  MOV dword ptr [ESP + 0x18],ESI
006b8e07  MOV dword ptr [ESI],0x8ad52c
006b8e0d  MOV dword ptr [ESI + 0x8],0x8ad524
006b8e14  MOV dword ptr [EBP],0x8ad508
006b8e1b  MOV dword ptr [ESI + 0x54],0x8ad488
006b8e22  MOV dword ptr [EBX],0x8ad468
006b8e28  MOV ECX,dword ptr [ESI + 0x6c]
006b8e2b  TEST ECX,ECX
006b8e2d  MOV dword ptr [ESP + 0x24],0x4
006b8e35  JZ 0x006b8e3d
006b8e37  MOV EAX,dword ptr [ECX]
006b8e39  PUSH 0x1
006b8e3b  CALL dword ptr [EAX]
006b8e3d  MOV EAX,dword ptr [ESI + 0x74]
006b8e40  PUSH EDI
006b8e41  MOV EDI,dword ptr [EAX]
006b8e43  CMP EDI,EAX
006b8e45  JZ 0x006b8e5b
006b8e47  MOV ECX,dword ptr [EDI + 0x8]
006b8e4a  TEST ECX,ECX
006b8e4c  JZ 0x006b8e54
006b8e4e  MOV EDX,dword ptr [ECX]
006b8e50  PUSH 0x1
006b8e52  CALL dword ptr [EDX]
006b8e54  MOV EDI,dword ptr [EDI]
006b8e56  CMP EDI,dword ptr [ESI + 0x74]
006b8e59  JNZ 0x006b8e47
006b8e5b  MOV ECX,dword ptr [ESI + 0x74]
006b8e5e  MOV EAX,dword ptr [ECX]
006b8e60  MOV dword ptr [ECX],ECX
006b8e62  MOV ECX,dword ptr [ESI + 0x74]
006b8e65  MOV dword ptr [ECX + 0x4],ECX
006b8e68  CMP EAX,dword ptr [ESI + 0x74]
006b8e6b  MOV byte ptr [ESP + 0x28],0x3
006b8e70  MOV dword ptr [ESI + 0x78],0x0
006b8e77  JZ 0x006b8e98
006b8e79  LEA ESP,[ESP]
006b8e80  MOV EDI,dword ptr [EAX]
006b8e82  PUSH 0x0
006b8e84  PUSH 0xc
006b8e86  PUSH EAX
006b8e87  MOV ECX,0x925b30
006b8e8c  CALL 0x005d0370
006b8e91  CMP EDI,dword ptr [ESI + 0x74]
006b8e94  MOV EAX,EDI
006b8e96  JNZ 0x006b8e80
006b8e98  MOV EAX,dword ptr [ESI + 0x74]
006b8e9b  TEST EAX,EAX
006b8e9d  POP EDI
006b8e9e  JZ 0x006b8eaf
006b8ea0  PUSH 0x0
006b8ea2  PUSH 0xc
006b8ea4  PUSH EAX
006b8ea5  MOV ECX,0x925b30
006b8eaa  CALL 0x005d0370
006b8eaf  MOV dword ptr [ESI + 0x74],0x0
006b8eb6  MOV dword ptr [EBX],0x890970
006b8ebc  MOV ECX,dword ptr [EBX + 0x4]
006b8ebf  PUSH EBX
006b8ec0  MOV byte ptr [ESP + 0x28],0x2
006b8ec5  CALL 0x005d5a50
006b8eca  LEA ECX,[ESI + 0x54]
006b8ecd  MOV byte ptr [ESP + 0x24],0x1
006b8ed2  CALL 0x006b5870
006b8ed7  MOV dword ptr [EBP],0x890970
006b8ede  MOV ECX,dword ptr [EBP + 0x4]
006b8ee1  PUSH EBP
006b8ee2  MOV byte ptr [ESP + 0x28],0x0
006b8ee7  CALL 0x005d5a50
006b8eec  MOV ECX,ESI
006b8eee  MOV dword ptr [ESP + 0x24],0xffffffff
006b8ef6  MOV dword ptr [ESI],0x890f28
006b8efc  MOV dword ptr [ESI + 0x8],0x890f20
006b8f03  CALL 0x006ee930
006b8f08  MOV ECX,dword ptr [ESP + 0x1c]
006b8f0c  POP ESI
006b8f0d  POP EBP
006b8f0e  POP EBX
006b8f0f  MOV dword ptr FS:[0x0],ECX
006b8f16  ADD ESP,0x1c
006b8f19  RET
