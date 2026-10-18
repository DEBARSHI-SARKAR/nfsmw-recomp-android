007cca20  PUSH EBP
007cca21  MOV EBP,ESP
007cca23  SUB ESP,0x70
007cca26  PUSH 0x82
007cca2b  PUSH 0x8b8cfc
007cca30  PUSH 0x2
007cca32  PUSH 0x480
007cca37  CALL 0x007c6700
007cca3c  ADD ESP,0x10
007cca3f  MOV dword ptr [EBP + -0x64],EAX
007cca42  CMP dword ptr [EBP + -0x64],0x0
007cca46  JNZ 0x007cca50
007cca48  OR EAX,0xffffffff
007cca4b  JMP 0x007ccda1
007cca50  MOV EAX,dword ptr [EBP + -0x64]
007cca53  MOV [0x009c5340],EAX
007cca58  MOV dword ptr [0x009c5320],0x20
007cca62  JMP 0x007cca6d
007cca64  MOV ECX,dword ptr [EBP + -0x64]
007cca67  ADD ECX,0x24
007cca6a  MOV dword ptr [EBP + -0x64],ECX
007cca6d  MOV EDX,dword ptr [0x009c5340]
007cca73  ADD EDX,0x480
007cca79  CMP dword ptr [EBP + -0x64],EDX
007cca7c  JNC 0x007ccaa1
007cca7e  MOV EAX,dword ptr [EBP + -0x64]
007cca81  MOV byte ptr [EAX + 0x4],0x0
007cca85  MOV ECX,dword ptr [EBP + -0x64]
007cca88  MOV dword ptr [ECX],0xffffffff
007cca8e  MOV EDX,dword ptr [EBP + -0x64]
007cca91  MOV byte ptr [EDX + 0x5],0xa
007cca95  MOV EAX,dword ptr [EBP + -0x64]
007cca98  MOV dword ptr [EAX + 0x8],0x0
007cca9f  JMP 0x007cca64
007ccaa1  LEA ECX,[EBP + -0x48]
007ccaa4  PUSH ECX
007ccaa5  CALL dword ptr [0x008901f8]
007ccaab  MOVZX EDX,word ptr [EBP + -0x16]
007ccaaf  TEST EDX,EDX
007ccab1  JZ 0x007ccc6f
007ccab7  CMP dword ptr [EBP + -0x14],0x0
007ccabb  JZ 0x007ccc6f
007ccac1  MOV EAX,dword ptr [EBP + -0x14]
007ccac4  MOV ECX,dword ptr [EAX]
007ccac6  MOV dword ptr [EBP + -0x58],ECX
007ccac9  MOV EDX,dword ptr [EBP + -0x14]
007ccacc  ADD EDX,0x4
007ccacf  MOV dword ptr [EBP + -0x5c],EDX
007ccad2  MOV EAX,dword ptr [EBP + -0x5c]
007ccad5  ADD EAX,dword ptr [EBP + -0x58]
007ccad8  MOV dword ptr [EBP + -0x68],EAX
007ccadb  CMP dword ptr [EBP + -0x58],0x800
007ccae2  JGE 0x007ccaec
007ccae4  MOV ECX,dword ptr [EBP + -0x58]
007ccae7  MOV dword ptr [EBP + -0x6c],ECX
007ccaea  JMP 0x007ccaf3
007ccaec  MOV dword ptr [EBP + -0x6c],0x800
007ccaf3  MOV EDX,dword ptr [EBP + -0x6c]
007ccaf6  MOV dword ptr [EBP + -0x58],EDX
007ccaf9  MOV dword ptr [EBP + -0x4c],0x1
007ccb00  JMP 0x007ccb0b
007ccb02  MOV EAX,dword ptr [EBP + -0x4c]
007ccb05  ADD EAX,0x1
007ccb08  MOV dword ptr [EBP + -0x4c],EAX
007ccb0b  MOV ECX,dword ptr [0x009c5320]
007ccb11  CMP ECX,dword ptr [EBP + -0x58]
007ccb14  JGE 0x007ccbab
007ccb1a  PUSH 0xb7
007ccb1f  PUSH 0x8b8cfc
007ccb24  PUSH 0x2
007ccb26  PUSH 0x480
007ccb2b  CALL 0x007c6700
007ccb30  ADD ESP,0x10
007ccb33  MOV dword ptr [EBP + -0x64],EAX
007ccb36  CMP dword ptr [EBP + -0x64],0x0
007ccb3a  JNZ 0x007ccb47
007ccb3c  MOV EDX,dword ptr [0x009c5320]
007ccb42  MOV dword ptr [EBP + -0x58],EDX
007ccb45  JMP 0x007ccbab
007ccb47  MOV EAX,dword ptr [EBP + -0x4c]
007ccb4a  MOV ECX,dword ptr [EBP + -0x64]
007ccb4d  MOV dword ptr [EAX*0x4 + 0x9c5340],ECX
007ccb54  MOV EDX,dword ptr [0x009c5320]
007ccb5a  ADD EDX,0x20
007ccb5d  MOV dword ptr [0x009c5320],EDX
007ccb63  JMP 0x007ccb6e
007ccb65  MOV EAX,dword ptr [EBP + -0x64]
007ccb68  ADD EAX,0x24
007ccb6b  MOV dword ptr [EBP + -0x64],EAX
007ccb6e  MOV ECX,dword ptr [EBP + -0x4c]
007ccb71  MOV EDX,dword ptr [ECX*0x4 + 0x9c5340]
007ccb78  ADD EDX,0x480
007ccb7e  CMP dword ptr [EBP + -0x64],EDX
007ccb81  JNC 0x007ccba6
007ccb83  MOV EAX,dword ptr [EBP + -0x64]
007ccb86  MOV byte ptr [EAX + 0x4],0x0
007ccb8a  MOV ECX,dword ptr [EBP + -0x64]
007ccb8d  MOV dword ptr [ECX],0xffffffff
007ccb93  MOV EDX,dword ptr [EBP + -0x64]
007ccb96  MOV byte ptr [EDX + 0x5],0xa
007ccb9a  MOV EAX,dword ptr [EBP + -0x64]
007ccb9d  MOV dword ptr [EAX + 0x8],0x0
007ccba4  JMP 0x007ccb65
007ccba6  JMP 0x007ccb02
007ccbab  MOV dword ptr [EBP + -0x54],0x0
007ccbb2  JMP 0x007ccbcf
007ccbb4  MOV ECX,dword ptr [EBP + -0x54]
007ccbb7  ADD ECX,0x1
007ccbba  MOV dword ptr [EBP + -0x54],ECX
007ccbbd  MOV EDX,dword ptr [EBP + -0x5c]
007ccbc0  ADD EDX,0x1
007ccbc3  MOV dword ptr [EBP + -0x5c],EDX
007ccbc6  MOV EAX,dword ptr [EBP + -0x68]
007ccbc9  ADD EAX,0x4
007ccbcc  MOV dword ptr [EBP + -0x68],EAX
007ccbcf  MOV ECX,dword ptr [EBP + -0x54]
007ccbd2  CMP ECX,dword ptr [EBP + -0x58]
007ccbd5  JGE 0x007ccc6f
007ccbdb  MOV EDX,dword ptr [EBP + -0x68]
007ccbde  CMP dword ptr [EDX],-0x1
007ccbe1  JZ 0x007ccc6a
007ccbe7  MOV EAX,dword ptr [EBP + -0x5c]
007ccbea  MOVSX ECX,byte ptr [EAX]
007ccbed  AND ECX,0x1
007ccbf0  JZ 0x007ccc6a
007ccbf2  MOV EDX,dword ptr [EBP + -0x5c]
007ccbf5  MOVSX EAX,byte ptr [EDX]
007ccbf8  AND EAX,0x8
007ccbfb  JNZ 0x007ccc0d
007ccbfd  MOV ECX,dword ptr [EBP + -0x68]
007ccc00  MOV EDX,dword ptr [ECX]
007ccc02  PUSH EDX
007ccc03  CALL dword ptr [0x008901f4]
007ccc09  TEST EAX,EAX
007ccc0b  JZ 0x007ccc6a
007ccc0d  MOV EAX,dword ptr [EBP + -0x54]
007ccc10  SAR EAX,0x5
007ccc13  MOV ECX,dword ptr [EBP + -0x54]
007ccc16  AND ECX,0x1f
007ccc19  IMUL ECX,ECX,0x24
007ccc1c  ADD ECX,dword ptr [EAX*0x4 + 0x9c5340]
007ccc23  MOV dword ptr [EBP + -0x64],ECX
007ccc26  MOV EDX,dword ptr [EBP + -0x64]
007ccc29  MOV EAX,dword ptr [EBP + -0x68]
007ccc2c  MOV ECX,dword ptr [EAX]
007ccc2e  MOV dword ptr [EDX],ECX
007ccc30  MOV EDX,dword ptr [EBP + -0x64]
007ccc33  MOV EAX,dword ptr [EBP + -0x5c]
007ccc36  MOV CL,byte ptr [EAX]
007ccc38  MOV byte ptr [EDX + 0x4],CL
007ccc3b  PUSH 0xfa0
007ccc40  MOV EDX,dword ptr [EBP + -0x64]
007ccc43  ADD EDX,0xc
007ccc46  PUSH EDX
007ccc47  CALL 0x007ddc30
007ccc4c  ADD ESP,0x8
007ccc4f  TEST EAX,EAX
007ccc51  JNZ 0x007ccc5b
007ccc53  OR EAX,0xffffffff
007ccc56  JMP 0x007ccda1
007ccc5b  MOV EAX,dword ptr [EBP + -0x64]
007ccc5e  MOV ECX,dword ptr [EAX + 0x8]
007ccc61  ADD ECX,0x1
007ccc64  MOV EDX,dword ptr [EBP + -0x64]
007ccc67  MOV dword ptr [EDX + 0x8],ECX
007ccc6a  JMP 0x007ccbb4
007ccc6f  MOV dword ptr [EBP + -0x54],0x0
007ccc76  JMP 0x007ccc81
007ccc78  MOV EAX,dword ptr [EBP + -0x54]
007ccc7b  ADD EAX,0x1
007ccc7e  MOV dword ptr [EBP + -0x54],EAX
007ccc81  CMP dword ptr [EBP + -0x54],0x3
007ccc85  JGE 0x007ccd93
007ccc8b  MOV ECX,dword ptr [EBP + -0x54]
007ccc8e  IMUL ECX,ECX,0x24
007ccc91  ADD ECX,dword ptr [0x009c5340]
007ccc97  MOV dword ptr [EBP + -0x64],ECX
007ccc9a  MOV EDX,dword ptr [EBP + -0x64]
007ccc9d  CMP dword ptr [EDX],-0x1
007ccca0  JNZ 0x007ccd7b
007ccca6  MOV EAX,dword ptr [EBP + -0x64]
007ccca9  MOV byte ptr [EAX + 0x4],0x81
007cccad  CMP dword ptr [EBP + -0x54],0x0
007cccb1  JNZ 0x007cccbc
007cccb3  MOV dword ptr [EBP + -0x70],0xfffffff6
007cccba  JMP 0x007ccccc
007cccbc  MOV ECX,dword ptr [EBP + -0x54]
007cccbf  SUB ECX,0x1
007cccc2  NEG ECX
007cccc4  SBB ECX,ECX
007cccc6  ADD ECX,-0xb
007cccc9  MOV dword ptr [EBP + -0x70],ECX
007ccccc  MOV EDX,dword ptr [EBP + -0x70]
007ccccf  PUSH EDX
007cccd0  CALL dword ptr [0x008901f0]
007cccd6  MOV dword ptr [EBP + -0x60],EAX
007cccd9  CMP dword ptr [EBP + -0x60],-0x1
007cccdd  JZ 0x007ccd69
007ccce3  MOV EAX,dword ptr [EBP + -0x60]
007ccce6  PUSH EAX
007ccce7  CALL dword ptr [0x008901f4]
007ccced  MOV dword ptr [EBP + -0x50],EAX
007cccf0  CMP dword ptr [EBP + -0x50],0x0
007cccf4  JZ 0x007ccd69
007cccf6  MOV ECX,dword ptr [EBP + -0x64]
007cccf9  MOV EDX,dword ptr [EBP + -0x60]
007cccfc  MOV dword ptr [ECX],EDX
007cccfe  MOV EAX,dword ptr [EBP + -0x50]
007ccd01  AND EAX,0xff
007ccd06  CMP EAX,0x2
007ccd09  JNZ 0x007ccd1d
007ccd0b  MOV ECX,dword ptr [EBP + -0x64]
007ccd0e  MOVSX EDX,byte ptr [ECX + 0x4]
007ccd12  OR EDX,0x40
007ccd15  MOV EAX,dword ptr [EBP + -0x64]
007ccd18  MOV byte ptr [EAX + 0x4],DL
007ccd1b  JMP 0x007ccd3b
007ccd1d  MOV ECX,dword ptr [EBP + -0x50]
007ccd20  AND ECX,0xff
007ccd26  CMP ECX,0x3
007ccd29  JNZ 0x007ccd3b
007ccd2b  MOV EDX,dword ptr [EBP + -0x64]
007ccd2e  MOVSX EAX,byte ptr [EDX + 0x4]
007ccd32  OR EAX,0x8
007ccd35  MOV ECX,dword ptr [EBP + -0x64]
007ccd38  MOV byte ptr [ECX + 0x4],AL
007ccd3b  PUSH 0xfa0
007ccd40  MOV EDX,dword ptr [EBP + -0x64]
007ccd43  ADD EDX,0xc
007ccd46  PUSH EDX
007ccd47  CALL 0x007ddc30
007ccd4c  ADD ESP,0x8
007ccd4f  TEST EAX,EAX
007ccd51  JNZ 0x007ccd58
007ccd53  OR EAX,0xffffffff
007ccd56  JMP 0x007ccda1
007ccd58  MOV EAX,dword ptr [EBP + -0x64]
007ccd5b  MOV ECX,dword ptr [EAX + 0x8]
007ccd5e  ADD ECX,0x1
007ccd61  MOV EDX,dword ptr [EBP + -0x64]
007ccd64  MOV dword ptr [EDX + 0x8],ECX
007ccd67  JMP 0x007ccd79
007ccd69  MOV EAX,dword ptr [EBP + -0x64]
007ccd6c  MOVSX ECX,byte ptr [EAX + 0x4]
007ccd70  OR ECX,0x40
007ccd73  MOV EDX,dword ptr [EBP + -0x64]
007ccd76  MOV byte ptr [EDX + 0x4],CL
007ccd79  JMP 0x007ccd8e
007ccd7b  MOV EAX,dword ptr [EBP + -0x64]
007ccd7e  MOVSX ECX,byte ptr [EAX + 0x4]
007ccd82  OR ECX,0x80
007ccd88  MOV EDX,dword ptr [EBP + -0x64]
007ccd8b  MOV byte ptr [EDX + 0x4],CL
007ccd8e  JMP 0x007ccc78
007ccd93  MOV EAX,[0x009c5320]
007ccd98  PUSH EAX
007ccd99  CALL dword ptr [0x008901ec]
007ccd9f  XOR EAX,EAX
007ccda1  MOV ESP,EBP
007ccda3  POP EBP
007ccda4  RET
