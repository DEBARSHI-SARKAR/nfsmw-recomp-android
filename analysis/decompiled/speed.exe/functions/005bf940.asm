005bf940  SUB ESP,0x14
005bf943  PUSH EBX
005bf944  PUSH EDI
005bf945  PUSH 0x89e444
005bf94a  MOV EBX,ECX
005bf94c  CALL 0x005bf620
005bf951  MOV dword ptr [EAX + 0x24],0x1
005bf958  MOV ECX,dword ptr [EBX + 0xc]
005bf95b  XOR EDI,EDI
005bf95d  CMP ECX,EDI
005bf95f  JZ 0x005bf976
005bf961  MOV EDX,dword ptr [ECX + 0x4]
005bf964  CMP EDX,EDI
005bf966  MOV dword ptr [EAX + 0x4],EDX
005bf969  JZ 0x005bf96e
005bf96b  MOV dword ptr [EDX + 0x8],EAX
005bf96e  MOV dword ptr [EAX + 0x8],ECX
005bf971  MOV dword ptr [ECX + 0x4],EAX
005bf974  JMP 0x005bf989
005bf976  MOV EDX,dword ptr [EBX + 0x8]
005bf979  CMP EDX,EDI
005bf97b  MOV dword ptr [EAX + 0x4],EDX
005bf97e  JZ 0x005bf983
005bf980  MOV dword ptr [EDX + 0x8],EAX
005bf983  MOV dword ptr [EAX + 0x8],EDI
005bf986  MOV dword ptr [EBX + 0x8],EAX
005bf989  CMP dword ptr [EBX + 0xc],ECX
005bf98c  JNZ 0x005bf991
005bf98e  MOV dword ptr [EBX + 0xc],EAX
005bf991  PUSH EBP
005bf992  MOV EBP,dword ptr [EBX + 0x4]
005bf995  PUSH ESI
005bf996  INC EBP
005bf997  PUSH 0x8a2f30
005bf99c  MOV ECX,EBX
005bf99e  MOV dword ptr [EBX + 0x4],EBP
005bf9a1  CALL 0x005bf620
005bf9a6  MOV EBP,EAX
005bf9a8  MOV EAX,[0x008f579c]
005bf9ad  PUSH 0x6
005bf9af  PUSH EAX
005bf9b0  MOV ECX,EBP
005bf9b2  CALL 0x005b9110
005bf9b7  MOV ECX,dword ptr [0x008f57a0]
005bf9bd  PUSH 0x6
005bf9bf  PUSH ECX
005bf9c0  MOV ECX,EBP
005bf9c2  CALL 0x005b9110
005bf9c7  MOV EDX,dword ptr [0x008f57a4]
005bf9cd  PUSH 0x6
005bf9cf  PUSH EDX
005bf9d0  MOV ECX,EBP
005bf9d2  CALL 0x005b9110
005bf9d7  MOV EAX,[0x008f57a8]
005bf9dc  PUSH 0x6
005bf9de  PUSH EAX
005bf9df  MOV ECX,EBP
005bf9e1  CALL 0x005b9110
005bf9e6  MOV ECX,dword ptr [0x008f579c]
005bf9ec  MOV EAX,0xff
005bf9f1  PUSH ECX
005bf9f2  MOV ECX,EBP
005bf9f4  MOV dword ptr [ESP + 0x24],EAX
005bf9f8  MOV dword ptr [ESP + 0x20],EAX
005bf9fc  MOV dword ptr [ESP + 0x1c],EAX
005bfa00  MOV dword ptr [ESP + 0x18],EAX
005bfa04  CALL 0x005b2d10
005bfa09  MOV ESI,EAX
005bfa0b  MOV EDX,dword ptr [ESI + 0x20]
005bfa0e  PUSH EDX
005bfa0f  CALL 0x00652b10
005bfa14  MOV EAX,dword ptr [ESI + 0x18]
005bfa17  ADD ESP,0x4
005bfa1a  CMP EAX,EDI
005bfa1c  MOV dword ptr [ESI + 0x20],EDI
005bfa1f  JZ 0x005bfa46
005bfa21  PUSH EAX
005bfa22  CALL 0x00652ad0
005bfa27  MOV ECX,dword ptr [ESI + 0x18]
005bfa2a  MOV dword ptr [ESI + 0x20],EAX
005bfa2d  MOV EDI,EAX
005bfa2f  MOV EAX,ECX
005bfa31  SHR ECX,0x2
005bfa34  LEA ESI,[ESP + 0x18]
005bfa38  MOVSD.REP ES:EDI,ESI
005bfa3a  MOV ECX,EAX
005bfa3c  AND ECX,0x3
005bfa3f  ADD ESP,0x4
005bfa42  MOVSB.REP ES:EDI,ESI
005bfa44  XOR EDI,EDI
005bfa46  MOV ECX,dword ptr [0x008f57a0]
005bfa4c  PUSH ECX
005bfa4d  MOV ECX,EBP
005bfa4f  CALL 0x005b2d10
005bfa54  MOV ESI,EAX
005bfa56  MOV EDX,dword ptr [ESI + 0x20]
005bfa59  PUSH EDX
005bfa5a  CALL 0x00652b10
005bfa5f  MOV EAX,dword ptr [ESI + 0x18]
005bfa62  ADD ESP,0x4
005bfa65  CMP EAX,EDI
005bfa67  MOV dword ptr [ESI + 0x20],EDI
005bfa6a  JZ 0x005bfa91
005bfa6c  PUSH EAX
005bfa6d  CALL 0x00652ad0
005bfa72  MOV ECX,dword ptr [ESI + 0x18]
005bfa75  MOV dword ptr [ESI + 0x20],EAX
005bfa78  MOV EDI,EAX
005bfa7a  MOV EAX,ECX
005bfa7c  SHR ECX,0x2
005bfa7f  LEA ESI,[ESP + 0x18]
005bfa83  MOVSD.REP ES:EDI,ESI
005bfa85  MOV ECX,EAX
005bfa87  AND ECX,0x3
005bfa8a  ADD ESP,0x4
005bfa8d  MOVSB.REP ES:EDI,ESI
005bfa8f  XOR EDI,EDI
005bfa91  MOV ECX,dword ptr [0x008f57a4]
005bfa97  PUSH ECX
005bfa98  MOV ECX,EBP
005bfa9a  CALL 0x005b2d10
005bfa9f  MOV ESI,EAX
005bfaa1  MOV EDX,dword ptr [ESI + 0x20]
005bfaa4  PUSH EDX
005bfaa5  CALL 0x00652b10
005bfaaa  MOV EAX,dword ptr [ESI + 0x18]
005bfaad  ADD ESP,0x4
005bfab0  CMP EAX,EDI
005bfab2  MOV dword ptr [ESI + 0x20],EDI
005bfab5  JZ 0x005bfadc
005bfab7  PUSH EAX
005bfab8  CALL 0x00652ad0
005bfabd  MOV ECX,dword ptr [ESI + 0x18]
005bfac0  MOV dword ptr [ESI + 0x20],EAX
005bfac3  MOV EDI,EAX
005bfac5  MOV EAX,ECX
005bfac7  SHR ECX,0x2
005bfaca  LEA ESI,[ESP + 0x18]
005bface  MOVSD.REP ES:EDI,ESI
005bfad0  MOV ECX,EAX
005bfad2  AND ECX,0x3
005bfad5  ADD ESP,0x4
005bfad8  MOVSB.REP ES:EDI,ESI
005bfada  XOR EDI,EDI
005bfadc  MOV ECX,dword ptr [0x008f57a8]
005bfae2  PUSH ECX
005bfae3  MOV ECX,EBP
005bfae5  CALL 0x005b2d10
005bfaea  MOV ESI,EAX
005bfaec  MOV EDX,dword ptr [ESI + 0x20]
005bfaef  PUSH EDX
005bfaf0  CALL 0x00652b10
005bfaf5  MOV EAX,dword ptr [ESI + 0x18]
005bfaf8  ADD ESP,0x4
005bfafb  CMP EAX,EDI
005bfafd  MOV dword ptr [ESI + 0x20],EDI
005bfb00  JZ 0x005bfb27
005bfb02  PUSH EAX
005bfb03  CALL 0x00652ad0
005bfb08  MOV ECX,dword ptr [ESI + 0x18]
005bfb0b  MOV dword ptr [ESI + 0x20],EAX
005bfb0e  MOV EDI,EAX
005bfb10  MOV EAX,ECX
005bfb12  SHR ECX,0x2
005bfb15  LEA ESI,[ESP + 0x18]
005bfb19  MOVSD.REP ES:EDI,ESI
005bfb1b  MOV ECX,EAX
005bfb1d  AND ECX,0x3
005bfb20  ADD ESP,0x4
005bfb23  MOVSB.REP ES:EDI,ESI
005bfb25  XOR EDI,EDI
005bfb27  MOV dword ptr [EBP + 0x24],0x9
005bfb2e  MOV ECX,dword ptr [EBX + 0xc]
005bfb31  CMP ECX,EDI
005bfb33  JZ 0x005bfb4a
005bfb35  MOV EAX,dword ptr [ECX + 0x4]
005bfb38  CMP EAX,EDI
005bfb3a  MOV dword ptr [EBP + 0x4],EAX
005bfb3d  JZ 0x005bfb42
005bfb3f  MOV dword ptr [EAX + 0x8],EBP
005bfb42  MOV dword ptr [EBP + 0x8],ECX
005bfb45  MOV dword ptr [ECX + 0x4],EBP
005bfb48  JMP 0x005bfb5d
005bfb4a  MOV EAX,dword ptr [EBX + 0x8]
005bfb4d  CMP EAX,EDI
005bfb4f  MOV dword ptr [EBP + 0x4],EAX
005bfb52  JZ 0x005bfb57
005bfb54  MOV dword ptr [EAX + 0x8],EBP
005bfb57  MOV dword ptr [EBP + 0x8],EDI
005bfb5a  MOV dword ptr [EBX + 0x8],EBP
005bfb5d  CMP dword ptr [EBX + 0xc],ECX
005bfb60  JNZ 0x005bfb65
005bfb62  MOV dword ptr [EBX + 0xc],EBP
005bfb65  MOV ESI,dword ptr [EBX + 0x4]
005bfb68  INC ESI
005bfb69  PUSH 0x8a2f24
005bfb6e  MOV ECX,EBX
005bfb70  MOV dword ptr [EBX + 0x4],ESI
005bfb73  CALL 0x005bf620
005bfb78  MOV ECX,dword ptr [0x008f57ac]
005bfb7e  PUSH 0x1
005bfb80  MOV EBP,EAX
005bfb82  PUSH ECX
005bfb83  MOV ECX,EBP
005bfb85  CALL 0x005b9110
005bfb8a  MOV EDX,dword ptr [0x008f57ac]
005bfb90  PUSH EDX
005bfb91  MOV ECX,EBP
005bfb93  MOV dword ptr [ESP + 0x14],EDI
005bfb97  CALL 0x005b2d10
005bfb9c  MOV ESI,EAX
005bfb9e  MOV EAX,dword ptr [ESI + 0x20]
005bfba1  PUSH EAX
005bfba2  CALL 0x00652b10
005bfba7  MOV EAX,dword ptr [ESI + 0x18]
005bfbaa  ADD ESP,0x4
005bfbad  CMP EAX,EDI
005bfbaf  MOV dword ptr [ESI + 0x20],EDI
005bfbb2  JZ 0x005bfbd9
005bfbb4  PUSH EAX
005bfbb5  CALL 0x00652ad0
005bfbba  MOV ECX,dword ptr [ESI + 0x18]
005bfbbd  MOV EDX,ECX
005bfbbf  SHR ECX,0x2
005bfbc2  MOV dword ptr [ESI + 0x20],EAX
005bfbc5  LEA ESI,[ESP + 0x14]
005bfbc9  MOV EDI,EAX
005bfbcb  MOVSD.REP ES:EDI,ESI
005bfbcd  MOV ECX,EDX
005bfbcf  AND ECX,0x3
005bfbd2  ADD ESP,0x4
005bfbd5  MOVSB.REP ES:EDI,ESI
005bfbd7  XOR EDI,EDI
005bfbd9  MOV dword ptr [EBP + 0x24],0xa
005bfbe0  MOV ECX,dword ptr [EBX + 0xc]
005bfbe3  CMP ECX,EDI
005bfbe5  JZ 0x005bfbfc
005bfbe7  MOV EAX,dword ptr [ECX + 0x4]
005bfbea  CMP EAX,EDI
005bfbec  MOV dword ptr [EBP + 0x4],EAX
005bfbef  JZ 0x005bfbf4
005bfbf1  MOV dword ptr [EAX + 0x8],EBP
005bfbf4  MOV dword ptr [EBP + 0x8],ECX
005bfbf7  MOV dword ptr [ECX + 0x4],EBP
005bfbfa  JMP 0x005bfc0f
005bfbfc  MOV EAX,dword ptr [EBX + 0x8]
005bfbff  CMP EAX,EDI
005bfc01  MOV dword ptr [EBP + 0x4],EAX
005bfc04  JZ 0x005bfc09
005bfc06  MOV dword ptr [EAX + 0x8],EBP
005bfc09  MOV dword ptr [EBP + 0x8],EDI
005bfc0c  MOV dword ptr [EBX + 0x8],EBP
005bfc0f  CMP dword ptr [EBX + 0xc],ECX
005bfc12  JNZ 0x005bfc17
005bfc14  MOV dword ptr [EBX + 0xc],EBP
005bfc17  MOV ESI,dword ptr [EBX + 0x4]
005bfc1a  INC ESI
005bfc1b  PUSH 0x8a2f14
005bfc20  MOV ECX,EBX
005bfc22  MOV dword ptr [EBX + 0x4],ESI
005bfc25  CALL 0x005bf360
005bfc2a  MOV dword ptr [EAX + 0x24],0xb
005bfc31  MOV EDX,dword ptr [EBX + 0xc]
005bfc34  CMP EDX,EDI
005bfc36  JZ 0x005bfc4d
005bfc38  MOV ECX,dword ptr [EDX + 0x4]
005bfc3b  CMP ECX,EDI
005bfc3d  MOV dword ptr [EAX + 0x4],ECX
005bfc40  JZ 0x005bfc45
005bfc42  MOV dword ptr [ECX + 0x8],EAX
005bfc45  MOV dword ptr [EAX + 0x8],EDX
005bfc48  MOV dword ptr [EDX + 0x4],EAX
005bfc4b  JMP 0x005bfc60
005bfc4d  MOV ECX,dword ptr [EBX + 0x8]
005bfc50  CMP ECX,EDI
005bfc52  MOV dword ptr [EAX + 0x4],ECX
005bfc55  JZ 0x005bfc5a
005bfc57  MOV dword ptr [ECX + 0x8],EAX
005bfc5a  MOV dword ptr [EAX + 0x8],EDI
005bfc5d  MOV dword ptr [EBX + 0x8],EAX
005bfc60  CMP dword ptr [EBX + 0xc],EDX
005bfc63  JNZ 0x005bfc68
005bfc65  MOV dword ptr [EBX + 0xc],EAX
005bfc68  MOV ESI,dword ptr [EBX + 0x4]
005bfc6b  INC ESI
005bfc6c  PUSH 0x8a2f08
005bfc71  MOV ECX,EBX
005bfc73  MOV dword ptr [EBX + 0x4],ESI
005bfc76  CALL 0x005bf710
005bfc7b  MOV dword ptr [EAX + 0x24],0xc
005bfc82  MOV EDX,dword ptr [EBX + 0xc]
005bfc85  CMP EDX,EDI
005bfc87  JZ 0x005bfc9e
005bfc89  MOV ECX,dword ptr [EDX + 0x4]
005bfc8c  CMP ECX,EDI
005bfc8e  MOV dword ptr [EAX + 0x4],ECX
005bfc91  JZ 0x005bfc96
005bfc93  MOV dword ptr [ECX + 0x8],EAX
005bfc96  MOV dword ptr [EAX + 0x8],EDX
005bfc99  MOV dword ptr [EDX + 0x4],EAX
005bfc9c  JMP 0x005bfcb1
005bfc9e  MOV ECX,dword ptr [EBX + 0x8]
005bfca1  CMP ECX,EDI
005bfca3  MOV dword ptr [EAX + 0x4],ECX
005bfca6  JZ 0x005bfcab
005bfca8  MOV dword ptr [ECX + 0x8],EAX
005bfcab  MOV dword ptr [EAX + 0x8],EDI
005bfcae  MOV dword ptr [EBX + 0x8],EAX
005bfcb1  CMP dword ptr [EBX + 0xc],EDX
005bfcb4  JNZ 0x005bfcb9
005bfcb6  MOV dword ptr [EBX + 0xc],EAX
005bfcb9  MOV ESI,dword ptr [EBX + 0x4]
005bfcbc  INC ESI
005bfcbd  PUSH 0x8a2f00
005bfcc2  MOV ECX,EBX
005bfcc4  MOV dword ptr [EBX + 0x4],ESI
005bfcc7  CALL 0x005bf360
005bfccc  MOV dword ptr [EAX + 0x24],0x2
005bfcd3  MOV EDX,dword ptr [EBX + 0xc]
005bfcd6  CMP EDX,EDI
005bfcd8  JZ 0x005bfcef
005bfcda  MOV ECX,dword ptr [EDX + 0x4]
005bfcdd  CMP ECX,EDI
005bfcdf  MOV dword ptr [EAX + 0x4],ECX
005bfce2  JZ 0x005bfce7
005bfce4  MOV dword ptr [ECX + 0x8],EAX
005bfce7  MOV dword ptr [EAX + 0x8],EDX
005bfcea  MOV dword ptr [EDX + 0x4],EAX
005bfced  JMP 0x005bfd02
005bfcef  MOV ECX,dword ptr [EBX + 0x8]
005bfcf2  CMP ECX,EDI
005bfcf4  MOV dword ptr [EAX + 0x4],ECX
005bfcf7  JZ 0x005bfcfc
005bfcf9  MOV dword ptr [ECX + 0x8],EAX
005bfcfc  MOV dword ptr [EAX + 0x8],EDI
005bfcff  MOV dword ptr [EBX + 0x8],EAX
005bfd02  CMP dword ptr [EBX + 0xc],EDX
005bfd05  JNZ 0x005bfd0a
005bfd07  MOV dword ptr [EBX + 0xc],EAX
005bfd0a  MOV EBP,dword ptr [EBX + 0x4]
005bfd0d  INC EBP
005bfd0e  PUSH 0x8a2ef8
005bfd13  MOV ECX,EBX
005bfd15  MOV dword ptr [EBX + 0x4],EBP
005bfd18  CALL 0x005bf360
005bfd1d  MOV dword ptr [EAX + 0x24],0x3
005bfd24  MOV ECX,dword ptr [EBX + 0xc]
005bfd27  CMP ECX,EDI
005bfd29  JZ 0x005bfd40
005bfd2b  MOV EDX,dword ptr [ECX + 0x4]
005bfd2e  CMP EDX,EDI
005bfd30  MOV dword ptr [EAX + 0x4],EDX
005bfd33  JZ 0x005bfd38
005bfd35  MOV dword ptr [EDX + 0x8],EAX
005bfd38  MOV dword ptr [EAX + 0x8],ECX
005bfd3b  MOV dword ptr [ECX + 0x4],EAX
005bfd3e  JMP 0x005bfd53
005bfd40  MOV EDX,dword ptr [EBX + 0x8]
005bfd43  CMP EDX,EDI
005bfd45  MOV dword ptr [EAX + 0x4],EDX
005bfd48  JZ 0x005bfd4d
005bfd4a  MOV dword ptr [EDX + 0x8],EAX
005bfd4d  MOV dword ptr [EAX + 0x8],EDI
005bfd50  MOV dword ptr [EBX + 0x8],EAX
005bfd53  CMP dword ptr [EBX + 0xc],ECX
005bfd56  JNZ 0x005bfd5b
005bfd58  MOV dword ptr [EBX + 0xc],EAX
005bfd5b  MOV ESI,dword ptr [EBX + 0x4]
005bfd5e  INC ESI
005bfd5f  PUSH 0x8a2ef0
005bfd64  MOV ECX,EBX
005bfd66  MOV dword ptr [EBX + 0x4],ESI
005bfd69  CALL 0x005bf360
005bfd6e  MOV dword ptr [EAX + 0x24],0x7
005bfd75  MOV EDX,dword ptr [EBX + 0xc]
005bfd78  CMP EDX,EDI
005bfd7a  JZ 0x005bfd91
005bfd7c  MOV ECX,dword ptr [EDX + 0x4]
005bfd7f  CMP ECX,EDI
005bfd81  MOV dword ptr [EAX + 0x4],ECX
005bfd84  JZ 0x005bfd89
005bfd86  MOV dword ptr [ECX + 0x8],EAX
005bfd89  MOV dword ptr [EAX + 0x8],EDX
005bfd8c  MOV dword ptr [EDX + 0x4],EAX
005bfd8f  JMP 0x005bfda4
005bfd91  MOV ECX,dword ptr [EBX + 0x8]
005bfd94  CMP ECX,EDI
005bfd96  MOV dword ptr [EAX + 0x4],ECX
005bfd99  JZ 0x005bfd9e
005bfd9b  MOV dword ptr [ECX + 0x8],EAX
005bfd9e  MOV dword ptr [EAX + 0x8],EDI
005bfda1  MOV dword ptr [EBX + 0x8],EAX
005bfda4  CMP dword ptr [EBX + 0xc],EDX
005bfda7  JNZ 0x005bfdac
005bfda9  MOV dword ptr [EBX + 0xc],EAX
005bfdac  MOV ESI,dword ptr [EBX + 0x4]
005bfdaf  INC ESI
005bfdb0  PUSH 0x8a2ee8
005bfdb5  MOV ECX,EBX
005bfdb7  MOV dword ptr [EBX + 0x4],ESI
005bfdba  CALL 0x005bf360
005bfdbf  MOV dword ptr [EAX + 0x24],0x8
005bfdc6  MOV EDX,dword ptr [EBX + 0xc]
005bfdc9  CMP EDX,EDI
005bfdcb  JZ 0x005bfde2
005bfdcd  MOV ECX,dword ptr [EDX + 0x4]
005bfdd0  CMP ECX,EDI
005bfdd2  MOV dword ptr [EAX + 0x4],ECX
005bfdd5  JZ 0x005bfdda
005bfdd7  MOV dword ptr [ECX + 0x8],EAX
005bfdda  MOV dword ptr [EAX + 0x8],EDX
005bfddd  MOV dword ptr [EDX + 0x4],EAX
005bfde0  JMP 0x005bfdf5
005bfde2  MOV ECX,dword ptr [EBX + 0x8]
005bfde5  CMP ECX,EDI
005bfde7  MOV dword ptr [EAX + 0x4],ECX
005bfdea  JZ 0x005bfdef
005bfdec  MOV dword ptr [ECX + 0x8],EAX
005bfdef  MOV dword ptr [EAX + 0x8],EDI
005bfdf2  MOV dword ptr [EBX + 0x8],EAX
005bfdf5  CMP dword ptr [EBX + 0xc],EDX
005bfdf8  JNZ 0x005bfdfd
005bfdfa  MOV dword ptr [EBX + 0xc],EAX
005bfdfd  MOV ESI,dword ptr [EBX + 0x4]
005bfe00  INC ESI
005bfe01  PUSH 0x8a2ee0
005bfe06  MOV ECX,EBX
005bfe08  MOV dword ptr [EBX + 0x4],ESI
005bfe0b  CALL 0x005bf360
005bfe10  MOV dword ptr [EAX + 0x24],0x4
005bfe17  MOV EDX,dword ptr [EBX + 0xc]
005bfe1a  CMP EDX,EDI
005bfe1c  JZ 0x005bfe33
005bfe1e  MOV ECX,dword ptr [EDX + 0x4]
005bfe21  CMP ECX,EDI
005bfe23  MOV dword ptr [EAX + 0x4],ECX
005bfe26  JZ 0x005bfe2b
005bfe28  MOV dword ptr [ECX + 0x8],EAX
005bfe2b  MOV dword ptr [EAX + 0x8],EDX
005bfe2e  MOV dword ptr [EDX + 0x4],EAX
005bfe31  JMP 0x005bfe46
005bfe33  MOV ECX,dword ptr [EBX + 0x8]
005bfe36  CMP ECX,EDI
005bfe38  MOV dword ptr [EAX + 0x4],ECX
005bfe3b  JZ 0x005bfe40
005bfe3d  MOV dword ptr [ECX + 0x8],EAX
005bfe40  MOV dword ptr [EAX + 0x8],EDI
005bfe43  MOV dword ptr [EBX + 0x8],EAX
005bfe46  CMP dword ptr [EBX + 0xc],EDX
005bfe49  JNZ 0x005bfe4e
005bfe4b  MOV dword ptr [EBX + 0xc],EAX
005bfe4e  MOV ESI,dword ptr [EBX + 0x4]
005bfe51  INC ESI
005bfe52  PUSH 0x8a2ed8
005bfe57  MOV ECX,EBX
005bfe59  MOV dword ptr [EBX + 0x4],ESI
005bfe5c  CALL 0x005bf360
005bfe61  MOV dword ptr [EAX + 0x24],0x5
005bfe68  MOV EDX,dword ptr [EBX + 0xc]
005bfe6b  CMP EDX,EDI
005bfe6d  JZ 0x005bfe84
005bfe6f  MOV ECX,dword ptr [EDX + 0x4]
005bfe72  CMP ECX,EDI
005bfe74  MOV dword ptr [EAX + 0x4],ECX
005bfe77  JZ 0x005bfe7c
005bfe79  MOV dword ptr [ECX + 0x8],EAX
005bfe7c  MOV dword ptr [EAX + 0x8],EDX
005bfe7f  MOV dword ptr [EDX + 0x4],EAX
005bfe82  JMP 0x005bfe97
005bfe84  MOV ECX,dword ptr [EBX + 0x8]
005bfe87  CMP ECX,EDI
005bfe89  MOV dword ptr [EAX + 0x4],ECX
005bfe8c  JZ 0x005bfe91
005bfe8e  MOV dword ptr [ECX + 0x8],EAX
005bfe91  MOV dword ptr [EAX + 0x8],EDI
005bfe94  MOV dword ptr [EBX + 0x8],EAX
005bfe97  CMP dword ptr [EBX + 0xc],EDX
005bfe9a  JNZ 0x005bfe9f
005bfe9c  MOV dword ptr [EBX + 0xc],EAX
005bfe9f  MOV EBP,dword ptr [EBX + 0x4]
005bfea2  INC EBP
005bfea3  PUSH 0x8a2ecc
005bfea8  MOV ECX,EBX
005bfeaa  MOV dword ptr [EBX + 0x4],EBP
005bfead  CALL 0x005bf360
005bfeb2  MOV dword ptr [EAX + 0x24],0x6
005bfeb9  MOV ECX,dword ptr [EBX + 0xc]
005bfebc  CMP ECX,EDI
005bfebe  POP ESI
005bfebf  POP EBP
005bfec0  JZ 0x005bfed7
005bfec2  MOV EDX,dword ptr [ECX + 0x4]
005bfec5  CMP EDX,EDI
005bfec7  MOV dword ptr [EAX + 0x4],EDX
005bfeca  JZ 0x005bfecf
005bfecc  MOV dword ptr [EDX + 0x8],EAX
005bfecf  MOV dword ptr [EAX + 0x8],ECX
005bfed2  MOV dword ptr [ECX + 0x4],EAX
005bfed5  JMP 0x005bfeea
005bfed7  MOV EDX,dword ptr [EBX + 0x8]
005bfeda  CMP EDX,EDI
005bfedc  MOV dword ptr [EAX + 0x4],EDX
005bfedf  JZ 0x005bfee4
005bfee1  MOV dword ptr [EDX + 0x8],EAX
005bfee4  MOV dword ptr [EAX + 0x8],EDI
005bfee7  MOV dword ptr [EBX + 0x8],EAX
005bfeea  CMP dword ptr [EBX + 0xc],ECX
005bfeed  JNZ 0x005bfef2
005bfeef  MOV dword ptr [EBX + 0xc],EAX
005bfef2  INC dword ptr [EBX + 0x4]
005bfef5  POP EDI
005bfef6  MOV AL,0x1
005bfef8  POP EBX
005bfef9  ADD ESP,0x14
005bfefc  RET
