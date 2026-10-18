0065be10  PUSH EBX
0065be11  PUSH EBP
0065be12  PUSH ESI
0065be13  PUSH EDI
0065be14  MOV ESI,ECX
0065be16  MOV EBX,0x3f800000
0065be1b  PUSH EBX
0065be1c  MOV EBP,0x1
0065be21  PUSH EBP
0065be22  LEA ECX,[ESI + 0x4]
0065be25  MOV dword ptr [ESI],0x8a8a90
0065be2b  CALL 0x00467a80
0065be30  PUSH EBX
0065be31  PUSH EBP
0065be32  LEA ECX,[ESI + 0x88]
0065be38  CALL 0x00467a80
0065be3d  XOR EDI,EDI
0065be3f  MOV dword ptr [ESI + 0x10c],EDI
0065be45  MOV dword ptr [ESI + 0x110],EDI
0065be4b  MOV dword ptr [ESI + 0x114],EDI
0065be51  MOV dword ptr [ESI + 0x118],EDI
0065be57  MOV dword ptr [ESI + 0x12c],EDI
0065be5d  MOV dword ptr [ESI + 0x130],EBX
0065be63  MOV word ptr [ESI + 0x134],DI
0065be6a  MOV word ptr [ESI + 0x136],BP
0065be71  MOV dword ptr [ESI + 0x11c],EDI
0065be77  MOV dword ptr [ESI + 0x120],EDI
0065be7d  MOV dword ptr [ESI + 0x124],EDI
0065be83  MOV dword ptr [ESI + 0x128],EDI
0065be89  PUSH EDI
0065be8a  MOV dword ptr [ESI + 0x138],EDI
0065be90  MOV dword ptr [ESI + 0x13c],EDI
0065be96  MOV dword ptr [ESI + 0x140],EDI
0065be9c  MOV dword ptr [ESI + 0x144],EDI
0065bea2  MOV dword ptr [ESI + 0x158],EDI
0065bea8  MOV dword ptr [ESI + 0x15c],EBX
0065beae  MOV word ptr [ESI + 0x160],DI
0065beb5  MOV word ptr [ESI + 0x162],BP
0065bebc  MOV dword ptr [ESI + 0x148],EDI
0065bec2  MOV dword ptr [ESI + 0x14c],EDI
0065bec8  MOV dword ptr [ESI + 0x150],EDI
0065bece  MOV dword ptr [ESI + 0x154],EDI
0065bed4  PUSH EDI
0065bed5  PUSH EDI
0065bed6  MOV ECX,ESI
0065bed8  MOV dword ptr [ESI + 0x164],EBX
0065bede  MOV dword ptr [ESI + 0x168],EDI
0065bee4  MOV dword ptr [ESI + 0x16c],EDI
0065beea  CALL 0x0065b8c0
0065beef  PUSH EDI
0065bef0  PUSH EDI
0065bef1  PUSH EDI
0065bef2  CALL 0x0065ba40
0065bef7  PUSH EDI
0065bef8  PUSH EDI
0065bef9  PUSH EDI
0065befa  CALL 0x0065bb50
0065beff  PUSH EDI
0065bf00  PUSH EDI
0065bf01  PUSH EDI
0065bf02  CALL 0x0065bd30
0065bf07  CMP dword ptr [ESI + 0x114],EBX
0065bf0d  MOV dword ptr [ESI + 0x10c],EBX
0065bf13  MOV EBP,0x2
0065bf18  JZ 0x0065bf21
0065bf1a  MOV word ptr [ESI + 0x134],BP
0065bf21  CMP dword ptr [ESI + 0x140],EBX
0065bf27  MOV dword ptr [ESI + 0x138],EBX
0065bf2d  JZ 0x0065bf36
0065bf2f  MOV word ptr [ESI + 0x160],BP
0065bf36  FLD float ptr [ESI + 0x118]
0065bf3c  MOV dword ptr [ESI + 0x110],EDI
0065bf42  FLD float ptr [0x00890968]
0065bf48  FUCOMPP
0065bf4a  FNSTSW AX
0065bf4c  TEST AH,0x44
0065bf4f  JNP 0x0065bf58
0065bf51  MOV word ptr [ESI + 0x134],BP
0065bf58  FLD float ptr [ESI + 0x144]
0065bf5e  MOV dword ptr [ESI + 0x13c],EDI
0065bf64  FLD float ptr [0x00890968]
0065bf6a  FUCOMPP
0065bf6c  FNSTSW AX
0065bf6e  TEST AH,0x44
0065bf71  JNP 0x0065bf7a
0065bf73  MOV word ptr [ESI + 0x160],BP
0065bf7a  PUSH EDI
0065bf7b  PUSH EDI
0065bf7c  PUSH EDI
0065bf7d  MOV ECX,ESI
0065bf7f  MOV dword ptr [ESI + 0x164],EBX
0065bf85  CALL 0x0065b980
0065bf8a  PUSH EDI
0065bf8b  PUSH EDI
0065bf8c  PUSH EDI
0065bf8d  MOV dword ptr [ESI + 0x10],EDI
0065bf90  MOV dword ptr [ESI + 0x3c],EDI
0065bf93  MOV dword ptr [ESI + 0x68],EDI
0065bf96  CALL 0x0065bc40
0065bf9b  CMP dword ptr [ESI + 0x10c],EBX
0065bfa1  MOV dword ptr [ESI + 0x114],EBX
0065bfa7  JZ 0x0065bfb0
0065bfa9  MOV word ptr [ESI + 0x134],BP
0065bfb0  CMP dword ptr [ESI + 0x138],EBX
0065bfb6  MOV dword ptr [ESI + 0x140],EBX
0065bfbc  JZ 0x0065bfc5
0065bfbe  MOV word ptr [ESI + 0x160],BP
0065bfc5  POP EDI
0065bfc6  MOV dword ptr [ESI + 0x28],EBX
0065bfc9  MOV dword ptr [ESI + 0x54],EBX
0065bfcc  MOV dword ptr [ESI + 0x80],EBX
0065bfd2  MOV dword ptr [ESI + 0xac],EBX
0065bfd8  MOV dword ptr [ESI + 0xd8],EBX
0065bfde  MOV dword ptr [ESI + 0x104],EBX
0065bfe4  MOV dword ptr [ESI + 0x130],EBX
0065bfea  MOV dword ptr [ESI + 0x15c],EBX
0065bff0  MOV EAX,ESI
0065bff2  POP ESI
0065bff3  POP EBP
0065bff4  POP EBX
0065bff5  RET
