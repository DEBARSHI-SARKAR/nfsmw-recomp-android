007cdec0  PUSH EBP
007cdec1  MOV EBP,ESP
007cdec3  SUB ESP,0x10
007cdec6  MOV EAX,dword ptr [EBP + 0x10]
007cdec9  MOV ECX,dword ptr [EAX + 0x4]
007cdecc  SUB ECX,0x1
007cdecf  MOV dword ptr [EBP + -0x8],ECX
007cded2  MOVSX EDX,byte ptr [EBP + 0x14]
007cded6  TEST EDX,EDX
007cded8  JZ 0x007cdf11
007cdeda  MOV EAX,dword ptr [EBP + 0x10]
007cdedd  XOR ECX,ECX
007cdedf  CMP dword ptr [EAX],0x2d
007cdee2  SETZ CL
007cdee5  ADD ECX,dword ptr [EBP + 0x8]
007cdee8  MOV dword ptr [EBP + -0x4],ECX
007cdeeb  MOV EDX,dword ptr [EBP + -0x8]
007cdeee  CMP EDX,dword ptr [EBP + 0xc]
007cdef1  JNZ 0x007cdf11
007cdef3  MOV EAX,dword ptr [EBP + -0x4]
007cdef6  ADD EAX,dword ptr [EBP + -0x8]
007cdef9  MOV dword ptr [EBP + -0xc],EAX
007cdefc  MOV ECX,dword ptr [EBP + -0xc]
007cdeff  MOV byte ptr [ECX],0x30
007cdf02  MOV EDX,dword ptr [EBP + -0xc]
007cdf05  ADD EDX,0x1
007cdf08  MOV dword ptr [EBP + -0xc],EDX
007cdf0b  MOV EAX,dword ptr [EBP + -0xc]
007cdf0e  MOV byte ptr [EAX],0x0
007cdf11  MOV ECX,dword ptr [EBP + 0x8]
007cdf14  MOV dword ptr [EBP + -0x4],ECX
007cdf17  MOV EDX,dword ptr [EBP + 0x10]
007cdf1a  CMP dword ptr [EDX],0x2d
007cdf1d  JNZ 0x007cdf2e
007cdf1f  MOV EAX,dword ptr [EBP + -0x4]
007cdf22  MOV byte ptr [EAX],0x2d
007cdf25  MOV ECX,dword ptr [EBP + -0x4]
007cdf28  ADD ECX,0x1
007cdf2b  MOV dword ptr [EBP + -0x4],ECX
007cdf2e  MOV EDX,dword ptr [EBP + 0x10]
007cdf31  CMP dword ptr [EDX + 0x4],0x0
007cdf35  JG 0x007cdf56
007cdf37  PUSH 0x1
007cdf39  MOV EAX,dword ptr [EBP + -0x4]
007cdf3c  PUSH EAX
007cdf3d  CALL 0x007ce160
007cdf42  ADD ESP,0x8
007cdf45  MOV ECX,dword ptr [EBP + -0x4]
007cdf48  MOV byte ptr [ECX],0x30
007cdf4b  MOV EDX,dword ptr [EBP + -0x4]
007cdf4e  ADD EDX,0x1
007cdf51  MOV dword ptr [EBP + -0x4],EDX
007cdf54  JMP 0x007cdf62
007cdf56  MOV EAX,dword ptr [EBP + 0x10]
007cdf59  MOV ECX,dword ptr [EBP + -0x4]
007cdf5c  ADD ECX,dword ptr [EAX + 0x4]
007cdf5f  MOV dword ptr [EBP + -0x4],ECX
007cdf62  CMP dword ptr [EBP + 0xc],0x0
007cdf66  JLE 0x007cdff4
007cdf6c  PUSH 0x1
007cdf6e  MOV EDX,dword ptr [EBP + -0x4]
007cdf71  PUSH EDX
007cdf72  CALL 0x007ce160
007cdf77  ADD ESP,0x8
007cdf7a  MOV EAX,dword ptr [EBP + -0x4]
007cdf7d  MOV CL,byte ptr [0x0090725c]
007cdf83  MOV byte ptr [EAX],CL
007cdf85  MOV EDX,dword ptr [EBP + -0x4]
007cdf88  ADD EDX,0x1
007cdf8b  MOV dword ptr [EBP + -0x4],EDX
007cdf8e  MOV EAX,dword ptr [EBP + 0x10]
007cdf91  CMP dword ptr [EAX + 0x4],0x0
007cdf95  JGE 0x007cdff4
007cdf97  MOVSX ECX,byte ptr [EBP + 0x14]
007cdf9b  TEST ECX,ECX
007cdf9d  JZ 0x007cdfac
007cdf9f  MOV EDX,dword ptr [EBP + 0x10]
007cdfa2  MOV EAX,dword ptr [EDX + 0x4]
007cdfa5  NEG EAX
007cdfa7  MOV dword ptr [EBP + 0xc],EAX
007cdfaa  JMP 0x007cdfd2
007cdfac  MOV ECX,dword ptr [EBP + 0x10]
007cdfaf  MOV EDX,dword ptr [ECX + 0x4]
007cdfb2  NEG EDX
007cdfb4  CMP dword ptr [EBP + 0xc],EDX
007cdfb7  JGE 0x007cdfc1
007cdfb9  MOV EAX,dword ptr [EBP + 0xc]
007cdfbc  MOV dword ptr [EBP + -0x10],EAX
007cdfbf  JMP 0x007cdfcc
007cdfc1  MOV ECX,dword ptr [EBP + 0x10]
007cdfc4  MOV EDX,dword ptr [ECX + 0x4]
007cdfc7  NEG EDX
007cdfc9  MOV dword ptr [EBP + -0x10],EDX
007cdfcc  MOV EAX,dword ptr [EBP + -0x10]
007cdfcf  MOV dword ptr [EBP + 0xc],EAX
007cdfd2  MOV ECX,dword ptr [EBP + 0xc]
007cdfd5  PUSH ECX
007cdfd6  MOV EDX,dword ptr [EBP + -0x4]
007cdfd9  PUSH EDX
007cdfda  CALL 0x007ce160
007cdfdf  ADD ESP,0x8
007cdfe2  MOV EAX,dword ptr [EBP + 0xc]
007cdfe5  PUSH EAX
007cdfe6  PUSH 0x30
007cdfe8  MOV ECX,dword ptr [EBP + -0x4]
007cdfeb  PUSH ECX
007cdfec  CALL 0x007d4aa0
007cdff1  ADD ESP,0xc
007cdff4  MOV EAX,dword ptr [EBP + 0x8]
007cdff7  MOV ESP,EBP
007cdff9  POP EBP
007cdffa  RET
