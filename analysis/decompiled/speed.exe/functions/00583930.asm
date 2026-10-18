00583930  PUSH EBP
00583931  MOV EBP,ESP
00583933  AND ESP,0xfffffff0
00583936  SUB ESP,0xd4
0058393c  MOV EDX,dword ptr [EBP + 0x20]
0058393f  MOV ECX,dword ptr [EBP + 0x8]
00583942  PUSH EBX
00583943  MOV EBX,dword ptr [EBP + 0x18]
00583946  DEC EDX
00583947  PUSH ESI
00583948  MOV ESI,dword ptr [EBP + 0x1c]
0058394b  PUSH EDI
0058394c  MOV EDI,dword ptr [EBP + 0x14]
0058394f  MOV dword ptr [ESP + 0x34],EDX
00583953  SHL EDX,0x4
00583956  FLD float ptr [EDI + EDX*0x1 + 0x4]
0058395a  FCOMP float ptr [EBP + 0x24]
0058395d  FNSTSW AX
0058395f  TEST AH,0x1
00583962  MOV EAX,dword ptr [EBP + 0x10]
00583965  JNZ 0x005839c5
00583967  FLD float ptr [EDI + EDX*0x1 + 0x4]
0058396b  MOV EAX,dword ptr [EDI + EDX*0x1]
0058396e  FLD float ptr [EDI + EDX*0x1 + 0x8]
00583972  MOV dword ptr [ECX],EAX
00583974  MOV EAX,dword ptr [ESP + 0x34]
00583978  FXCH
0058397a  FSTP float ptr [ECX + 0x4]
0058397d  MOV dword ptr [ESP + 0x1c],0x1
00583985  MOV byte ptr [ESP + 0x1b],0x1
0058398a  FSTP float ptr [ECX + 0x8]
0058398d  MOV ECX,dword ptr [EBX + EAX*0x8]
00583990  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583994  MOV EAX,dword ptr [EBP + 0xc]
00583997  FSTP float ptr [EAX + 0x4]
0058399a  MOV dword ptr [EAX],ECX
0058399c  FLD float ptr [ESI + EDX*0x1 + 0x4]
005839a0  MOV ECX,dword ptr [ESI + EDX*0x1]
005839a3  FLD float ptr [ESI + EDX*0x1 + 0x8]
005839a7  MOV EAX,dword ptr [EBP + 0x10]
005839aa  FLD float ptr [ESI + EDX*0x1 + 0xc]
005839ae  MOV dword ptr [EAX],ECX
005839b0  FSTP float ptr [ESP + 0x24]
005839b4  MOV ECX,dword ptr [ESP + 0x24]
005839b8  FXCH
005839ba  FSTP float ptr [EAX + 0x4]
005839bd  MOV dword ptr [EAX + 0xc],ECX
005839c0  FSTP float ptr [EAX + 0x8]
005839c3  JMP 0x005839d2
005839c5  MOV dword ptr [ESP + 0x1c],0x0
005839cd  MOV byte ptr [ESP + 0x1b],0x0
005839d2  MOV ECX,dword ptr [EBP + 0x20]
005839d5  TEST ECX,ECX
005839d7  MOV dword ptr [ESP + 0x2c],0x0
005839df  JBE 0x00583e0d
005839e5  MOV ECX,dword ptr [ESP + 0x34]
005839e9  SHL ECX,0x3
005839ec  MOV dword ptr [ESP + 0x28],ECX
005839f0  MOV ECX,dword ptr [ESP + 0x1c]
005839f4  SHL ECX,0x4
005839f7  ADD EAX,ECX
005839f9  MOV dword ptr [ESP + 0x24],EAX
005839fd  MOV EAX,dword ptr [EBP + 0x8]
00583a00  ADD ECX,EAX
00583a02  LEA EAX,[ESI + 0xc]
00583a05  MOV dword ptr [ESP + 0x30],EAX
00583a09  LEA EAX,[EDI + 0x4]
00583a0c  MOV dword ptr [ESP + 0x20],EAX
00583a10  MOV EAX,ESI
00583a12  SUB EAX,EDI
00583a14  MOV dword ptr [ESP + 0x34],EAX
00583a18  MOV EAX,0xfffffffc
00583a1d  SUB EAX,EDI
00583a1f  MOV dword ptr [ESP + 0x48],EAX
00583a23  JMP 0x00583a30
00583a25  MOV EBX,dword ptr [EBP + 0x18]
00583a28  JMP 0x00583a30
00583a30  MOV EAX,dword ptr [ESP + 0x20]
00583a34  FLD float ptr [EAX]
00583a36  FCOMP float ptr [EBP + 0x24]
00583a39  FNSTSW AX
00583a3b  MOV AL,byte ptr [ESP + 0x1b]
00583a3f  TEST AH,0x1
00583a42  JNZ 0x00583c47
00583a48  TEST AL,AL
00583a4a  MOV EAX,dword ptr [ESP + 0x20]
00583a4e  JNZ 0x00583bd8
00583a54  FLD float ptr [EAX + -0x4]
00583a57  FSUB float ptr [EDX + EDI*0x1]
00583a5a  FLD float ptr [EAX]
00583a5c  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583a60  FLD float ptr [EAX + 0x4]
00583a63  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00583a67  FSTP float ptr [ESP + 0xc8]
00583a6e  MOV EAX,dword ptr [ESP + 0xc8]
00583a75  MOV dword ptr [ECX + 0x8],EAX
00583a78  FXCH
00583a7a  FSTP float ptr [ECX]
00583a7c  MOV EAX,dword ptr [ESP + 0x2c]
00583a80  FSTP float ptr [ECX + 0x4]
00583a83  FLD float ptr [EBP + 0x24]
00583a86  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583a8a  FDIV float ptr [ECX + 0x4]
00583a8d  FLD ST0
00583a8f  FMUL float ptr [ECX]
00583a91  FSTP float ptr [ECX]
00583a93  FLD ST0
00583a95  FMUL float ptr [ECX + 0x4]
00583a98  FSTP float ptr [ECX + 0x4]
00583a9b  FLD ST0
00583a9d  FMUL float ptr [ECX + 0x8]
00583aa0  FSTP float ptr [ECX + 0x8]
00583aa3  FLD float ptr [EDX + EDI*0x1 + 0x4]
00583aa7  FLD float ptr [EDX + EDI*0x1 + 0x8]
00583aab  FLD float ptr [ECX]
00583aad  FADD float ptr [EDX + EDI*0x1]
00583ab0  FSTP float ptr [ECX]
00583ab2  FXCH
00583ab4  FADD float ptr [ECX + 0x4]
00583ab7  FSTP float ptr [ECX + 0x4]
00583aba  FADD float ptr [ECX + 0x8]
00583abd  FSTP float ptr [ECX + 0x8]
00583ac0  FLD float ptr [EBX + EAX*0x8]
00583ac3  MOV EAX,dword ptr [ESP + 0x28]
00583ac7  FSUB float ptr [EAX + EBX*0x1]
00583aca  MOV EAX,dword ptr [ESP + 0x2c]
00583ace  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583ad2  MOV EAX,dword ptr [ESP + 0x28]
00583ad6  FSUB float ptr [EAX + EBX*0x1 + 0x4]
00583ada  FXCH
00583adc  FMUL ST2
00583ade  FSTP float ptr [ESP + 0x38]
00583ae2  MOV EAX,dword ptr [ESP + 0x38]
00583ae6  MOV dword ptr [ESP + 0x40],EAX
00583aea  FMUL ST1
00583aec  FSTP float ptr [ESP + 0x3c]
00583af0  MOV EAX,dword ptr [ESP + 0x3c]
00583af4  FLD float ptr [ESP + 0x40]
00583af8  MOV dword ptr [ESP + 0x44],EAX
00583afc  MOV EAX,dword ptr [ESP + 0x28]
00583b00  FADD float ptr [EAX + EBX*0x1]
00583b03  FLD float ptr [ESP + 0x44]
00583b07  FADD float ptr [EAX + EBX*0x1 + 0x4]
00583b0b  MOV EBX,dword ptr [EBP + 0xc]
00583b0e  MOV EAX,dword ptr [ESP + 0x1c]
00583b12  FXCH
00583b14  FSTP float ptr [EBX + EAX*0x8]
00583b17  FSTP float ptr [EBX + EAX*0x8 + 0x4]
00583b1b  MOV EAX,dword ptr [ESP + 0x30]
00583b1f  FLD float ptr [EAX + -0xc]
00583b22  MOV EBX,dword ptr [ESP + 0x34]
00583b26  FSUB float ptr [EDX + ESI*0x1]
00583b29  MOV EAX,dword ptr [ESP + 0x20]
00583b2d  FLD float ptr [EBX + EAX*0x1]
00583b30  MOV EBX,dword ptr [ESP + 0x30]
00583b34  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00583b38  FLD float ptr [EBX + -0x4]
00583b3b  FSUB float ptr [EDX + ESI*0x1 + 0x8]
00583b3f  FSTP float ptr [ESP + 0xb8]
00583b46  FLD float ptr [EBX]
00583b48  FSUB float ptr [EDX + ESI*0x1 + 0xc]
00583b4c  FSTP float ptr [ESP + 0xbc]
00583b53  FXCH
00583b55  FMUL ST2
00583b57  FSTP float ptr [ESP + 0x70]
00583b5b  FMUL ST1
00583b5d  FSTP float ptr [ESP + 0x74]
00583b61  FLD float ptr [ESP + 0xb8]
00583b68  ADD ECX,0x10
00583b6b  FMUL ST1
00583b6d  MOV byte ptr [ESP + 0x1b],0x1
00583b72  FSTP float ptr [ESP + 0x78]
00583b76  FMUL float ptr [ESP + 0xbc]
00583b7d  FLD float ptr [ESP + 0x70]
00583b81  FADD float ptr [EDX + ESI*0x1]
00583b84  FLD float ptr [ESP + 0x74]
00583b88  FADD float ptr [EDX + ESI*0x1 + 0x4]
00583b8c  FLD float ptr [ESP + 0x78]
00583b90  FADD float ptr [EDX + ESI*0x1 + 0x8]
00583b94  FSTP float ptr [ESP + 0xa8]
00583b9b  MOV EBX,dword ptr [ESP + 0xa8]
00583ba2  FXCH ST2
00583ba4  FADD float ptr [EDX + ESI*0x1 + 0xc]
00583ba8  MOV EDX,dword ptr [ESP + 0x24]
00583bac  MOV dword ptr [EDX + 0x8],EBX
00583baf  FSTP float ptr [ESP + 0xac]
00583bb6  MOV EBX,dword ptr [ESP + 0xac]
00583bbd  MOV dword ptr [EDX + 0xc],EBX
00583bc0  MOV EBX,dword ptr [ESP + 0x1c]
00583bc4  FSTP float ptr [EDX]
00583bc6  INC EBX
00583bc7  FSTP float ptr [EDX + 0x4]
00583bca  ADD EDX,0x10
00583bcd  MOV dword ptr [ESP + 0x1c],EBX
00583bd1  MOV EBX,dword ptr [EBP + 0x18]
00583bd4  MOV dword ptr [ESP + 0x24],EDX
00583bd8  FLD float ptr [EAX]
00583bda  MOV EDX,dword ptr [EAX + -0x4]
00583bdd  FLD float ptr [EAX + 0x4]
00583be0  MOV EAX,dword ptr [ESP + 0x2c]
00583be4  MOV dword ptr [ECX],EDX
00583be6  FXCH
00583be8  MOV EDX,dword ptr [EBP + 0xc]
00583beb  FSTP float ptr [ECX + 0x4]
00583bee  ADD ECX,0x10
00583bf1  FSTP float ptr [ECX + -0x8]
00583bf4  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583bf8  MOV EBX,dword ptr [EBX + EAX*0x8]
00583bfb  MOV EAX,dword ptr [ESP + 0x1c]
00583bff  MOV dword ptr [EDX + EAX*0x8],EBX
00583c02  FSTP float ptr [EDX + EAX*0x8 + 0x4]
00583c06  MOV EDX,dword ptr [ESP + 0x34]
00583c0a  MOV EBX,dword ptr [ESP + 0x20]
00583c0e  FLD float ptr [EDX + EBX*0x1]
00583c11  MOV EDX,dword ptr [ESP + 0x30]
00583c15  MOV EBX,dword ptr [EDX]
00583c17  FLD float ptr [EDX + -0x4]
00583c1a  MOV dword ptr [ESP + 0x54],EBX
00583c1e  FXCH
00583c20  MOV EBX,dword ptr [EDX + -0xc]
00583c23  MOV EDX,dword ptr [ESP + 0x24]
00583c27  FSTP float ptr [EDX + 0x4]
00583c2a  MOV dword ptr [EDX],EBX
00583c2c  MOV EBX,dword ptr [ESP + 0x54]
00583c30  INC EAX
00583c31  FSTP float ptr [EDX + 0x8]
00583c34  MOV dword ptr [EDX + 0xc],EBX
00583c37  ADD EDX,0x10
00583c3a  MOV dword ptr [ESP + 0x1c],EAX
00583c3e  MOV dword ptr [ESP + 0x24],EDX
00583c42  JMP 0x00583dd4
00583c47  TEST AL,AL
00583c49  JZ 0x00583dd4
00583c4f  MOV EAX,dword ptr [ESP + 0x20]
00583c53  FLD float ptr [EAX + -0x4]
00583c56  FSUB float ptr [EDX + EDI*0x1]
00583c59  FLD float ptr [EAX]
00583c5b  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583c5f  FLD float ptr [EAX + 0x4]
00583c62  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00583c66  FSTP float ptr [ESP + 0xd8]
00583c6d  MOV EAX,dword ptr [ESP + 0xd8]
00583c74  MOV dword ptr [ECX + 0x8],EAX
00583c77  FXCH
00583c79  FSTP float ptr [ECX]
00583c7b  MOV EAX,dword ptr [ESP + 0x2c]
00583c7f  FSTP float ptr [ECX + 0x4]
00583c82  FLD float ptr [EBP + 0x24]
00583c85  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583c89  FDIV float ptr [ECX + 0x4]
00583c8c  FLD ST0
00583c8e  FMUL float ptr [ECX]
00583c90  FSTP float ptr [ECX]
00583c92  FLD ST0
00583c94  FMUL float ptr [ECX + 0x4]
00583c97  FSTP float ptr [ECX + 0x4]
00583c9a  FLD ST0
00583c9c  FMUL float ptr [ECX + 0x8]
00583c9f  FSTP float ptr [ECX + 0x8]
00583ca2  FLD float ptr [EDX + EDI*0x1 + 0x4]
00583ca6  FLD float ptr [EDX + EDI*0x1 + 0x8]
00583caa  FLD float ptr [ECX]
00583cac  FADD float ptr [EDX + EDI*0x1]
00583caf  FSTP float ptr [ECX]
00583cb1  FXCH
00583cb3  FADD float ptr [ECX + 0x4]
00583cb6  FSTP float ptr [ECX + 0x4]
00583cb9  FADD float ptr [ECX + 0x8]
00583cbc  FSTP float ptr [ECX + 0x8]
00583cbf  FLD float ptr [EBX + EAX*0x8]
00583cc2  MOV EAX,dword ptr [ESP + 0x28]
00583cc6  FSUB float ptr [EAX + EBX*0x1]
00583cc9  MOV EAX,dword ptr [ESP + 0x2c]
00583ccd  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583cd1  MOV EAX,dword ptr [ESP + 0x28]
00583cd5  FSUB float ptr [EAX + EBX*0x1 + 0x4]
00583cd9  FXCH
00583cdb  FMUL ST2
00583cdd  FSTP float ptr [ESP + 0x4c]
00583ce1  MOV EAX,dword ptr [ESP + 0x4c]
00583ce5  MOV dword ptr [ESP + 0x58],EAX
00583ce9  FMUL ST1
00583ceb  FSTP float ptr [ESP + 0x50]
00583cef  MOV EAX,dword ptr [ESP + 0x50]
00583cf3  FLD float ptr [ESP + 0x58]
00583cf7  MOV dword ptr [ESP + 0x5c],EAX
00583cfb  MOV EAX,dword ptr [ESP + 0x28]
00583cff  FADD float ptr [EAX + EBX*0x1]
00583d02  FLD float ptr [ESP + 0x5c]
00583d06  FADD float ptr [EAX + EBX*0x1 + 0x4]
00583d0a  MOV EBX,dword ptr [EBP + 0xc]
00583d0d  MOV EAX,dword ptr [ESP + 0x1c]
00583d11  FXCH
00583d13  FSTP float ptr [EBX + EAX*0x8]
00583d16  FSTP float ptr [EBX + EAX*0x8 + 0x4]
00583d1a  MOV EAX,dword ptr [ESP + 0x30]
00583d1e  FLD float ptr [EAX + -0xc]
00583d21  MOV EAX,dword ptr [ESP + 0x34]
00583d25  FSUB float ptr [EDX + ESI*0x1]
00583d28  MOV EBX,dword ptr [ESP + 0x20]
00583d2c  FLD float ptr [EAX + EBX*0x1]
00583d2f  MOV EAX,dword ptr [ESP + 0x30]
00583d33  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00583d37  FLD float ptr [EAX + -0x4]
00583d3a  FSUB float ptr [EDX + ESI*0x1 + 0x8]
00583d3e  FSTP float ptr [ESP + 0x88]
00583d45  FLD float ptr [EAX]
00583d47  FSUB float ptr [EDX + ESI*0x1 + 0xc]
00583d4b  FSTP float ptr [ESP + 0x8c]
00583d52  FXCH
00583d54  FMUL ST2
00583d56  FSTP float ptr [ESP + 0x60]
00583d5a  FMUL ST1
00583d5c  FSTP float ptr [ESP + 0x64]
00583d60  MOV EAX,dword ptr [ESP + 0x24]
00583d64  FLD float ptr [ESP + 0x88]
00583d6b  ADD ECX,0x10
00583d6e  FMUL ST1
00583d70  MOV byte ptr [ESP + 0x1b],0x0
00583d75  FSTP float ptr [ESP + 0x68]
00583d79  FMUL float ptr [ESP + 0x8c]
00583d80  FLD float ptr [ESP + 0x60]
00583d84  FADD float ptr [EDX + ESI*0x1]
00583d87  FLD float ptr [ESP + 0x64]
00583d8b  FADD float ptr [EDX + ESI*0x1 + 0x4]
00583d8f  FLD float ptr [ESP + 0x68]
00583d93  FADD float ptr [EDX + ESI*0x1 + 0x8]
00583d97  FSTP float ptr [ESP + 0x98]
00583d9e  FXCH ST2
00583da0  FADD float ptr [EDX + ESI*0x1 + 0xc]
00583da4  MOV EDX,dword ptr [ESP + 0x98]
00583dab  MOV dword ptr [EAX + 0x8],EDX
00583dae  FSTP float ptr [ESP + 0x9c]
00583db5  MOV EDX,dword ptr [ESP + 0x9c]
00583dbc  MOV dword ptr [EAX + 0xc],EDX
00583dbf  MOV EDX,dword ptr [ESP + 0x1c]
00583dc3  FSTP float ptr [EAX]
00583dc5  INC EDX
00583dc6  FSTP float ptr [EAX + 0x4]
00583dc9  ADD EAX,0x10
00583dcc  MOV dword ptr [ESP + 0x1c],EDX
00583dd0  MOV dword ptr [ESP + 0x24],EAX
00583dd4  MOV EAX,dword ptr [ESP + 0x2c]
00583dd8  MOV EBX,dword ptr [ESP + 0x20]
00583ddc  LEA EDX,[EAX*0x8 + 0x0]
00583de3  MOV dword ptr [ESP + 0x28],EDX
00583de7  MOV EDX,dword ptr [ESP + 0x48]
00583deb  ADD EDX,EBX
00583ded  ADD EBX,0x10
00583df0  MOV dword ptr [ESP + 0x20],EBX
00583df4  MOV EBX,dword ptr [ESP + 0x30]
00583df8  ADD EBX,0x10
00583dfb  INC EAX
00583dfc  MOV dword ptr [ESP + 0x30],EBX
00583e00  CMP EAX,dword ptr [EBP + 0x20]
00583e03  MOV dword ptr [ESP + 0x2c],EAX
00583e07  JC 0x00583a25
00583e0d  MOV EAX,dword ptr [ESP + 0x1c]
00583e11  POP EDI
00583e12  POP ESI
00583e13  POP EBX
00583e14  MOV ESP,EBP
00583e16  POP EBP
00583e17  RET
