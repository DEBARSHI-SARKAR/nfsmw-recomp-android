004a6a70  MOV EDX,dword ptr [ESP + 0x4]
004a6a74  SUB ESP,0x30
004a6a77  PUSH ESI
004a6a78  PUSH EDI
004a6a79  MOV EDI,dword ptr [0x00911800]
004a6a7f  PUSH 0x0
004a6a81  MOV ESI,ECX
004a6a83  MOV ECX,dword ptr [ESI + 0x18]
004a6a86  MOV EAX,dword ptr [ECX]
004a6a88  PUSH EDI
004a6a89  PUSH EDX
004a6a8a  CALL dword ptr [EAX + 0x18]
004a6a8d  TEST AL,AL
004a6a8f  JNZ 0x004a6a99
004a6a91  POP EDI
004a6a92  POP ESI
004a6a93  ADD ESP,0x30
004a6a96  RET 0xc
004a6a99  FLD float ptr [0x00890968]
004a6a9f  PUSH EBX
004a6aa0  FLD float ptr [ESI + 0x28]
004a6aa3  LEA EBX,[EDI + 0x10]
004a6aa6  MOV EAX,EBX
004a6aa8  FUCOMPP
004a6aaa  MOV ECX,dword ptr [EAX]
004a6aac  MOV EDX,dword ptr [EAX + 0x4]
004a6aaf  MOV dword ptr [ESP + 0x2c],ECX
004a6ab3  MOV ECX,dword ptr [EAX + 0x8]
004a6ab6  MOV dword ptr [ESP + 0x30],EDX
004a6aba  MOV EDX,dword ptr [EAX + 0xc]
004a6abd  FNSTSW AX
004a6abf  MOV dword ptr [ESP + 0x34],ECX
004a6ac3  TEST AH,0x44
004a6ac6  MOV dword ptr [ESP + 0x38],EDX
004a6aca  JNP 0x004a6b2c
004a6acc  MOV ECX,dword ptr [ESI + 0x34]
004a6acf  PUSH 0x0
004a6ad1  PUSH EDI
004a6ad2  CALL 0x0049ff90
004a6ad7  MOV ECX,dword ptr [ESI + 0x1c]
004a6ada  MOV EDX,dword ptr [ESP + 0x44]
004a6ade  MOV EAX,dword ptr [ECX]
004a6ae0  PUSH 0x0
004a6ae2  PUSH EDI
004a6ae3  PUSH EDX
004a6ae4  CALL dword ptr [EAX + 0x18]
004a6ae7  TEST AL,AL
004a6ae9  JNZ 0x004a6af4
004a6aeb  POP EBX
004a6aec  POP EDI
004a6aed  POP ESI
004a6aee  ADD ESP,0x30
004a6af1  RET 0xc
004a6af4  MOV ECX,dword ptr [EBX + 0x4]
004a6af7  MOV EAX,dword ptr [EBX]
004a6af9  MOV EDX,dword ptr [EBX + 0x8]
004a6afc  MOV dword ptr [ESP + 0x20],ECX
004a6b00  MOV dword ptr [ESP + 0x1c],EAX
004a6b04  MOV EAX,dword ptr [EBX + 0xc]
004a6b07  LEA ECX,[ESP + 0xc]
004a6b0b  PUSH ECX
004a6b0c  MOV ECX,dword ptr [ESI + 0x28]
004a6b0f  MOV dword ptr [ESP + 0x28],EDX
004a6b13  LEA EDX,[ESP + 0x20]
004a6b17  MOV dword ptr [ESP + 0x2c],EAX
004a6b1b  PUSH EDX
004a6b1c  LEA EAX,[ESP + 0x34]
004a6b20  PUSH EAX
004a6b21  PUSH ECX
004a6b22  CALL 0x0048d7d0
004a6b27  ADD ESP,0x10
004a6b2a  JMP 0x004a6b47
004a6b2c  MOV EDX,dword ptr [EBX]
004a6b2e  MOV EAX,dword ptr [EBX + 0x4]
004a6b31  MOV ECX,dword ptr [EBX + 0x8]
004a6b34  MOV dword ptr [ESP + 0xc],EDX
004a6b38  MOV EDX,dword ptr [EBX + 0xc]
004a6b3b  MOV dword ptr [ESP + 0x10],EAX
004a6b3f  MOV dword ptr [ESP + 0x14],ECX
004a6b43  MOV dword ptr [ESP + 0x18],EDX
004a6b47  LEA EAX,[ESP + 0x1c]
004a6b4b  PUSH EAX
004a6b4c  LEA ECX,[ESP + 0x30]
004a6b50  PUSH ECX
004a6b51  LEA EDX,[ESP + 0x14]
004a6b55  PUSH EDX
004a6b56  MOV dword ptr [ESP + 0x38],0x0
004a6b5e  MOV dword ptr [ESP + 0x3c],0x3f800000
004a6b66  MOV dword ptr [ESP + 0x40],0x0
004a6b6e  MOV dword ptr [ESP + 0x44],0x3f800000
004a6b76  CALL 0x0048dec0
004a6b7b  FLD float ptr [ESP + 0x28]
004a6b7f  MOV EAX,dword ptr [ESP + 0x54]
004a6b83  MOV ECX,dword ptr [ESP + 0x30]
004a6b87  FSTP float ptr [EAX]
004a6b89  ADD ESP,0xc
004a6b8c  POP EBX
004a6b8d  POP EDI
004a6b8e  MOV dword ptr [EAX + 0x4],ECX
004a6b91  MOV AL,0x1
004a6b93  POP ESI
004a6b94  ADD ESP,0x30
004a6b97  RET 0xc
