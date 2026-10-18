004b4b60  PUSH ECX
004b4b61  MOV EAX,dword ptr [ESP + 0x8]
004b4b65  PUSH EBX
004b4b66  PUSH ESI
004b4b67  PUSH EAX
004b4b68  MOV ESI,ECX
004b4b6a  CALL 0x004d6270
004b4b6f  MOV ECX,dword ptr [ESI + 0x18]
004b4b72  MOV EDX,dword ptr [ECX]
004b4b74  CALL dword ptr [EDX + 0x40]
004b4b77  MOV dword ptr [ESI + 0x24],EAX
004b4b7a  MOV EAX,dword ptr [ESI + 0x18]
004b4b7d  MOV ECX,dword ptr [EAX + 0xd8]
004b4b83  MOV EDX,dword ptr [ECX + 0x60]
004b4b86  MOV ECX,dword ptr [ECX + 0x4c]
004b4b89  SUB ECX,EDX
004b4b8b  TEST EDX,EDX
004b4b8d  MOV dword ptr [ESP + 0x8],EDX
004b4b91  FILD dword ptr [ESP + 0x8]
004b4b95  MOV dword ptr [ESP + 0x10],ECX
004b4b99  JGE 0x004b4ba1
004b4b9b  FADD float ptr [0x00891214]
004b4ba1  FSTP float ptr [ESI + 0x54]
004b4ba4  MOV dword ptr [ESI + 0x58],0x0
004b4bab  MOV ECX,dword ptr [EAX + 0xd8]
004b4bb1  FILD dword ptr [ESP + 0x10]
004b4bb5  MOV EDX,dword ptr [ECX + 0x60]
004b4bb8  TEST EDX,EDX
004b4bba  FLD ST0
004b4bbc  FMUL float ptr [ECX + 0x58]
004b4bbf  FILD dword ptr [ECX + 0x60]
004b4bc2  JGE 0x004b4bca
004b4bc4  FADD float ptr [0x00891214]
004b4bca  FADDP
004b4bcc  MOV EDX,0x3f800000
004b4bd1  MOV dword ptr [ESI + 0x60],EDX
004b4bd4  FSTP float ptr [ESI + 0x5c]
004b4bd7  MOV ECX,dword ptr [EAX + 0xd8]
004b4bdd  MOV EBX,dword ptr [ECX + 0x4c]
004b4be0  FILD dword ptr [ECX + 0x4c]
004b4be3  TEST EBX,EBX
004b4be5  JGE 0x004b4bed
004b4be7  FADD float ptr [0x00891214]
004b4bed  FXCH
004b4bef  FMUL float ptr [ECX + 0x50]
004b4bf2  MOV dword ptr [ESI + 0x68],EDX
004b4bf5  FSUBP
004b4bf7  FSTP float ptr [ESI + 0x64]
004b4bfa  MOV EAX,dword ptr [EAX + 0xd8]
004b4c00  MOV ECX,dword ptr [EAX + 0x4c]
004b4c03  FILD dword ptr [EAX + 0x4c]
004b4c06  TEST ECX,ECX
004b4c08  JGE 0x004b4c10
004b4c0a  FADD float ptr [0x00891214]
004b4c10  FSTP float ptr [ESI + 0x6c]
004b4c13  MOV dword ptr [ESI + 0x70],0x0
004b4c1a  POP ESI
004b4c1b  POP EBX
004b4c1c  POP ECX
004b4c1d  RET 0x4
