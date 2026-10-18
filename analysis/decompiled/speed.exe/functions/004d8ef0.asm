004d8ef0  MOV EDX,dword ptr [ECX + 0x24]
004d8ef3  PUSH ESI
004d8ef4  XOR ESI,ESI
004d8ef6  CMP EDX,ESI
004d8ef8  JZ 0x004d8f7e
004d8efe  PUSH EDI
004d8eff  NOP
004d8f00  MOV EAX,dword ptr [EDX + 0x10]
004d8f03  CMP EAX,ESI
004d8f05  JZ 0x004d8f38
004d8f07  XOR EDI,EDI
004d8f09  MOV dword ptr [EAX],EDI
004d8f0b  MOV dword ptr [EAX + 0x4],EDI
004d8f0e  MOV dword ptr [EAX + 0x8],EDI
004d8f11  MOV dword ptr [EAX + 0xc],EDI
004d8f14  MOV dword ptr [EAX + 0x10],EDI
004d8f17  MOV dword ptr [EAX + 0x14],EDI
004d8f1a  MOV dword ptr [EAX + 0x18],EDI
004d8f1d  MOV dword ptr [EAX + 0x1c],EDI
004d8f20  MOV dword ptr [EAX + 0x20],EDI
004d8f23  MOV dword ptr [EAX + 0x24],EDI
004d8f26  MOV dword ptr [EAX + 0x28],EDI
004d8f29  MOV dword ptr [EAX + 0x2c],EDI
004d8f2c  MOV dword ptr [EAX + 0x30],EDI
004d8f2f  MOV dword ptr [EAX + 0x34],EDI
004d8f32  MOV dword ptr [EAX + 0x38],EDI
004d8f35  MOV dword ptr [EAX + 0x3c],EDI
004d8f38  MOV EAX,dword ptr [EDX + 0xc]
004d8f3b  CMP EAX,ESI
004d8f3d  JZ 0x004d8f70
004d8f3f  XOR EDI,EDI
004d8f41  MOV dword ptr [EAX],EDI
004d8f43  MOV dword ptr [EAX + 0x4],EDI
004d8f46  MOV dword ptr [EAX + 0x8],EDI
004d8f49  MOV dword ptr [EAX + 0xc],EDI
004d8f4c  MOV dword ptr [EAX + 0x10],EDI
004d8f4f  MOV dword ptr [EAX + 0x14],EDI
004d8f52  MOV dword ptr [EAX + 0x18],EDI
004d8f55  MOV dword ptr [EAX + 0x1c],EDI
004d8f58  MOV dword ptr [EAX + 0x20],EDI
004d8f5b  MOV dword ptr [EAX + 0x24],EDI
004d8f5e  MOV dword ptr [EAX + 0x28],EDI
004d8f61  MOV dword ptr [EAX + 0x2c],EDI
004d8f64  MOV dword ptr [EAX + 0x30],EDI
004d8f67  MOV dword ptr [EAX + 0x34],EDI
004d8f6a  MOV dword ptr [EAX + 0x38],EDI
004d8f6d  MOV dword ptr [EAX + 0x3c],EDI
004d8f70  MOV dword ptr [EDX + 0xc],ESI
004d8f73  MOV dword ptr [EDX + 0x10],ESI
004d8f76  MOV EDX,dword ptr [EDX + 0x4]
004d8f79  CMP EDX,ESI
004d8f7b  JNZ 0x004d8f00
004d8f7d  POP EDI
004d8f7e  MOV ECX,dword ptr [ECX + 0x20]
004d8f81  CMP ECX,ESI
004d8f83  JZ 0x004d900d
004d8f89  LEA ESP,[ESP]
004d8f90  MOV EAX,dword ptr [ECX + 0x10]
004d8f93  CMP EAX,ESI
004d8f95  JZ 0x004d8fc8
004d8f97  XOR EDX,EDX
004d8f99  MOV dword ptr [EAX],EDX
004d8f9b  MOV dword ptr [EAX + 0x4],EDX
004d8f9e  MOV dword ptr [EAX + 0x8],EDX
004d8fa1  MOV dword ptr [EAX + 0xc],EDX
004d8fa4  MOV dword ptr [EAX + 0x10],EDX
004d8fa7  MOV dword ptr [EAX + 0x14],EDX
004d8faa  MOV dword ptr [EAX + 0x18],EDX
004d8fad  MOV dword ptr [EAX + 0x1c],EDX
004d8fb0  MOV dword ptr [EAX + 0x20],EDX
004d8fb3  MOV dword ptr [EAX + 0x24],EDX
004d8fb6  MOV dword ptr [EAX + 0x28],EDX
004d8fb9  MOV dword ptr [EAX + 0x2c],EDX
004d8fbc  MOV dword ptr [EAX + 0x30],EDX
004d8fbf  MOV dword ptr [EAX + 0x34],EDX
004d8fc2  MOV dword ptr [EAX + 0x38],EDX
004d8fc5  MOV dword ptr [EAX + 0x3c],EDX
004d8fc8  MOV EAX,dword ptr [ECX + 0xc]
004d8fcb  CMP EAX,ESI
004d8fcd  JZ 0x004d9000
004d8fcf  XOR EDX,EDX
004d8fd1  MOV dword ptr [EAX],EDX
004d8fd3  MOV dword ptr [EAX + 0x4],EDX
004d8fd6  MOV dword ptr [EAX + 0x8],EDX
004d8fd9  MOV dword ptr [EAX + 0xc],EDX
004d8fdc  MOV dword ptr [EAX + 0x10],EDX
004d8fdf  MOV dword ptr [EAX + 0x14],EDX
004d8fe2  MOV dword ptr [EAX + 0x18],EDX
004d8fe5  MOV dword ptr [EAX + 0x1c],EDX
004d8fe8  MOV dword ptr [EAX + 0x20],EDX
004d8feb  MOV dword ptr [EAX + 0x24],EDX
004d8fee  MOV dword ptr [EAX + 0x28],EDX
004d8ff1  MOV dword ptr [EAX + 0x2c],EDX
004d8ff4  MOV dword ptr [EAX + 0x30],EDX
004d8ff7  MOV dword ptr [EAX + 0x34],EDX
004d8ffa  MOV dword ptr [EAX + 0x38],EDX
004d8ffd  MOV dword ptr [EAX + 0x3c],EDX
004d9000  MOV dword ptr [ECX + 0x10],ESI
004d9003  MOV dword ptr [ECX + 0xc],ESI
004d9006  MOV ECX,dword ptr [ECX + 0x4]
004d9009  CMP ECX,ESI
004d900b  JNZ 0x004d8f90
004d900d  POP ESI
004d900e  RET
