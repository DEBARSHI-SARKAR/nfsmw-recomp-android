007ddd50  PUSH EBP
007ddd51  MOV EBP,ESP
007ddd53  SUB ESP,0x5c
007ddd56  MOV EAX,dword ptr [EBP + 0x8]
007ddd59  MOV ECX,dword ptr [EAX + 0x8]
007ddd5c  MOV dword ptr [EBP + -0x20],ECX
007ddd5f  MOV EDX,dword ptr [EBP + -0x20]
007ddd62  AND EDX,0x3
007ddd65  JZ 0x007ddd6e
007ddd67  XOR EAX,EAX
007ddd69  JMP 0x007de134
007ddd6e  MOV EAX,FS:[0x18]
007ddd74  MOV dword ptr [EBP + -0x24],EAX
007ddd77  MOV EAX,dword ptr [EBP + -0x24]
007ddd7a  MOV ECX,dword ptr [EBP + -0x20]
007ddd7d  CMP ECX,dword ptr [EAX + 0x8]
007ddd80  JC 0x007ddd94
007ddd82  MOV EDX,dword ptr [EBP + -0x24]
007ddd85  MOV EAX,dword ptr [EBP + -0x20]
007ddd88  CMP EAX,dword ptr [EDX + 0x4]
007ddd8b  JNC 0x007ddd94
007ddd8d  XOR EAX,EAX
007ddd8f  JMP 0x007de134
007ddd94  MOV ECX,dword ptr [EBP + 0x8]
007ddd97  CMP dword ptr [ECX + 0xc],-0x1
007ddd9b  JNZ 0x007ddda7
007ddd9d  MOV EAX,0x1
007ddda2  JMP 0x007de134
007ddda7  MOV dword ptr [EBP + -0x1c],0x0
007dddae  MOV dword ptr [EBP + -0x8],0x0
007dddb5  JMP 0x007dddc0
007dddb7  MOV EDX,dword ptr [EBP + -0x8]
007dddba  ADD EDX,0x1
007dddbd  MOV dword ptr [EBP + -0x8],EDX
007dddc0  MOV EAX,dword ptr [EBP + 0x8]
007dddc3  MOV ECX,dword ptr [EBP + -0x8]
007dddc6  CMP ECX,dword ptr [EAX + 0xc]
007dddc9  JA 0x007dde0a
007dddcb  MOV EDX,dword ptr [EBP + -0x8]
007dddce  IMUL EDX,EDX,0xc
007dddd1  MOV EAX,dword ptr [EBP + -0x20]
007dddd4  MOV ECX,dword ptr [EAX + EDX*0x1]
007dddd7  MOV dword ptr [EBP + -0x58],ECX
007dddda  CMP dword ptr [EBP + -0x58],-0x1
007dddde  JZ 0x007dddef
007ddde0  MOV EDX,dword ptr [EBP + -0x58]
007ddde3  CMP EDX,dword ptr [EBP + -0x8]
007ddde6  JC 0x007dddef
007ddde8  XOR EAX,EAX
007dddea  JMP 0x007de134
007dddef  MOV EAX,dword ptr [EBP + -0x8]
007dddf2  IMUL EAX,EAX,0xc
007dddf5  MOV ECX,dword ptr [EBP + -0x20]
007dddf8  CMP dword ptr [ECX + EAX*0x1 + 0x4],0x0
007dddfd  JZ 0x007dde08
007dddff  MOV EDX,dword ptr [EBP + -0x1c]
007dde02  ADD EDX,0x1
007dde05  MOV dword ptr [EBP + -0x1c],EDX
007dde08  JMP 0x007dddb7
007dde0a  CMP dword ptr [EBP + -0x1c],0x0
007dde0e  JZ 0x007dde30
007dde10  MOV EAX,dword ptr [EBP + 0x8]
007dde13  MOV ECX,dword ptr [EBP + -0x24]
007dde16  MOV EDX,dword ptr [EAX + -0x8]
007dde19  CMP EDX,dword ptr [ECX + 0x8]
007dde1c  JC 0x007dde29
007dde1e  MOV EAX,dword ptr [EBP + 0x8]
007dde21  MOV ECX,dword ptr [EAX + -0x8]
007dde24  CMP ECX,dword ptr [EBP + 0x8]
007dde27  JC 0x007dde30
007dde29  XOR EAX,EAX
007dde2b  JMP 0x007de134
007dde30  MOV EDX,dword ptr [EBP + -0x20]
007dde33  AND EDX,0xfffff000
007dde39  MOV dword ptr [EBP + -0x34],EDX
007dde3c  MOV dword ptr [EBP + -0x30],0x0
007dde43  JMP 0x007dde4e
007dde45  MOV EAX,dword ptr [EBP + -0x30]
007dde48  ADD EAX,0x1
007dde4b  MOV dword ptr [EBP + -0x30],EAX
007dde4e  MOV ECX,dword ptr [EBP + -0x30]
007dde51  CMP ECX,dword ptr [0x009bae90]
007dde57  JGE 0x007ddf6e
007dde5d  MOV EDX,dword ptr [EBP + -0x30]
007dde60  MOV EAX,dword ptr [EDX*0x4 + 0x9bae98]
007dde67  CMP EAX,dword ptr [EBP + -0x34]
007dde6a  JNZ 0x007ddf69
007dde70  CMP dword ptr [EBP + -0x30],0x0
007dde74  JLE 0x007ddf5f
007dde7a  PUSH 0x1
007dde7c  PUSH 0x9baed8
007dde81  CALL dword ptr [0x00890268]
007dde87  TEST EAX,EAX
007dde89  JNZ 0x007ddf5f
007dde8f  MOV ECX,dword ptr [EBP + -0x30]
007dde92  MOV EDX,dword ptr [ECX*0x4 + 0x9bae98]
007dde99  CMP EDX,dword ptr [EBP + -0x34]
007dde9c  JZ 0x007ddf16
007dde9e  MOV EAX,[0x009bae90]
007ddea3  SUB EAX,0x1
007ddea6  MOV dword ptr [EBP + -0x30],EAX
007ddea9  JMP 0x007ddeb4
007ddeab  MOV ECX,dword ptr [EBP + -0x30]
007ddeae  SUB ECX,0x1
007ddeb1  MOV dword ptr [EBP + -0x30],ECX
007ddeb4  CMP dword ptr [EBP + -0x30],0x0
007ddeb8  JL 0x007ddecd
007ddeba  MOV EDX,dword ptr [EBP + -0x30]
007ddebd  MOV EAX,dword ptr [EDX*0x4 + 0x9bae98]
007ddec4  CMP EAX,dword ptr [EBP + -0x34]
007ddec7  JNZ 0x007ddecb
007ddec9  JMP 0x007ddecd
007ddecb  JMP 0x007ddeab
007ddecd  CMP dword ptr [EBP + -0x30],0x0
007dded1  JGE 0x007ddef9
007dded3  CMP dword ptr [0x009bae90],0x10
007ddeda  JGE 0x007ddeeb
007ddedc  MOV ECX,dword ptr [0x009bae90]
007ddee2  ADD ECX,0x1
007ddee5  MOV dword ptr [0x009bae90],ECX
007ddeeb  MOV EDX,dword ptr [0x009bae90]
007ddef1  SUB EDX,0x1
007ddef4  MOV dword ptr [EBP + -0x30],EDX
007ddef7  JMP 0x007ddf16
007ddef9  CMP dword ptr [EBP + -0x30],0x0
007ddefd  JNZ 0x007ddf16
007ddeff  PUSH 0x0
007ddf01  PUSH 0x9baed8
007ddf06  CALL dword ptr [0x00890268]
007ddf0c  MOV EAX,0x1
007ddf11  JMP 0x007de134
007ddf16  MOV dword ptr [EBP + -0x28],0x0
007ddf1d  JMP 0x007ddf28
007ddf1f  MOV EAX,dword ptr [EBP + -0x28]
007ddf22  ADD EAX,0x1
007ddf25  MOV dword ptr [EBP + -0x28],EAX
007ddf28  MOV ECX,dword ptr [EBP + -0x28]
007ddf2b  CMP ECX,dword ptr [EBP + -0x30]
007ddf2e  JG 0x007ddf52
007ddf30  MOV EDX,dword ptr [EBP + -0x28]
007ddf33  MOV EAX,dword ptr [EDX*0x4 + 0x9bae98]
007ddf3a  MOV dword ptr [EBP + -0x18],EAX
007ddf3d  MOV ECX,dword ptr [EBP + -0x28]
007ddf40  MOV EDX,dword ptr [EBP + -0x34]
007ddf43  MOV dword ptr [ECX*0x4 + 0x9bae98],EDX
007ddf4a  MOV EAX,dword ptr [EBP + -0x18]
007ddf4d  MOV dword ptr [EBP + -0x34],EAX
007ddf50  JMP 0x007ddf1f
007ddf52  PUSH 0x0
007ddf54  PUSH 0x9baed8
007ddf59  CALL dword ptr [0x00890268]
007ddf5f  MOV EAX,0x1
007ddf64  JMP 0x007de134
007ddf69  JMP 0x007dde45
007ddf6e  PUSH 0x1c
007ddf70  LEA ECX,[EBP + -0x54]
007ddf73  PUSH ECX
007ddf74  MOV EDX,dword ptr [EBP + -0x20]
007ddf77  PUSH EDX
007ddf78  CALL dword ptr [0x00890264]
007ddf7e  TEST EAX,EAX
007ddf80  JZ 0x007ddf8b
007ddf82  CMP dword ptr [EBP + -0x3c],0x1000000
007ddf89  JZ 0x007ddf93
007ddf8b  OR EAX,0xffffffff
007ddf8e  JMP 0x007de134
007ddf93  MOV EAX,dword ptr [EBP + -0x40]
007ddf96  AND EAX,0xcc
007ddf9b  JNZ 0x007ddfa2
007ddf9d  JMP 0x007de062
007ddfa2  MOV ECX,dword ptr [EBP + -0x50]
007ddfa5  MOV dword ptr [EBP + -0x10],ECX
007ddfa8  MOV EDX,dword ptr [EBP + -0x10]
007ddfab  MOVZX EAX,word ptr [EDX]
007ddfae  CMP EAX,0x5a4d
007ddfb3  JZ 0x007ddfbd
007ddfb5  OR EAX,0xffffffff
007ddfb8  JMP 0x007de134
007ddfbd  MOV ECX,dword ptr [EBP + -0x10]
007ddfc0  MOV EDX,dword ptr [EBP + -0x10]
007ddfc3  ADD EDX,dword ptr [ECX + 0x3c]
007ddfc6  MOV dword ptr [EBP + -0x14],EDX
007ddfc9  MOV EAX,dword ptr [EBP + -0x14]
007ddfcc  CMP dword ptr [EAX],0x4550
007ddfd2  JZ 0x007ddfdc
007ddfd4  OR EAX,0xffffffff
007ddfd7  JMP 0x007de134
007ddfdc  MOV ECX,dword ptr [EBP + -0x14]
007ddfdf  ADD ECX,0x18
007ddfe2  MOV dword ptr [EBP + -0xc],ECX
007ddfe5  MOV EDX,dword ptr [EBP + -0xc]
007ddfe8  MOVZX EAX,word ptr [EDX]
007ddfeb  CMP EAX,0x10b
007ddff0  JZ 0x007ddffa
007ddff2  OR EAX,0xffffffff
007ddff5  JMP 0x007de134
007ddffa  MOV ECX,dword ptr [EBP + -0x20]
007ddffd  SUB ECX,dword ptr [EBP + -0x10]
007de000  MOV dword ptr [EBP + -0x4],ECX
007de003  MOV dword ptr [EBP + -0x2c],0x0
007de00a  MOV EDX,dword ptr [EBP + -0x14]
007de00d  MOVZX EAX,word ptr [EDX + 0x14]
007de011  MOV ECX,dword ptr [EBP + -0x14]
007de014  LEA EDX,[ECX + EAX*0x1 + 0x18]
007de018  MOV dword ptr [EBP + -0x38],EDX
007de01b  MOV EDX,dword ptr [EBP + -0x14]
007de01e  MOVZX EAX,word ptr [EDX + 0x6]
007de022  CMP dword ptr [EBP + -0x2c],EAX
007de025  JNC 0x007de05a
007de027  MOV ECX,dword ptr [EBP + -0x38]
007de02a  MOV EDX,dword ptr [EBP + -0x4]
007de02d  CMP EDX,dword ptr [ECX + 0xc]
007de030  JC 0x007de058
007de032  MOV EAX,dword ptr [EBP + -0x38]
007de035  MOV ECX,dword ptr [EAX + 0xc]
007de038  MOV EDX,dword ptr [EBP + -0x38]
007de03b  ADD ECX,dword ptr [EDX + 0x8]
007de03e  CMP dword ptr [EBP + -0x4],ECX
007de041  JNC 0x007de058
007de043  MOV EAX,dword ptr [EBP + -0x38]
007de046  MOV ECX,dword ptr [EAX + 0x24]
007de049  AND ECX,0x80000000
007de04f  JZ 0x007de058
007de051  XOR EAX,EAX
007de053  JMP 0x007de134
007de058  JMP 0x007de062
007de05a  OR EAX,0xffffffff
007de05d  JMP 0x007de134
007de062  PUSH 0x1
007de064  PUSH 0x9baed8
007de069  CALL dword ptr [0x00890268]
007de06f  TEST EAX,EAX
007de071  JZ 0x007de07d
007de073  MOV EAX,0x1
007de078  JMP 0x007de134
007de07d  MOV EDX,dword ptr [0x009bae90]
007de083  MOV dword ptr [EBP + -0x30],EDX
007de086  JMP 0x007de091
007de088  MOV EAX,dword ptr [EBP + -0x30]
007de08b  SUB EAX,0x1
007de08e  MOV dword ptr [EBP + -0x30],EAX
007de091  CMP dword ptr [EBP + -0x30],0x0
007de095  JLE 0x007de0aa
007de097  MOV ECX,dword ptr [EBP + -0x30]
007de09a  MOV EDX,dword ptr [ECX*0x4 + 0x9bae94]
007de0a1  CMP EDX,dword ptr [EBP + -0x34]
007de0a4  JNZ 0x007de0a8
007de0a6  JMP 0x007de0aa
007de0a8  JMP 0x007de088
007de0aa  CMP dword ptr [EBP + -0x30],0x0
007de0ae  JNZ 0x007de122
007de0b0  CMP dword ptr [0x009bae90],0xf
007de0b7  JLE 0x007de0c2
007de0b9  MOV dword ptr [EBP + -0x5c],0xf
007de0c0  JMP 0x007de0ca
007de0c2  MOV EAX,[0x009bae90]
007de0c7  MOV dword ptr [EBP + -0x5c],EAX
007de0ca  MOV ECX,dword ptr [EBP + -0x5c]
007de0cd  MOV dword ptr [EBP + -0x30],ECX
007de0d0  MOV dword ptr [EBP + -0x28],0x0
007de0d7  JMP 0x007de0e2
007de0d9  MOV EDX,dword ptr [EBP + -0x28]
007de0dc  ADD EDX,0x1
007de0df  MOV dword ptr [EBP + -0x28],EDX
007de0e2  MOV EAX,dword ptr [EBP + -0x28]
007de0e5  CMP EAX,dword ptr [EBP + -0x30]
007de0e8  JG 0x007de10c
007de0ea  MOV ECX,dword ptr [EBP + -0x28]
007de0ed  MOV EDX,dword ptr [ECX*0x4 + 0x9bae98]
007de0f4  MOV dword ptr [EBP + -0x18],EDX
007de0f7  MOV EAX,dword ptr [EBP + -0x28]
007de0fa  MOV ECX,dword ptr [EBP + -0x34]
007de0fd  MOV dword ptr [EAX*0x4 + 0x9bae98],ECX
007de104  MOV EDX,dword ptr [EBP + -0x18]
007de107  MOV dword ptr [EBP + -0x34],EDX
007de10a  JMP 0x007de0d9
007de10c  CMP dword ptr [0x009bae90],0x10
007de113  JGE 0x007de122
007de115  MOV EAX,[0x009bae90]
007de11a  ADD EAX,0x1
007de11d  MOV [0x009bae90],EAX
007de122  PUSH 0x0
007de124  PUSH 0x9baed8
007de129  CALL dword ptr [0x00890268]
007de12f  MOV EAX,0x1
007de134  MOV ESP,EBP
007de136  POP EBP
007de137  RET
