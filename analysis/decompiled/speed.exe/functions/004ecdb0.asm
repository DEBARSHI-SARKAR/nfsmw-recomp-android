004ecdb0  PUSH -0x1
004ecdb2  PUSH 0x86d22b
004ecdb7  MOV EAX,FS:[0x0]
004ecdbd  PUSH EAX
004ecdbe  MOV dword ptr FS:[0x0],ESP
004ecdc5  SUB ESP,0x8
004ecdc8  MOV EAX,[0x008f86f8]
004ecdcd  TEST EAX,EAX
004ecdcf  PUSH EBX
004ecdd0  MOV EBX,ECX
004ecdd2  MOV dword ptr [ESP + 0x4],EBX
004ecdd6  JZ 0x004ecf25
004ecddc  MOV EAX,dword ptr [EBX + 0x2c]
004ecddf  TEST EAX,EAX
004ecde1  JNZ 0x004ecf25
004ecde7  MOV EAX,dword ptr [EBX + 0x10]
004ecdea  TEST EAX,EAX
004ecdec  PUSH EBP
004ecded  PUSH ESI
004ecdee  PUSH EDI
004ecdef  JZ 0x004ecdfd
004ecdf1  MOV EAX,dword ptr [EAX + 0x14]
004ecdf4  AND EAX,0x7fff
004ecdf9  MOV EDI,EAX
004ecdfb  JMP 0x004ecdff
004ecdfd  XOR EDI,EDI
004ecdff  MOV EAX,dword ptr [EBX + 0x18]
004ece02  MOV EAX,dword ptr [EAX + 0xc4]
004ece08  XOR ECX,ECX
004ece0a  TEST EAX,EAX
004ece0c  SETZ CL
004ece0f  PUSH 0x89912c
004ece14  MOV EBP,ECX
004ece16  MOV ECX,dword ptr [0x00911fa8]
004ece1c  CALL 0x004ae980
004ece21  PUSH 0x1c
004ece23  CALL 0x00831667
004ece28  MOV ESI,EAX
004ece2a  ADD ESP,0x4
004ece2d  MOV dword ptr [ESP + 0x14],ESI
004ece31  TEST ESI,ESI
004ece33  MOV dword ptr [ESP + 0x20],0x0
004ece3b  JZ 0x004ecef9
004ece41  MOV EAX,dword ptr [EBX + 0x10]
004ece44  TEST EAX,EAX
004ece46  JZ 0x004ece61
004ece48  MOV EDX,dword ptr [0x00911fa8]
004ece4e  MOV ECX,dword ptr [EDX + 0x24]
004ece51  MOV EDX,dword ptr [ECX + 0x24]
004ece54  TEST EDX,EDX
004ece56  MOV EAX,dword ptr [EAX]
004ece58  JZ 0x004ece61
004ece5a  AND EAX,0xffff
004ece5f  JMP 0x004ece63
004ece61  XOR EAX,EAX
004ece63  TEST EDI,EDI
004ece65  LEA EBX,[ESI + 0x4]
004ece68  MOV dword ptr [EBX],0x2
004ece6e  MOV ECX,EDI
004ece70  JGE 0x004ece76
004ece72  XOR ECX,ECX
004ece74  JMP 0x004ece83
004ece76  CMP EDI,0x7fff
004ece7c  JLE 0x004ece83
004ece7e  MOV ECX,0x7fff
004ece83  TEST EAX,EAX
004ece85  MOV dword ptr [ESI + 0x8],ECX
004ece88  MOV dword ptr [ESI + 0xc],0x1000
004ece8f  JGE 0x004ece95
004ece91  XOR EAX,EAX
004ece93  JMP 0x004ecea1
004ece95  CMP EAX,0xffff
004ece9a  JLE 0x004ecea1
004ece9c  MOV EAX,0xffff
004ecea1  TEST EBP,EBP
004ecea3  MOV dword ptr [ESI + 0x10],EAX
004ecea6  MOV dword ptr [ESI + 0x14],0x0
004ecead  MOV EAX,EBP
004eceaf  JGE 0x004eceb5
004eceb1  XOR EAX,EAX
004eceb3  JMP 0x004ecebf
004eceb5  CMP EBP,0x1
004eceb8  JLE 0x004ecebf
004eceba  MOV EAX,0x1
004ecebf  PUSH ESI
004ecec0  PUSH EBX
004ecec1  PUSH 0x914874
004ecec6  MOV dword ptr [ESI + 0x18],EAX
004ecec9  CALL 0x00831a8a
004ecece  ADD ESP,0xc
004eced1  TEST EAX,EAX
004eced3  JGE 0x004ecef3
004eced5  PUSH 0x8f02e8
004eceda  MOV ECX,0x914874
004ecedf  CALL 0x0083198b
004ecee4  PUSH ESI
004ecee5  PUSH EBX
004ecee6  PUSH 0x914874
004eceeb  CALL 0x00831a8a
004ecef0  ADD ESP,0xc
004ecef3  MOV EBX,dword ptr [ESP + 0x10]
004ecef7  JMP 0x004ecefb
004ecef9  XOR ESI,ESI
004ecefb  TEST ESI,ESI
004ecefd  MOV dword ptr [ESP + 0x20],0xffffffff
004ecf05  MOV dword ptr [EBX + 0x2c],ESI
004ecf08  JZ 0x004ecf22
004ecf0a  MOV ECX,dword ptr [ESI]
004ecf0c  TEST ECX,ECX
004ecf0e  MOV dword ptr [ESP + 0x10],0x0
004ecf16  JZ 0x004ecf22
004ecf18  LEA EAX,[ESP + 0x10]
004ecf1c  PUSH EAX
004ecf1d  CALL 0x008311aa
004ecf22  POP EDI
004ecf23  POP ESI
004ecf24  POP EBP
004ecf25  MOV ECX,dword ptr [ESP + 0xc]
004ecf29  POP EBX
004ecf2a  MOV dword ptr FS:[0x0],ECX
004ecf31  ADD ESP,0x14
004ecf34  RET
