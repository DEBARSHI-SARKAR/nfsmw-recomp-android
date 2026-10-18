004edd90  SUB ESP,0xc
004edd93  PUSH ESI
004edd94  MOV ESI,ECX
004edd96  MOV ECX,dword ptr [ESI + 0x38]
004edd99  MOV EAX,dword ptr [ESI + 0x18]
004edd9c  MOV EDX,dword ptr [ECX]
004edd9e  PUSH EDI
004edd9f  MOV EDI,dword ptr [EAX + 0xd8]
004edda5  CALL dword ptr [EDX + 0x44]
004edda8  FSUB float ptr [0x00894200]
004eddae  MOV EAX,dword ptr [ESI + 0x28]
004eddb1  TEST EAX,EAX
004eddb3  FMUL float ptr [0x008970c8]
004eddb9  FLD float ptr [EDI + 0x9c]
004eddbf  FSUB float ptr [EDI + 0x98]
004eddc5  FMULP
004eddc7  FADD float ptr [EDI + 0x98]
004eddcd  FSTP float ptr [ESP + 0x10]
004eddd1  JZ 0x004edfc0
004eddd7  MOV EAX,dword ptr [ESI + 0x40]
004eddda  MOV EDI,dword ptr [ESI + 0x10]
004edddd  ADD EAX,0x3e80
004edde2  TEST EDI,EDI
004edde4  MOV dword ptr [ESP + 0xc],EAX
004edde8  JZ 0x004ede01
004eddea  MOV EAX,dword ptr [EDI + 0x8]
004edded  AND EAX,0xffff
004eddf2  PUSH EAX
004eddf3  CALL 0x004ea620
004eddf8  ADD ESP,0x4
004eddfb  MOV dword ptr [ESP + 0x8],EAX
004eddff  JMP 0x004ede09
004ede01  MOV dword ptr [ESP + 0x8],0x0
004ede09  FILD dword ptr [ESP + 0x8]
004ede0d  PUSH EBX
004ede0e  FMUL float ptr [0x00897670]
004ede14  FST float ptr [ESI + 0x3c]
004ede17  FILD dword ptr [ESP + 0x10]
004ede1b  FMUL ST1
004ede1d  FSUB float ptr [0x00899150]
004ede23  CALL 0x007c4b80
004ede28  FSTP ST0
004ede2a  TEST EDI,EDI
004ede2c  MOV EBX,EAX
004ede2e  JZ 0x004ede3d
004ede30  MOV ECX,dword ptr [EDI]
004ede32  SAR ECX,0x10
004ede35  AND ECX,0x7fff
004ede3b  JMP 0x004ede3f
004ede3d  XOR ECX,ECX
004ede3f  MOV EDX,dword ptr [ESI + 0xc]
004ede42  MOV dword ptr [EDX + 0x4],ECX
004ede45  MOV EAX,dword ptr [ESI + 0x38]
004ede48  MOV EAX,dword ptr [EAX + 0xd0]
004ede4e  IMUL EAX,ECX
004ede51  MOV EDX,dword ptr [ESI + 0x28]
004ede54  SAR EAX,0xf
004ede57  IMUL EAX,EAX,0x7fff
004ede5d  SAR EAX,0xf
004ede60  LEA ECX,[EAX + 0xffff8001]
004ede66  MOV EAX,ECX
004ede68  CMP EAX,0xffff8001
004ede6d  JGE 0x004ede76
004ede6f  MOV EAX,0xffff8001
004ede74  JMP 0x004ede7c
004ede76  TEST EAX,EAX
004ede78  JLE 0x004ede7c
004ede7a  XOR EAX,EAX
004ede7c  MOV dword ptr [EDX + 0x14],EAX
004ede7f  MOV EAX,ECX
004ede81  CMP EAX,0xffff8001
004ede86  MOV ECX,dword ptr [ESI + 0x28]
004ede89  JGE 0x004ede92
004ede8b  MOV EAX,0xffff8001
004ede90  JMP 0x004ede98
004ede92  TEST EAX,EAX
004ede94  JLE 0x004ede98
004ede96  XOR EAX,EAX
004ede98  FLD float ptr [ESP + 0x14]
004ede9c  MOV dword ptr [ECX + 0x18],EAX
004ede9f  CALL 0x007c4b80
004edea4  TEST EAX,EAX
004edea6  MOV ECX,dword ptr [ESI + 0x28]
004edea9  JGE 0x004edeaf
004edeab  XOR EAX,EAX
004edead  JMP 0x004edebb
004edeaf  CMP EAX,0x2710
004edeb4  JLE 0x004edebb
004edeb6  MOV EAX,0x2710
004edebb  CMP EBX,0xffffc001
004edec1  MOV dword ptr [ECX + 0x8],EAX
004edec4  MOV ECX,dword ptr [ESI + 0x28]
004edec7  MOV EAX,EBX
004edec9  JGE 0x004eded2
004edecb  MOV EAX,0xffffc001
004eded0  JMP 0x004ededf
004eded2  CMP EBX,0x3fff
004eded8  JLE 0x004ededf
004ededa  MOV EAX,0x3fff
004ededf  MOV dword ptr [ECX + 0x44],EAX
004edee2  MOV ECX,dword ptr [ESI + 0x38]
004edee5  MOV EDX,dword ptr [ECX]
004edee7  CALL dword ptr [EDX + 0x4c]
004edeea  FMUL float ptr [0x0089913c]
004edef0  CALL 0x007c4b80
004edef5  TEST EAX,EAX
004edef7  MOV ECX,dword ptr [ESI + 0x28]
004edefa  POP EBX
004edefb  JGE 0x004edf01
004edefd  XOR EAX,EAX
004edeff  JMP 0x004edf0d
004edf01  CMP EAX,0x400
004edf06  JLE 0x004edf0d
004edf08  MOV EAX,0x400
004edf0d  MOV dword ptr [ECX + 0x10],EAX
004edf10  MOV EAX,dword ptr [ESI + 0x38]
004edf13  MOV EAX,dword ptr [EAX + 0x12c]
004edf19  TEST EAX,EAX
004edf1b  MOV ECX,dword ptr [ESI + 0x28]
004edf1e  JGE 0x004edf24
004edf20  XOR EAX,EAX
004edf22  JMP 0x004edf30
004edf24  CMP EAX,0x400
004edf29  JLE 0x004edf30
004edf2b  MOV EAX,0x400
004edf30  MOV dword ptr [ECX + 0x48],EAX
004edf33  MOV EAX,dword ptr [ESI + 0x10]
004edf36  TEST EAX,EAX
004edf38  JZ 0x004edf53
004edf3a  MOV ECX,dword ptr [0x00911fa8]
004edf40  MOV EDX,dword ptr [ECX + 0x24]
004edf43  MOV ECX,dword ptr [EDX + 0x24]
004edf46  TEST ECX,ECX
004edf48  MOV EAX,dword ptr [EAX]
004edf4a  JZ 0x004edf53
004edf4c  AND EAX,0xffff
004edf51  JMP 0x004edf55
004edf53  XOR EAX,EAX
004edf55  TEST EAX,EAX
004edf57  MOV ECX,dword ptr [ESI + 0x28]
004edf5a  JGE 0x004edf60
004edf5c  XOR EAX,EAX
004edf5e  JMP 0x004edf6c
004edf60  CMP EAX,0x10000
004edf65  JLE 0x004edf6c
004edf67  MOV EAX,0x10000
004edf6c  MOV dword ptr [ECX + 0x40],EAX
004edf6f  MOV EAX,dword ptr [ESI + 0x10]
004edf72  TEST EAX,EAX
004edf74  JZ 0x004edf83
004edf76  MOV EAX,dword ptr [EAX + 0x8]
004edf79  SAR EAX,0x10
004edf7c  AND EAX,0x7fff
004edf81  JMP 0x004edf85
004edf83  XOR EAX,EAX
004edf85  MOV ECX,dword ptr [ESI + 0x38]
004edf88  MOV ECX,dword ptr [ECX + 0x134]
004edf8e  CMP ECX,EAX
004edf90  JGE 0x004edf94
004edf92  MOV EAX,ECX
004edf94  TEST EAX,EAX
004edf96  MOV ECX,dword ptr [ESI + 0x28]
004edf99  JGE 0x004edf9f
004edf9b  XOR EAX,EAX
004edf9d  JMP 0x004edfab
004edf9f  CMP EAX,0x61a8
004edfa4  JLE 0x004edfab
004edfa6  MOV EAX,0x61a8
004edfab  MOV dword ptr [ECX + 0x58],EAX
004edfae  MOV ESI,dword ptr [ESI + 0x28]
004edfb1  MOV ECX,dword ptr [ESI]
004edfb3  TEST ECX,ECX
004edfb5  JZ 0x004edfc0
004edfb7  ADD ESI,0x4
004edfba  PUSH ESI
004edfbb  CALL 0x0083179c
004edfc0  POP EDI
004edfc1  POP ESI
004edfc2  ADD ESP,0xc
004edfc5  RET
