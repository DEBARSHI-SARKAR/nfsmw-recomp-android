004fb8f0  SUB ESP,0xc
004fb8f3  MOV EAX,dword ptr [ECX + 0x30]
004fb8f6  FLD float ptr [ECX + 0x24]
004fb8f9  FLD float ptr [ECX + 0x28]
004fb8fc  MOV EDX,dword ptr [ECX + 0x34]
004fb8ff  MOV dword ptr [ESP],EAX
004fb902  FXCH
004fb904  MOV EAX,dword ptr [ECX + 0x38]
004fb907  MOV ECX,dword ptr [ECX + 0x20]
004fb90a  MOV dword ptr [ESP + 0x8],EAX
004fb90e  MOV EAX,dword ptr [ESP + 0x10]
004fb912  FSTP float ptr [EAX + 0x4]
004fb915  MOV dword ptr [EAX],ECX
004fb917  MOV ECX,dword ptr [ESP + 0x8]
004fb91b  FSTP float ptr [EAX + 0x8]
004fb91e  MOV EAX,dword ptr [ESP + 0x14]
004fb922  FLD float ptr [ESP]
004fb925  MOV dword ptr [ESP + 0x4],EDX
004fb929  FSTP float ptr [EAX]
004fb92b  MOV dword ptr [EAX + 0x4],EDX
004fb92e  MOV dword ptr [EAX + 0x8],ECX
004fb931  ADD ESP,0xc
004fb934  RET 0x8
