004eea00  SUB ESP,0x10
004eea03  PUSH ESI
004eea04  MOV ESI,ECX
004eea06  MOV AL,byte ptr [ESI + 0x4c]
004eea09  TEST AL,AL
004eea0b  JZ 0x004eecf5
004eea11  MOV EAX,dword ptr [ESI + 0x10]
004eea14  PUSH EBX
004eea15  XOR EBX,EBX
004eea17  CMP EAX,EBX
004eea19  PUSH EBP
004eea1a  PUSH EDI
004eea1b  JZ 0x004eea2e
004eea1d  MOV ECX,dword ptr [EAX + 0x4]
004eea20  AND ECX,0x7fff
004eea26  MOV EBP,ECX
004eea28  MOV dword ptr [ESP + 0x14],EBP
004eea2c  JMP 0x004eea34
004eea2e  MOV dword ptr [ESP + 0x14],EBX
004eea32  MOV EBP,EBX
004eea34  MOV ECX,dword ptr [ESI + 0x40]
004eea37  MOV EDI,dword ptr [ECX + 0x3c]
004eea3a  IMUL EDI,EBP
004eea3d  SAR EDI,0xf
004eea40  CMP EAX,EBX
004eea42  JZ 0x004eea51
004eea44  MOV EAX,dword ptr [EAX + 0x8]
004eea47  SAR EAX,0x10
004eea4a  AND EAX,0x7fff
004eea4f  MOV EBX,EAX
004eea51  FLD float ptr [ECX + 0x7c]
004eea54  CALL 0x007c4b80
004eea59  CMP EAX,EBX
004eea5b  MOV dword ptr [ESP + 0x18],EAX
004eea5f  JL 0x004eea65
004eea61  MOV dword ptr [ESP + 0x18],EBX
004eea65  FLD float ptr [ESI + 0x84]
004eea6b  MOV EAX,dword ptr [ESI + 0x84]
004eea71  FCOMP float ptr [ESI + 0x64]
004eea74  MOV dword ptr [ESP + 0x1c],EAX
004eea78  MOV dword ptr [ESP + 0x10],0x3f800000
004eea80  FNSTSW AX
004eea82  TEST AH,0x5
004eea85  JP 0x004eea9b
004eea87  FLD float ptr [ESI + 0x84]
004eea8d  MOV ECX,dword ptr [ESI + 0x64]
004eea90  FDIV float ptr [ESI + 0x64]
004eea93  MOV dword ptr [ESP + 0x1c],ECX
004eea97  FSTP float ptr [ESP + 0x10]
004eea9b  MOV EAX,dword ptr [ESI + 0x44]
004eea9e  MOV EBX,dword ptr [EAX + 0xc8]
004eeaa4  SAR EBX,0x8
004eeaa7  TEST EBX,EBX
004eeaa9  JGE 0x004eeaaf
004eeaab  XOR EBX,EBX
004eeaad  JMP 0x004eeab9
004eeaaf  CMP EBX,0x7f
004eeab2  JLE 0x004eeab9
004eeab4  MOV EBX,0x7f
004eeab9  SAR EDI,0x8
004eeabc  TEST EDI,EDI
004eeabe  MOV dword ptr [ESI + 0x88],EDI
004eeac4  JGE 0x004eeaca
004eeac6  XOR EDI,EDI
004eeac8  JMP 0x004eead4
004eeaca  CMP EDI,0x7f
004eeacd  JLE 0x004eead4
004eeacf  MOV EDI,0x7f
004eead4  MOV dword ptr [ESI + 0x88],EDI
004eeada  MOV EDI,dword ptr [EAX + 0xc4]
004eeae0  IMUL EDI,EBP
004eeae3  SAR EDI,0x17
004eeae6  TEST EDI,EDI
004eeae8  JGE 0x004eeaee
004eeaea  XOR EDI,EDI
004eeaec  JMP 0x004eeaf8
004eeaee  CMP EDI,0x7f
004eeaf1  JLE 0x004eeaf8
004eeaf3  MOV EDI,0x7f
004eeaf8  CALL 0x0081bccb
004eeafd  MOV EDX,dword ptr [ESI + 0x88]
004eeb03  MOV EAX,dword ptr [ESI + 0x68]
004eeb06  PUSH EDX
004eeb07  PUSH EAX
004eeb08  CALL 0x0081d7ef
004eeb0d  MOV EAX,dword ptr [ESI + 0x10]
004eeb10  ADD ESP,0x8
004eeb13  TEST EAX,EAX
004eeb15  JZ 0x004eeb30
004eeb17  MOV ECX,dword ptr [0x00911fa8]
004eeb1d  MOV EDX,dword ptr [ECX + 0x24]
004eeb20  MOV ECX,dword ptr [EDX + 0x24]
004eeb23  TEST ECX,ECX
004eeb25  MOV EAX,dword ptr [EAX]
004eeb27  JZ 0x004eeb30
004eeb29  AND EAX,0xffff
004eeb2e  JMP 0x004eeb32
004eeb30  XOR EAX,EAX
004eeb32  PUSH 0x0
004eeb34  PUSH EAX
004eeb35  MOV EAX,dword ptr [ESI + 0x68]
004eeb38  PUSH EAX
004eeb39  CALL 0x0081e557
004eeb3e  FLD float ptr [ESP + 0x1c]
004eeb42  FMUL float ptr [ESI + 0x3c]
004eeb45  FMUL float ptr [0x00899088]
004eeb4b  CALL 0x007c4b80
004eeb50  MOV ECX,dword ptr [ESI + 0x68]
004eeb53  PUSH EAX
004eeb54  PUSH ECX
004eeb55  CALL 0x0081e4be
004eeb5a  MOV EDX,dword ptr [ESP + 0x2c]
004eeb5e  MOV EAX,dword ptr [ESI + 0x68]
004eeb61  PUSH EDX
004eeb62  PUSH EAX
004eeb63  CALL 0x0081e469
004eeb68  MOV ECX,dword ptr [ESI + 0x68]
004eeb6b  PUSH EBX
004eeb6c  PUSH ECX
004eeb6d  CALL 0x0081e3cb
004eeb72  MOV EDX,dword ptr [ESI + 0x68]
004eeb75  PUSH EDI
004eeb76  PUSH 0x0
004eeb78  PUSH EDX
004eeb79  CALL 0x0081e318
004eeb7e  MOV EBP,dword ptr [ESP + 0x4c]
004eeb82  MOV ECX,dword ptr [ESI + 0x58]
004eeb85  ADD ESP,0x30
004eeb88  PUSH 0x42700000
004eeb8d  PUSH EBP
004eeb8e  CALL 0x004e1cd0
004eeb93  MOV EAX,dword ptr [ESI + 0x58]
004eeb96  MOV ECX,dword ptr [EAX + 0x24]
004eeb99  TEST ECX,ECX
004eeb9b  MOV dword ptr [ESP + 0x1c],ECX
004eeb9f  JZ 0x004eebc8
004eeba1  MOV ECX,dword ptr [EAX + 0x28]
004eeba4  TEST ECX,ECX
004eeba6  JZ 0x004eebc8
004eeba8  FILD dword ptr [ESP + 0x1c]
004eebac  PUSH ECX
004eebad  FSTP float ptr [ESP + 0x20]
004eebb1  FLD float ptr [EAX + 0x40]
004eebb4  FADD float ptr [0x008933d4]
004eebba  FSTP float ptr [ESP]
004eebbd  CALL 0x004e14c0
004eebc2  FDIVR float ptr [ESP + 0x1c]
004eebc6  JMP 0x004eebce
004eebc8  FLD float ptr [0x00890968]
004eebce  FMUL float ptr [ESP + 0x10]
004eebd2  MOV EAX,dword ptr [ESI + 0x40]
004eebd5  MOV EDX,dword ptr [ESP + 0x14]
004eebd9  MOV ECX,dword ptr [ESI + 0x44]
004eebdc  FMUL float ptr [0x008970c0]
004eebe2  FSTP float ptr [ESI + 0x84]
004eebe8  MOV EAX,dword ptr [EAX + 0x40]
004eebeb  MOV EBX,dword ptr [ECX + 0xc8]
004eebf1  IMUL EAX,EDX
004eebf4  SAR EBX,0x8
004eebf7  SAR EAX,0xf
004eebfa  TEST EBX,EBX
004eebfc  JGE 0x004eec02
004eebfe  XOR EBX,EBX
004eec00  JMP 0x004eec0c
004eec02  CMP EBX,0x7f
004eec05  JLE 0x004eec0c
004eec07  MOV EBX,0x7f
004eec0c  SAR EAX,0x8
004eec0f  TEST EAX,EAX
004eec11  MOV dword ptr [ESI + 0x8c],EAX
004eec17  JGE 0x004eec1d
004eec19  XOR EAX,EAX
004eec1b  JMP 0x004eec27
004eec1d  CMP EAX,0x7f
004eec20  JLE 0x004eec27
004eec22  MOV EAX,0x7f
004eec27  MOV dword ptr [ESI + 0x8c],EAX
004eec2d  MOV EDI,dword ptr [ECX + 0xc4]
004eec33  IMUL EDI,EDX
004eec36  SAR EDI,0x17
004eec39  TEST EDI,EDI
004eec3b  JGE 0x004eec41
004eec3d  XOR EDI,EDI
004eec3f  JMP 0x004eec4b
004eec41  CMP EDI,0x7f
004eec44  JLE 0x004eec4b
004eec46  MOV EDI,0x7f
004eec4b  MOV ECX,dword ptr [ESI + 0x80]
004eec51  PUSH EAX
004eec52  PUSH ECX
004eec53  CALL 0x0081d7ef
004eec58  MOV EAX,dword ptr [ESI + 0x10]
004eec5b  ADD ESP,0x8
004eec5e  TEST EAX,EAX
004eec60  JZ 0x004eec7b
004eec62  MOV EDX,dword ptr [0x00911fa8]
004eec68  MOV ECX,dword ptr [EDX + 0x24]
004eec6b  MOV EDX,dword ptr [ECX + 0x24]
004eec6e  TEST EDX,EDX
004eec70  MOV EAX,dword ptr [EAX]
004eec72  JZ 0x004eec7b
004eec74  AND EAX,0xffff
004eec79  JMP 0x004eec7d
004eec7b  XOR EAX,EAX
004eec7d  MOV EDX,dword ptr [ESI + 0x80]
004eec83  PUSH 0x0
004eec85  PUSH EAX
004eec86  PUSH EDX
004eec87  CALL 0x0081e557
004eec8c  FLD float ptr [ESP + 0x1c]
004eec90  FMUL float ptr [ESI + 0x3c]
004eec93  FMUL float ptr [0x00899088]
004eec99  CALL 0x007c4b80
004eec9e  PUSH EAX
004eec9f  MOV EAX,dword ptr [ESI + 0x80]
004eeca5  PUSH EAX
004eeca6  CALL 0x0081e4be
004eecab  MOV ECX,dword ptr [ESP + 0x2c]
004eecaf  MOV EDX,dword ptr [ESI + 0x80]
004eecb5  PUSH ECX
004eecb6  PUSH EDX
004eecb7  CALL 0x0081e469
004eecbc  MOV EAX,dword ptr [ESI + 0x80]
004eecc2  PUSH EBX
004eecc3  PUSH EAX
004eecc4  CALL 0x0081e3cb
004eecc9  MOV ECX,dword ptr [ESI + 0x80]
004eeccf  PUSH EDI
004eecd0  PUSH 0x0
004eecd2  PUSH ECX
004eecd3  CALL 0x0081e318
004eecd8  MOV ECX,dword ptr [ESI + 0x70]
004eecdb  ADD ESP,0x30
004eecde  PUSH 0x42700000
004eece3  PUSH EBP
004eece4  CALL 0x004e1cd0
004eece9  POP EDI
004eecea  POP EBP
004eeceb  POP EBX
004eecec  POP ESI
004eeced  ADD ESP,0x10
004eecf0  JMP 0x0081bcd9
004eecf5  POP ESI
004eecf6  ADD ESP,0x10
004eecf9  RET
