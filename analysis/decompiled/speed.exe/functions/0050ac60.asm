0050ac60  MOV EAX,FS:[0x0]
0050ac66  PUSH -0x1
0050ac68  PUSH 0x86dfa8
0050ac6d  PUSH EAX
0050ac6e  MOV EAX,dword ptr [ESP + 0x14]
0050ac72  MOV dword ptr FS:[0x0],ESP
0050ac79  SUB ESP,0x48
0050ac7c  PUSH EBP
0050ac7d  MOV EBP,ECX
0050ac7f  MOV CL,byte ptr [EAX + 0x15]
0050ac82  TEST CL,CL
0050ac84  PUSH ESI
0050ac85  JZ 0x0050acd3
0050ac87  PUSH 0x1b
0050ac89  XOR ESI,ESI
0050ac8b  PUSH 0x892920
0050ac90  LEA ECX,[ESP + 0x14]
0050ac94  MOV dword ptr [ESP + 0x2c],0xf
0050ac9c  MOV dword ptr [ESP + 0x28],ESI
0050aca0  MOV byte ptr [ESP + 0x18],0x0
0050aca5  CALL 0x004303b0
0050acaa  LEA EAX,[ESP + 0xc]
0050acae  PUSH EAX
0050acaf  LEA ECX,[ESP + 0x2c]
0050acb3  MOV dword ptr [ESP + 0x5c],ESI
0050acb7  CALL 0x00432d50
0050acbc  PUSH 0x8c9f78
0050acc1  LEA ECX,[ESP + 0x2c]
0050acc5  PUSH ECX
0050acc6  MOV dword ptr [ESP + 0x30],0x8bf2c0
0050acce  CALL 0x007c56b0
0050acd3  PUSH EBX
0050acd4  MOV EBX,EAX
0050acd6  PUSH EDI
0050acd7  LEA ECX,[ESP + 0x6c]
0050acdb  MOV dword ptr [ESP + 0x10],EBX
0050acdf  CALL 0x005006e0
0050ace4  MOV EAX,dword ptr [EBX]
0050ace6  MOV CL,byte ptr [EAX + 0x15]
0050ace9  TEST CL,CL
0050aceb  JZ 0x0050acf2
0050aced  MOV EDI,dword ptr [EBX + 0x8]
0050acf0  JMP 0x0050ad0b
0050acf2  MOV EDX,dword ptr [EBX + 0x8]
0050acf5  MOV CL,byte ptr [EDX + 0x15]
0050acf8  TEST CL,CL
0050acfa  JZ 0x0050ad00
0050acfc  MOV EDI,EAX
0050acfe  JMP 0x0050ad0b
0050ad00  MOV ECX,dword ptr [ESP + 0x6c]
0050ad04  CMP ECX,EBX
0050ad06  MOV EDI,dword ptr [ECX + 0x8]
0050ad09  JNZ 0x0050ad79
0050ad0b  MOV AL,byte ptr [EDI + 0x15]
0050ad0e  TEST AL,AL
0050ad10  MOV ESI,dword ptr [EBX + 0x4]
0050ad13  JNZ 0x0050ad18
0050ad15  MOV dword ptr [EDI + 0x4],ESI
0050ad18  MOV EAX,dword ptr [EBP + 0x4]
0050ad1b  CMP dword ptr [EAX + 0x4],EBX
0050ad1e  JNZ 0x0050ad25
0050ad20  MOV dword ptr [EAX + 0x4],EDI
0050ad23  JMP 0x0050ad30
0050ad25  CMP dword ptr [ESI],EBX
0050ad27  JNZ 0x0050ad2d
0050ad29  MOV dword ptr [ESI],EDI
0050ad2b  JMP 0x0050ad30
0050ad2d  MOV dword ptr [ESI + 0x8],EDI
0050ad30  MOV EBX,dword ptr [EBP + 0x4]
0050ad33  MOV EAX,dword ptr [EBX]
0050ad35  CMP EAX,dword ptr [ESP + 0x10]
0050ad39  JNZ 0x0050ad51
0050ad3b  MOV AL,byte ptr [EDI + 0x15]
0050ad3e  TEST AL,AL
0050ad40  JZ 0x0050ad46
0050ad42  MOV EAX,ESI
0050ad44  JMP 0x0050ad4f
0050ad46  PUSH EDI
0050ad47  CALL 0x00500590
0050ad4c  ADD ESP,0x4
0050ad4f  MOV dword ptr [EBX],EAX
0050ad51  MOV EBX,dword ptr [EBP + 0x4]
0050ad54  MOV ECX,dword ptr [ESP + 0x10]
0050ad58  CMP dword ptr [EBX + 0x8],ECX
0050ad5b  JNZ 0x0050add1
0050ad5d  MOV AL,byte ptr [EDI + 0x15]
0050ad60  TEST AL,AL
0050ad62  JZ 0x0050ad6b
0050ad64  MOV EAX,ESI
0050ad66  MOV dword ptr [EBX + 0x8],EAX
0050ad69  JMP 0x0050add1
0050ad6b  PUSH EDI
0050ad6c  CALL 0x00500570
0050ad71  ADD ESP,0x4
0050ad74  MOV dword ptr [EBX + 0x8],EAX
0050ad77  JMP 0x0050add1
0050ad79  MOV dword ptr [EAX + 0x4],ECX
0050ad7c  MOV EDX,dword ptr [EBX]
0050ad7e  MOV dword ptr [ECX],EDX
0050ad80  CMP ECX,dword ptr [EBX + 0x8]
0050ad83  JNZ 0x0050ad89
0050ad85  MOV ESI,ECX
0050ad87  JMP 0x0050ada4
0050ad89  MOV AL,byte ptr [EDI + 0x15]
0050ad8c  TEST AL,AL
0050ad8e  MOV ESI,dword ptr [ECX + 0x4]
0050ad91  JNZ 0x0050ad96
0050ad93  MOV dword ptr [EDI + 0x4],ESI
0050ad96  MOV dword ptr [ESI],EDI
0050ad98  MOV EAX,dword ptr [EBX + 0x8]
0050ad9b  MOV dword ptr [ECX + 0x8],EAX
0050ad9e  MOV EDX,dword ptr [EBX + 0x8]
0050ada1  MOV dword ptr [EDX + 0x4],ECX
0050ada4  MOV EAX,dword ptr [EBP + 0x4]
0050ada7  CMP dword ptr [EAX + 0x4],EBX
0050adaa  JNZ 0x0050adb1
0050adac  MOV dword ptr [EAX + 0x4],ECX
0050adaf  JMP 0x0050adbf
0050adb1  MOV EAX,dword ptr [EBX + 0x4]
0050adb4  CMP dword ptr [EAX],EBX
0050adb6  JNZ 0x0050adbc
0050adb8  MOV dword ptr [EAX],ECX
0050adba  JMP 0x0050adbf
0050adbc  MOV dword ptr [EAX + 0x8],ECX
0050adbf  MOV EAX,dword ptr [EBX + 0x4]
0050adc2  MOV dword ptr [ECX + 0x4],EAX
0050adc5  MOV DL,byte ptr [EBX + 0x14]
0050adc8  MOV AL,byte ptr [ECX + 0x14]
0050adcb  MOV byte ptr [ECX + 0x14],DL
0050adce  MOV byte ptr [EBX + 0x14],AL
0050add1  MOV EAX,dword ptr [ESP + 0x10]
0050add5  MOV CL,byte ptr [EAX + 0x14]
0050add8  MOV BL,0x1
0050adda  CMP CL,BL
0050addc  JNZ 0x0050aee1
0050ade2  MOV ECX,dword ptr [EBP + 0x4]
0050ade5  CMP EDI,dword ptr [ECX + 0x4]
0050ade8  JZ 0x0050aede
0050adee  MOV EDI,EDI
0050adf0  CMP byte ptr [EDI + 0x14],BL
0050adf3  JNZ 0x0050aede
0050adf9  MOV EAX,dword ptr [ESI]
0050adfb  CMP EDI,EAX
0050adfd  JNZ 0x0050ae66
0050adff  MOV EAX,dword ptr [ESI + 0x8]
0050ae02  MOV CL,byte ptr [EAX + 0x14]
0050ae05  TEST CL,CL
0050ae07  JNZ 0x0050ae1b
0050ae09  MOV byte ptr [EAX + 0x14],BL
0050ae0c  PUSH ESI
0050ae0d  MOV ECX,EBP
0050ae0f  MOV byte ptr [ESI + 0x14],0x0
0050ae13  CALL 0x00504890
0050ae18  MOV EAX,dword ptr [ESI + 0x8]
0050ae1b  MOV CL,byte ptr [EAX + 0x15]
0050ae1e  TEST CL,CL
0050ae20  JNZ 0x0050ae98
0050ae22  MOV EDX,dword ptr [EAX]
0050ae24  CMP byte ptr [EDX + 0x14],BL
0050ae27  JNZ 0x0050ae31
0050ae29  MOV ECX,dword ptr [EAX + 0x8]
0050ae2c  CMP byte ptr [ECX + 0x14],BL
0050ae2f  JZ 0x0050ae94
0050ae31  MOV ECX,dword ptr [EAX + 0x8]
0050ae34  CMP byte ptr [ECX + 0x14],BL
0050ae37  JNZ 0x0050ae4d
0050ae39  MOV EDX,dword ptr [EAX]
0050ae3b  MOV byte ptr [EDX + 0x14],BL
0050ae3e  PUSH EAX
0050ae3f  MOV ECX,EBP
0050ae41  MOV byte ptr [EAX + 0x14],0x0
0050ae45  CALL 0x005003e0
0050ae4a  MOV EAX,dword ptr [ESI + 0x8]
0050ae4d  MOV CL,byte ptr [ESI + 0x14]
0050ae50  MOV byte ptr [EAX + 0x14],CL
0050ae53  MOV byte ptr [ESI + 0x14],BL
0050ae56  MOV EDX,dword ptr [EAX + 0x8]
0050ae59  PUSH ESI
0050ae5a  MOV ECX,EBP
0050ae5c  MOV byte ptr [EDX + 0x14],BL
0050ae5f  CALL 0x00504890
0050ae64  JMP 0x0050aede
0050ae66  MOV CL,byte ptr [EAX + 0x14]
0050ae69  TEST CL,CL
0050ae6b  JNZ 0x0050ae7e
0050ae6d  MOV byte ptr [EAX + 0x14],BL
0050ae70  PUSH ESI
0050ae71  MOV ECX,EBP
0050ae73  MOV byte ptr [ESI + 0x14],0x0
0050ae77  CALL 0x005003e0
0050ae7c  MOV EAX,dword ptr [ESI]
0050ae7e  MOV CL,byte ptr [EAX + 0x15]
0050ae81  TEST CL,CL
0050ae83  JNZ 0x0050ae98
0050ae85  MOV EDX,dword ptr [EAX + 0x8]
0050ae88  CMP byte ptr [EDX + 0x14],BL
0050ae8b  JNZ 0x0050aead
0050ae8d  MOV ECX,dword ptr [EAX]
0050ae8f  CMP byte ptr [ECX + 0x14],BL
0050ae92  JNZ 0x0050aead
0050ae94  MOV byte ptr [EAX + 0x14],0x0
0050ae98  MOV EDX,dword ptr [EBP + 0x4]
0050ae9b  MOV EAX,dword ptr [EDX + 0x4]
0050ae9e  MOV EDI,ESI
0050aea0  CMP EDI,EAX
0050aea2  MOV ESI,dword ptr [ESI + 0x4]
0050aea5  JNZ 0x0050adf0
0050aeab  JMP 0x0050aede
0050aead  MOV ECX,dword ptr [EAX]
0050aeaf  CMP byte ptr [ECX + 0x14],BL
0050aeb2  JNZ 0x0050aec8
0050aeb4  MOV EDX,dword ptr [EAX + 0x8]
0050aeb7  MOV byte ptr [EDX + 0x14],BL
0050aeba  PUSH EAX
0050aebb  MOV ECX,EBP
0050aebd  MOV byte ptr [EAX + 0x14],0x0
0050aec1  CALL 0x00504890
0050aec6  MOV EAX,dword ptr [ESI]
0050aec8  MOV CL,byte ptr [ESI + 0x14]
0050aecb  MOV byte ptr [EAX + 0x14],CL
0050aece  MOV byte ptr [ESI + 0x14],BL
0050aed1  MOV EDX,dword ptr [EAX]
0050aed3  PUSH ESI
0050aed4  MOV ECX,EBP
0050aed6  MOV byte ptr [EDX + 0x14],BL
0050aed9  CALL 0x005003e0
0050aede  MOV byte ptr [EDI + 0x14],BL
0050aee1  MOV EAX,dword ptr [ESP + 0x10]
0050aee5  PUSH 0x0
0050aee7  PUSH 0x18
0050aee9  PUSH EAX
0050aeea  MOV ECX,0x925b30
0050aeef  CALL 0x005d0370
0050aef4  MOV EAX,dword ptr [EBP + 0x8]
0050aef7  TEST EAX,EAX
0050aef9  POP EDI
0050aefa  POP EBX
0050aefb  JBE 0x0050af01
0050aefd  DEC EAX
0050aefe  MOV dword ptr [EBP + 0x8],EAX
0050af01  MOV ECX,dword ptr [ESP + 0x64]
0050af05  MOV EAX,dword ptr [ESP + 0x60]
0050af09  MOV dword ptr [EAX],ECX
0050af0b  MOV ECX,dword ptr [ESP + 0x50]
0050af0f  POP ESI
0050af10  POP EBP
0050af11  MOV dword ptr FS:[0x0],ECX
0050af18  ADD ESP,0x54
0050af1b  RET 0x8
