004fea70  PUSH EBP
004fea71  MOV EBP,ESP
004fea73  AND ESP,0xfffffff0
004fea76  SUB ESP,0x64
004fea79  PUSH EBX
004fea7a  PUSH ESI
004fea7b  MOV ESI,ECX
004fea7d  MOV EAX,dword ptr [ESI + 0x7c]
004fea80  MOV ECX,dword ptr [EAX + 0x8]
004fea83  MOV EDX,dword ptr [ECX + 0xf8]
004fea89  MOV dword ptr [ESP + 0x14],EDX
004fea8d  FLD float ptr [ESP + 0x14]
004fea91  PUSH EDI
004fea92  FMUL float ptr [0x008933d4]
004fea98  MOV EDI,dword ptr [EBP + 0x14]
004fea9b  MOV EBX,EDX
004fea9d  PUSH EDI
004fea9e  PUSH EBX
004fea9f  FSTP float ptr [ESP + 0x1c]
004feaa3  CALL 0x0045d9e0
004feaa8  FSUB float ptr [ESP + 0x1c]
004feaac  PUSH EDI
004feaad  PUSH EBX
004feaae  FSTP float ptr [ESP + 0x28]
004feab2  CALL 0x0045d9e0
004feab7  FSUB float ptr [ESP + 0x24]
004feabb  PUSH EDI
004feabc  PUSH EBX
004feabd  FSTP float ptr [ESP + 0x34]
004feac1  CALL 0x0045d9e0
004feac6  FSUB float ptr [ESP + 0x2c]
004feaca  FSTP float ptr [ESP + 0x2c]
004feace  FLD float ptr [ESP + 0x30]
004fead2  FMUL float ptr [0x00893348]
004fead8  CALL 0x007c4b80
004feadd  MOV ECX,EAX
004feadf  MOV EAX,0xb60b60b7
004feae4  IMUL ECX
004feae6  ADD EDX,ECX
004feae8  SAR EDX,0x8
004feaeb  MOV EAX,EDX
004feaed  SHR EAX,0x1f
004feaf0  ADD EAX,EDX
004feaf2  PUSH EAX
004feaf3  LEA ECX,[ESP + 0x4c]
004feaf7  PUSH 0x987ab0
004feafc  PUSH ECX
004feafd  CALL 0x006bdbb0
004feb02  FLD float ptr [ESP + 0x40]
004feb06  FMUL float ptr [0x00893348]
004feb0c  CALL 0x007c4b80
004feb11  MOV ECX,EAX
004feb13  MOV EAX,0xb60b60b7
004feb18  IMUL ECX
004feb1a  ADD EDX,ECX
004feb1c  SAR EDX,0x8
004feb1f  MOV EAX,EDX
004feb21  SHR EAX,0x1f
004feb24  ADD EAX,EDX
004feb26  PUSH EAX
004feb27  LEA ECX,[ESP + 0x58]
004feb2b  PUSH ECX
004feb2c  MOV EDX,ECX
004feb2e  PUSH EDX
004feb2f  CALL 0x006bdc60
004feb34  FLD float ptr [ESP + 0x44]
004feb38  FMUL float ptr [0x00893348]
004feb3e  CALL 0x007c4b80
004feb43  MOV ECX,EAX
004feb45  MOV EAX,0xb60b60b7
004feb4a  IMUL ECX
004feb4c  ADD EDX,ECX
004feb4e  SAR EDX,0x8
004feb51  MOV EAX,EDX
004feb53  SHR EAX,0x1f
004feb56  ADD EAX,EDX
004feb58  PUSH EAX
004feb59  LEA ECX,[ESP + 0x64]
004feb5d  PUSH ECX
004feb5e  MOV EDX,ECX
004feb60  PUSH EDX
004feb61  CALL 0x006bdd20
004feb66  ADD ESI,0x40
004feb69  PUSH ESI
004feb6a  LEA EAX,[ESP + 0x70]
004feb6e  PUSH EAX
004feb6f  LEA ECX,[ESP + 0x64]
004feb73  PUSH ECX
004feb74  CALL 0x006bd920
004feb79  FLD float ptr [ESP + 0x68]
004feb7d  MOV EDX,dword ptr [EBP + 0x8]
004feb80  MOV EAX,dword ptr [EBP + 0xc]
004feb83  FSTP float ptr [EDX]
004feb85  FLD float ptr [ESP + 0x6c]
004feb89  MOV ECX,dword ptr [EBP + 0x10]
004feb8c  ADD ESP,0x48
004feb8f  FSTP float ptr [EAX]
004feb91  FLD float ptr [ESP + 0x28]
004feb95  POP EDI
004feb96  POP ESI
004feb97  FSTP float ptr [ECX]
004feb99  POP EBX
004feb9a  MOV ESP,EBP
004feb9c  POP EBP
004feb9d  RET 0x10
