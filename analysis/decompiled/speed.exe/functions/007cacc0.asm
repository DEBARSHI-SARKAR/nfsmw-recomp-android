007cacc0  MOV ECX,dword ptr [ESP + 0xc]
007cacc4  PUSH EDI
007cacc5  TEST ECX,ECX
007cacc7  JZ 0x007cad84
007caccd  MOV EDI,dword ptr [ESP + 0x8]
007cacd1  PUSH ESI
007cacd2  TEST EDI,0x3
007cacd8  PUSH EBX
007cacd9  JZ 0x007cacec
007cacdb  MOV AL,byte ptr [EDI]
007cacdd  ADD EDI,0x1
007cace0  TEST AL,AL
007cace2  JZ 0x007cad1d
007cace4  TEST EDI,0x3
007cacea  JNZ 0x007cacdb
007cacec  MOV EAX,dword ptr [EDI]
007cacee  MOV EDX,0x7efefeff
007cacf3  ADD EDX,EAX
007cacf5  XOR EAX,0xffffffff
007cacf8  XOR EAX,EDX
007cacfa  ADD EDI,0x4
007cacfd  TEST EAX,0x81010100
007cad02  JZ 0x007cacec
007cad04  MOV EAX,dword ptr [EDI + -0x4]
007cad07  TEST AL,AL
007cad09  JZ 0x007cad2c
007cad0b  TEST AH,AH
007cad0d  JZ 0x007cad27
007cad0f  TEST EAX,0xff0000
007cad14  JZ 0x007cad22
007cad16  TEST EAX,0xff000000
007cad1b  JNZ 0x007cacec
007cad1d  SUB EDI,0x1
007cad20  JMP 0x007cad2f
007cad22  SUB EDI,0x2
007cad25  JMP 0x007cad2f
007cad27  SUB EDI,0x3
007cad2a  JMP 0x007cad2f
007cad2c  SUB EDI,0x4
007cad2f  MOV ESI,dword ptr [ESP + 0x14]
007cad33  TEST ESI,0x3
007cad39  JNZ 0x007cad44
007cad3b  MOV EBX,ECX
007cad3d  SHR ECX,0x2
007cad40  JNZ 0x007cad9e
007cad42  JMP 0x007cad66
007cad44  MOV DL,byte ptr [ESI]
007cad46  ADD ESI,0x1
007cad49  TEST DL,DL
007cad4b  JZ 0x007cad8a
007cad4d  MOV byte ptr [EDI],DL
007cad4f  ADD EDI,0x1
007cad52  SUB ECX,0x1
007cad55  JZ 0x007cad80
007cad57  TEST ESI,0x3
007cad5d  JNZ 0x007cad44
007cad5f  MOV EBX,ECX
007cad61  SHR ECX,0x2
007cad64  JNZ 0x007cad9e
007cad66  MOV ECX,EBX
007cad68  AND ECX,0x3
007cad6b  JZ 0x007cad80
007cad6d  MOV DL,byte ptr [ESI]
007cad6f  ADD ESI,0x1
007cad72  MOV byte ptr [EDI],DL
007cad74  ADD EDI,0x1
007cad77  TEST DL,DL
007cad79  JZ 0x007cad82
007cad7b  SUB ECX,0x1
007cad7e  JNZ 0x007cad6d
007cad80  MOV byte ptr [EDI],CL
007cad82  POP EBX
007cad83  POP ESI
007cad84  MOV EAX,dword ptr [ESP + 0x8]
007cad88  POP EDI
007cad89  RET
007cad8a  MOV byte ptr [EDI],DL
007cad8c  MOV EAX,dword ptr [ESP + 0x10]
007cad90  POP EBX
007cad91  POP ESI
007cad92  POP EDI
007cad93  RET
007cad94  MOV dword ptr [EDI],EDX
007cad96  ADD EDI,0x4
007cad99  SUB ECX,0x1
007cad9c  JZ 0x007cad66
007cad9e  MOV EDX,0x7efefeff
007cada3  MOV EAX,dword ptr [ESI]
007cada5  ADD EDX,EAX
007cada7  XOR EAX,0xffffffff
007cadaa  XOR EAX,EDX
007cadac  MOV EDX,dword ptr [ESI]
007cadae  ADD ESI,0x4
007cadb1  TEST EAX,0x81010100
007cadb6  JZ 0x007cad94
007cadb8  TEST DL,DL
007cadba  JZ 0x007cad8a
007cadbc  TEST DH,DH
007cadbe  JZ 0x007cadea
007cadc0  TEST EDX,0xff0000
007cadc6  JZ 0x007cadda
007cadc8  TEST EDX,0xff000000
007cadce  JNZ 0x007cad94
007cadd0  MOV dword ptr [EDI],EDX
007cadd2  MOV EAX,dword ptr [ESP + 0x10]
007cadd6  POP EBX
007cadd7  POP ESI
007cadd8  POP EDI
007cadd9  RET
007cadda  MOV word ptr [EDI],DX
007caddd  XOR EDX,EDX
007caddf  MOV EAX,dword ptr [ESP + 0x10]
007cade3  MOV byte ptr [EDI + 0x2],DL
007cade6  POP EBX
007cade7  POP ESI
007cade8  POP EDI
007cade9  RET
007cadea  MOV word ptr [EDI],DX
007caded  MOV EAX,dword ptr [ESP + 0x10]
007cadf1  POP EBX
007cadf2  POP ESI
007cadf3  POP EDI
007cadf4  RET
