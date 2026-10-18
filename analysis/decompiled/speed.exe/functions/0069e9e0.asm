0069e9e0  SUB ESP,0x20
0069e9e3  PUSH ESI
0069e9e4  MOV ESI,ECX
0069e9e6  MOV ECX,dword ptr [ESI + 0xf4]
0069e9ec  TEST ECX,ECX
0069e9ee  PUSH EDI
0069e9ef  JZ 0x0069ea08
0069e9f1  MOV EAX,dword ptr [ECX]
0069e9f3  CALL dword ptr [EAX + 0x8]
0069e9f6  TEST AL,AL
0069e9f8  JZ 0x0069ea08
0069e9fa  MOV EDI,dword ptr [ESP + 0x2c]
0069e9fe  PUSH EDI
0069e9ff  MOV ECX,ESI
0069ea01  CALL 0x0069e820
0069ea06  JMP 0x0069ea47
0069ea08  MOV EDI,dword ptr [ESP + 0x2c]
0069ea0c  MOV dword ptr [ESI + 0x128],0x42340000
0069ea16  CMP word ptr [EDI + 0xc8],0x1
0069ea1e  JZ 0x0069ea35
0069ea20  MOV ECX,dword ptr [ESI + 0xa0]
0069ea26  FLD float ptr [ECX + 0x48]
0069ea29  FMUL float ptr [0x008a0dbc]
0069ea2f  FSTP float ptr [ESI + 0x128]
0069ea35  FLD float ptr [EDI + 0x8c]
0069ea3b  FMUL float ptr [ESI + 0x128]
0069ea41  FMUL float ptr [0x0089095c]
0069ea47  LEA EDX,[ESP + 0x18]
0069ea4b  FSTP float ptr [ESP + 0x2c]
0069ea4f  MOV ECX,dword ptr [ESP + 0x2c]
0069ea53  PUSH EDX
0069ea54  LEA EAX,[ESP + 0xc]
0069ea58  PUSH EAX
0069ea59  PUSH EDI
0069ea5a  PUSH ECX
0069ea5b  MOV ECX,ESI
0069ea5d  CALL 0x0068d6a0
0069ea62  MOV EAX,dword ptr [ESP + 0x18]
0069ea66  MOV EDX,dword ptr [ESP + 0x30]
0069ea6a  MOV ECX,dword ptr [ESP + 0x1c]
0069ea6e  MOV dword ptr [EDX],EAX
0069ea70  MOV EAX,dword ptr [ESP + 0x20]
0069ea74  MOV dword ptr [EDX + 0x4],ECX
0069ea77  MOV ECX,dword ptr [ESP + 0x34]
0069ea7b  MOV dword ptr [EDX + 0x8],EAX
0069ea7e  MOV EDX,dword ptr [ESP + 0x8]
0069ea82  MOV EAX,dword ptr [ESP + 0xc]
0069ea86  MOV dword ptr [ECX],EDX
0069ea88  MOV EDX,dword ptr [ESP + 0x10]
0069ea8c  MOV dword ptr [ECX + 0x4],EAX
0069ea8f  MOV EAX,dword ptr [ESP + 0x14]
0069ea93  MOV dword ptr [ECX + 0x8],EDX
0069ea96  MOV ECX,dword ptr [ESP + 0x24]
0069ea9a  MOV dword ptr [ESI + 0x124],ECX
0069eaa0  PUSH EDI
0069eaa1  MOV ECX,ESI
0069eaa3  MOV dword ptr [ESI + 0x120],EAX
0069eaa9  CALL 0x0068ed50
0069eaae  POP EDI
0069eaaf  POP ESI
0069eab0  ADD ESP,0x20
0069eab3  RET 0xc
