005bd710  PUSH -0x1
005bd712  PUSH 0x874238
005bd717  MOV EAX,FS:[0x0]
005bd71d  PUSH EAX
005bd71e  MOV dword ptr FS:[0x0],ESP
005bd725  PUSH ECX
005bd726  PUSH EBX
005bd727  PUSH EBP
005bd728  PUSH ESI
005bd729  MOV ESI,ECX
005bd72b  MOV EAX,0xabadcafe
005bd730  PUSH EDI
005bd731  MOV dword ptr [ESP + 0x10],ESI
005bd735  MOV dword ptr [ESI + 0x4],EAX
005bd738  MOV dword ptr [ESI + 0x8],EAX
005bd73b  PUSH 0x5ad560
005bd740  PUSH 0x5ad540
005bd745  PUSH 0x100
005bd74a  PUSH 0x20
005bd74c  LEA EAX,[ESI + 0xc]
005bd74f  XOR EBX,EBX
005bd751  PUSH EAX
005bd752  MOV dword ptr [ESP + 0x30],EBX
005bd756  MOV dword ptr [ESI],0x8a2e18
005bd75c  CALL 0x007c90a0
005bd761  MOV dword ptr [ESI + 0x200c],0x8a2c18
005bd76b  MOV dword ptr [ESI + 0x2014],EBX
005bd771  MOV dword ptr [ESI + 0x2018],EBX
005bd777  MOV dword ptr [ESI + 0x2010],EBX
005bd77d  MOV dword ptr [ESI + 0x201c],EBX
005bd783  LEA EAX,[ESI + 0x14]
005bd786  MOV EBP,0x40
005bd78b  JMP 0x005bd790
005bd790  MOV EDX,dword ptr [ESI + 0x2018]
005bd796  LEA ECX,[EAX + -0x8]
005bd799  TEST ECX,ECX
005bd79b  JZ 0x005bd7ed
005bd79d  CMP EDX,EBX
005bd79f  JZ 0x005bd7bb
005bd7a1  MOV ECX,dword ptr [EDX + 0x4]
005bd7a4  CMP ECX,EBX
005bd7a6  MOV dword ptr [EAX + -0x4],ECX
005bd7a9  JZ 0x005bd7b1
005bd7ab  LEA EDI,[EAX + -0x8]
005bd7ae  MOV dword ptr [ECX + 0x8],EDI
005bd7b1  LEA ECX,[EAX + -0x8]
005bd7b4  MOV dword ptr [EAX],EDX
005bd7b6  MOV dword ptr [EDX + 0x4],ECX
005bd7b9  JMP 0x005bd7d9
005bd7bb  MOV ECX,dword ptr [ESI + 0x2014]
005bd7c1  CMP ECX,EBX
005bd7c3  MOV dword ptr [EAX + -0x4],ECX
005bd7c6  JZ 0x005bd7ce
005bd7c8  LEA EDI,[EAX + -0x8]
005bd7cb  MOV dword ptr [ECX + 0x8],EDI
005bd7ce  LEA ECX,[EAX + -0x8]
005bd7d1  MOV dword ptr [EAX],EBX
005bd7d3  MOV dword ptr [ESI + 0x2014],ECX
005bd7d9  CMP dword ptr [ESI + 0x2018],EDX
005bd7df  JNZ 0x005bd7e7
005bd7e1  MOV dword ptr [ESI + 0x2018],ECX
005bd7e7  INC dword ptr [ESI + 0x2010]
005bd7ed  MOV EDI,dword ptr [ESI + 0x2018]
005bd7f3  LEA ECX,[EAX + 0x18]
005bd7f6  CMP ECX,EBX
005bd7f8  JZ 0x005bd840
005bd7fa  CMP EDI,EBX
005bd7fc  JZ 0x005bd813
005bd7fe  MOV EDX,dword ptr [EDI + 0x4]
005bd801  CMP EDX,EBX
005bd803  MOV dword ptr [EAX + 0x1c],EDX
005bd806  JZ 0x005bd80b
005bd808  MOV dword ptr [EDX + 0x8],ECX
005bd80b  MOV dword ptr [EAX + 0x20],EDI
005bd80e  MOV dword ptr [EDI + 0x4],ECX
005bd811  JMP 0x005bd82c
005bd813  MOV EDX,dword ptr [ESI + 0x2014]
005bd819  CMP EDX,EBX
005bd81b  MOV dword ptr [EAX + 0x1c],EDX
005bd81e  JZ 0x005bd823
005bd820  MOV dword ptr [EDX + 0x8],ECX
005bd823  MOV dword ptr [EAX + 0x20],EBX
005bd826  MOV dword ptr [ESI + 0x2014],ECX
005bd82c  CMP dword ptr [ESI + 0x2018],EDI
005bd832  JNZ 0x005bd83a
005bd834  MOV dword ptr [ESI + 0x2018],ECX
005bd83a  INC dword ptr [ESI + 0x2010]
005bd840  MOV EDI,dword ptr [ESI + 0x2018]
005bd846  LEA ECX,[EAX + 0x38]
005bd849  CMP ECX,EBX
005bd84b  JZ 0x005bd893
005bd84d  CMP EDI,EBX
005bd84f  JZ 0x005bd866
005bd851  MOV EDX,dword ptr [EDI + 0x4]
005bd854  CMP EDX,EBX
005bd856  MOV dword ptr [EAX + 0x3c],EDX
005bd859  JZ 0x005bd85e
005bd85b  MOV dword ptr [EDX + 0x8],ECX
005bd85e  MOV dword ptr [EAX + 0x40],EDI
005bd861  MOV dword ptr [EDI + 0x4],ECX
005bd864  JMP 0x005bd87f
005bd866  MOV EDX,dword ptr [ESI + 0x2014]
005bd86c  CMP EDX,EBX
005bd86e  MOV dword ptr [EAX + 0x3c],EDX
005bd871  JZ 0x005bd876
005bd873  MOV dword ptr [EDX + 0x8],ECX
005bd876  MOV dword ptr [EAX + 0x40],EBX
005bd879  MOV dword ptr [ESI + 0x2014],ECX
005bd87f  CMP dword ptr [ESI + 0x2018],EDI
005bd885  JNZ 0x005bd88d
005bd887  MOV dword ptr [ESI + 0x2018],ECX
005bd88d  INC dword ptr [ESI + 0x2010]
005bd893  MOV EDI,dword ptr [ESI + 0x2018]
005bd899  LEA ECX,[EAX + 0x58]
005bd89c  CMP ECX,EBX
005bd89e  JZ 0x005bd8e6
005bd8a0  CMP EDI,EBX
005bd8a2  JZ 0x005bd8b9
005bd8a4  MOV EDX,dword ptr [EDI + 0x4]
005bd8a7  CMP EDX,EBX
005bd8a9  MOV dword ptr [EAX + 0x5c],EDX
005bd8ac  JZ 0x005bd8b1
005bd8ae  MOV dword ptr [EDX + 0x8],ECX
005bd8b1  MOV dword ptr [EAX + 0x60],EDI
005bd8b4  MOV dword ptr [EDI + 0x4],ECX
005bd8b7  JMP 0x005bd8d2
005bd8b9  MOV EDX,dword ptr [ESI + 0x2014]
005bd8bf  CMP EDX,EBX
005bd8c1  MOV dword ptr [EAX + 0x5c],EDX
005bd8c4  JZ 0x005bd8c9
005bd8c6  MOV dword ptr [EDX + 0x8],ECX
005bd8c9  MOV dword ptr [EAX + 0x60],EBX
005bd8cc  MOV dword ptr [ESI + 0x2014],ECX
005bd8d2  CMP dword ptr [ESI + 0x2018],EDI
005bd8d8  JNZ 0x005bd8e0
005bd8da  MOV dword ptr [ESI + 0x2018],ECX
005bd8e0  INC dword ptr [ESI + 0x2010]
005bd8e6  ADD EAX,0x80
005bd8eb  DEC EBP
005bd8ec  JNZ 0x005bd790
005bd8f2  MOV ECX,dword ptr [ESP + 0x14]
005bd8f6  POP EDI
005bd8f7  MOV EAX,ESI
005bd8f9  POP ESI
005bd8fa  POP EBP
005bd8fb  POP EBX
005bd8fc  MOV dword ptr FS:[0x0],ECX
005bd903  ADD ESP,0x10
005bd906  RET
