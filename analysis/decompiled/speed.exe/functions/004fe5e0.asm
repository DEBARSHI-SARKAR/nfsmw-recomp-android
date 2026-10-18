004fe5e0  PUSH EBP
004fe5e1  MOV EBP,ESP
004fe5e3  AND ESP,0xfffffff0
004fe5e6  SUB ESP,0xb4
004fe5ec  PUSH EBX
004fe5ed  PUSH ESI
004fe5ee  MOV ESI,ECX
004fe5f0  MOV EAX,dword ptr [ESI + 0x4]
004fe5f3  TEST EAX,EAX
004fe5f5  PUSH EDI
004fe5f6  JZ 0x004fe781
004fe5fc  MOV EAX,dword ptr [ESI + 0x8]
004fe5ff  MOV ECX,dword ptr [EAX + 0xb4]
004fe605  MOV EDI,dword ptr [EAX + 0xe4]
004fe60b  MOV EBX,dword ptr [EAX + 0xb0]
004fe611  MOV EAX,dword ptr [EAX + 0xac]
004fe617  LEA EDX,[ESP + 0x80]
004fe61e  PUSH EDX
004fe61f  PUSH EAX
004fe620  MOV dword ptr [ESP + 0x20],ECX
004fe624  CALL 0x004fe540
004fe629  LEA ECX,[ESP + 0x98]
004fe630  PUSH ECX
004fe631  PUSH EDI
004fe632  CALL 0x004fe540
004fe637  LEA EDX,[ESP + 0xb0]
004fe63e  PUSH EDX
004fe63f  PUSH EBX
004fe640  CALL 0x004fe540
004fe645  MOV ECX,dword ptr [ESP + 0x30]
004fe649  LEA EAX,[ESP + 0xc8]
004fe650  PUSH EAX
004fe651  PUSH ECX
004fe652  CALL 0x004fe540
004fe657  XOR EAX,EAX
004fe659  MOV ECX,0x10
004fe65e  LEA EDI,[ESP + 0x60]
004fe662  STOSD.REP ES:EDI
004fe664  MOV EAX,dword ptr [ESI + 0x8]
004fe667  MOV EDX,dword ptr [EAX + 0x44]
004fe66a  MOV ECX,dword ptr [EAX + 0x48]
004fe66d  FLD float ptr [EAX + 0x50]
004fe670  MOV dword ptr [ESP + 0x44],EDX
004fe674  FMUL float ptr [0x00894c30]
004fe67a  MOV EDX,dword ptr [EAX + 0x4c]
004fe67d  MOV dword ptr [ESP + 0x48],ECX
004fe681  MOV dword ptr [ESP + 0x4c],EDX
004fe685  FSTP float ptr [ESP + 0x38]
004fe689  FLD float ptr [EAX + 0x54]
004fe68c  FMUL float ptr [0x00894c30]
004fe692  FSTP float ptr [ESP + 0x3c]
004fe696  FLD float ptr [EAX + 0x58]
004fe699  MOV EDX,dword ptr [ESP + 0x3c]
004fe69d  FMUL float ptr [0x00894c30]
004fe6a3  FSTP float ptr [ESP + 0x58]
004fe6a7  FLD float ptr [EAX + 0x5c]
004fe6aa  MOV EBX,dword ptr [ESP + 0x58]
004fe6ae  FMUL float ptr [0x00894c30]
004fe6b4  FSTP float ptr [ESP + 0x5c]
004fe6b8  FLD float ptr [EAX + 0x40]
004fe6bb  MOV EDI,dword ptr [ESP + 0x5c]
004fe6bf  FMUL float ptr [0x008933d4]
004fe6c5  PUSH EDI
004fe6c6  FLD float ptr [ESP + 0x48]
004fe6ca  PUSH EBX
004fe6cb  FMUL float ptr [0x008933d4]
004fe6d1  FLD float ptr [ESP + 0x50]
004fe6d5  FMUL float ptr [0x008933d4]
004fe6db  FSTP float ptr [ESP + 0x50]
004fe6df  MOV EAX,dword ptr [ESP + 0x50]
004fe6e3  FLD float ptr [ESP + 0x54]
004fe6e7  MOV dword ptr [ESP + 0x88],EAX
004fe6ee  FMUL float ptr [0x008933d4]
004fe6f4  MOV EAX,dword ptr [ESI + 0x8]
004fe6f7  FSTP float ptr [ESP + 0x54]
004fe6fb  MOV ECX,dword ptr [ESP + 0x54]
004fe6ff  FXCH
004fe701  MOV dword ptr [ESP + 0x98],ECX
004fe708  FSTP float ptr [ESP + 0x68]
004fe70c  FSTP float ptr [ESP + 0x78]
004fe710  FLD float ptr [EAX + 0x20]
004fe713  FMUL float ptr [0x00899dd4]
004fe719  FSTP float ptr [ESP + 0x6c]
004fe71d  FLD float ptr [EAX + 0x24]
004fe720  FMUL float ptr [0x00899dd4]
004fe726  FSTP float ptr [ESP + 0x7c]
004fe72a  FLD float ptr [EAX + 0x28]
004fe72d  FMUL float ptr [0x00899dd4]
004fe733  FSTP float ptr [ESP + 0x8c]
004fe73a  FLD float ptr [EAX + 0x2c]
004fe73d  FMUL float ptr [0x00899dd4]
004fe743  FSTP float ptr [ESP + 0x9c]
004fe74a  MOV EAX,dword ptr [ESP + 0x40]
004fe74e  PUSH EDX
004fe74f  PUSH EAX
004fe750  LEA ECX,[ESP + 0xb0]
004fe757  PUSH ECX
004fe758  LEA EDX,[ESI + 0x20]
004fe75b  PUSH EDX
004fe75c  CALL 0x0045ea70
004fe761  MOV EAX,dword ptr [ESP + 0x54]
004fe765  MOV ECX,dword ptr [ESP + 0x50]
004fe769  PUSH EDI
004fe76a  PUSH EBX
004fe76b  PUSH EAX
004fe76c  PUSH ECX
004fe76d  LEA EDX,[ESP + 0x88]
004fe774  PUSH EDX
004fe775  ADD ESI,0x60
004fe778  PUSH ESI
004fe779  CALL 0x0045ea70
004fe77e  ADD ESP,0x50
004fe781  POP EDI
004fe782  POP ESI
004fe783  POP EBX
004fe784  MOV ESP,EBP
004fe786  POP EBP
004fe787  RET
