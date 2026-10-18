007e05d0  PUSH EBP
007e05d1  MOV EBP,ESP
007e05d3  PUSH -0x1
007e05d5  PUSH 0x8be078
007e05da  PUSH 0x7cd5e4
007e05df  MOV EAX,FS:[0x0]
007e05e5  PUSH EAX
007e05e6  MOV dword ptr FS:[0x0],ESP
007e05ed  ADD ESP,-0x68
007e05f0  PUSH EBX
007e05f1  PUSH ESI
007e05f2  PUSH EDI
007e05f3  MOV dword ptr [EBP + -0x18],ESP
007e05f6  MOV EAX,dword ptr [EBP + 0xc]
007e05f9  MOV dword ptr [EBP + -0x54],EAX
007e05fc  CMP dword ptr [EBP + -0x54],0x0
007e0600  JZ 0x007e060a
007e0602  CMP dword ptr [EBP + -0x54],0x1
007e0606  JZ 0x007e0618
007e0608  JMP 0x007e0626
007e060a  MOV ECX,dword ptr [EBP + 0x1c]
007e060d  MOV EDX,dword ptr [ECX + 0xa0]
007e0613  MOV dword ptr [EBP + -0x24],EDX
007e0616  JMP 0x007e0632
007e0618  MOV EAX,dword ptr [EBP + 0x1c]
007e061b  MOV ECX,dword ptr [EAX + 0xa4]
007e0621  MOV dword ptr [EBP + -0x24],ECX
007e0624  JMP 0x007e0632
007e0626  MOV EDX,dword ptr [EBP + 0x1c]
007e0629  MOV EAX,dword ptr [EDX + 0xa8]
007e062f  MOV dword ptr [EBP + -0x24],EAX
007e0632  MOV ECX,dword ptr [EBP + 0x1c]
007e0635  CMP dword ptr [ECX + 0xb0],0x1
007e063c  JZ 0x007e07e4
007e0642  CMP dword ptr [EBP + 0xc],0x2
007e0646  JZ 0x007e0653
007e0648  MOV EDX,dword ptr [0x00890274]
007e064e  MOV dword ptr [EBP + -0x48],EDX
007e0651  JMP 0x007e065b
007e0653  MOV EAX,[0x00890270]
007e0658  MOV dword ptr [EBP + -0x48],EAX
007e065b  MOV ECX,dword ptr [EBP + 0x10]
007e065e  MOV EDX,dword ptr [ECX + 0x14]
007e0661  ADD EDX,0x76c
007e0667  MOV word ptr [EBP + -0x44],DX
007e066b  MOV EAX,dword ptr [EBP + 0x10]
007e066e  MOV ECX,dword ptr [EAX + 0x10]
007e0671  ADD ECX,0x1
007e0674  MOV word ptr [EBP + -0x42],CX
007e0678  MOV EDX,dword ptr [EBP + 0x10]
007e067b  MOV AX,word ptr [EDX + 0xc]
007e067f  MOV word ptr [EBP + -0x3e],AX
007e0683  MOV ECX,dword ptr [EBP + 0x10]
007e0686  MOV DX,word ptr [ECX + 0x8]
007e068a  MOV word ptr [EBP + -0x3c],DX
007e068e  MOV EAX,dword ptr [EBP + 0x10]
007e0691  MOV CX,word ptr [EAX + 0x4]
007e0695  MOV word ptr [EBP + -0x3a],CX
007e0699  MOV EDX,dword ptr [EBP + 0x10]
007e069c  MOV AX,word ptr [EDX]
007e069f  MOV word ptr [EBP + -0x38],AX
007e06a3  MOV word ptr [EBP + -0x36],0x0
007e06a9  PUSH 0x0
007e06ab  PUSH 0x0
007e06ad  MOV ECX,dword ptr [EBP + -0x24]
007e06b0  PUSH ECX
007e06b1  LEA EDX,[EBP + -0x44]
007e06b4  PUSH EDX
007e06b5  PUSH 0x0
007e06b7  MOV EAX,dword ptr [EBP + 0x1c]
007e06ba  MOV ECX,dword ptr [EAX + 0xac]
007e06c0  PUSH ECX
007e06c1  CALL dword ptr [EBP + -0x48]
007e06c4  MOV dword ptr [EBP + -0x34],EAX
007e06c7  CMP dword ptr [EBP + -0x34],0x0
007e06cb  JZ 0x007e07e4
007e06d1  MOV dword ptr [EBP + -0x4c],0x0
007e06d8  MOV dword ptr [EBP + -0x4],0x0
007e06df  MOV EAX,dword ptr [EBP + -0x34]
007e06e2  ADD EAX,0x3
007e06e5  AND EAX,0xfffffffc
007e06e8  CALL 0x007c94b0
007e06ed  MOV dword ptr [EBP + -0x58],ESP
007e06f0  MOV dword ptr [EBP + -0x18],ESP
007e06f3  MOV EDX,dword ptr [EBP + -0x58]
007e06f6  MOV dword ptr [EBP + -0x50],EDX
007e06f9  MOV dword ptr [EBP + -0x4],0xffffffff
007e0700  JMP 0x007e071e
007e071e  CMP dword ptr [EBP + -0x50],0x0
007e0722  JNZ 0x007e074c
007e0724  PUSH 0x3c8
007e0729  PUSH 0x8bdf70
007e072e  PUSH 0x2
007e0730  MOV EAX,dword ptr [EBP + -0x34]
007e0733  PUSH EAX
007e0734  CALL 0x007c6700
007e0739  ADD ESP,0x10
007e073c  MOV dword ptr [EBP + -0x50],EAX
007e073f  CMP dword ptr [EBP + -0x50],0x0
007e0743  JZ 0x007e074c
007e0745  MOV dword ptr [EBP + -0x4c],0x1
007e074c  CMP dword ptr [EBP + -0x50],0x0
007e0750  JZ 0x007e07e4
007e0756  MOV ECX,dword ptr [EBP + -0x34]
007e0759  PUSH ECX
007e075a  MOV EDX,dword ptr [EBP + -0x50]
007e075d  PUSH EDX
007e075e  MOV EAX,dword ptr [EBP + -0x24]
007e0761  PUSH EAX
007e0762  LEA ECX,[EBP + -0x44]
007e0765  PUSH ECX
007e0766  PUSH 0x0
007e0768  MOV EDX,dword ptr [EBP + 0x1c]
007e076b  MOV EAX,dword ptr [EDX + 0xac]
007e0771  PUSH EAX
007e0772  CALL dword ptr [EBP + -0x48]
007e0775  MOV dword ptr [EBP + -0x34],EAX
007e0778  MOV ECX,dword ptr [EBP + -0x50]
007e077b  MOV dword ptr [EBP + -0x1c],ECX
007e077e  MOV EDX,dword ptr [EBP + -0x34]
007e0781  SUB EDX,0x1
007e0784  MOV dword ptr [EBP + -0x34],EDX
007e0787  CMP dword ptr [EBP + -0x34],0x0
007e078b  JLE 0x007e07c6
007e078d  MOV EAX,dword ptr [EBP + 0x18]
007e0790  CMP dword ptr [EAX],0x0
007e0793  JBE 0x007e07c6
007e0795  MOV ECX,dword ptr [EBP + 0x14]
007e0798  MOV EDX,dword ptr [ECX]
007e079a  MOV EAX,dword ptr [EBP + -0x1c]
007e079d  MOV CL,byte ptr [EAX]
007e079f  MOV byte ptr [EDX],CL
007e07a1  MOV EDX,dword ptr [EBP + 0x14]
007e07a4  MOV EAX,dword ptr [EDX]
007e07a6  ADD EAX,0x1
007e07a9  MOV ECX,dword ptr [EBP + 0x14]
007e07ac  MOV dword ptr [ECX],EAX
007e07ae  MOV EDX,dword ptr [EBP + -0x1c]
007e07b1  ADD EDX,0x1
007e07b4  MOV dword ptr [EBP + -0x1c],EDX
007e07b7  MOV EAX,dword ptr [EBP + 0x18]
007e07ba  MOV ECX,dword ptr [EAX]
007e07bc  SUB ECX,0x1
007e07bf  MOV EDX,dword ptr [EBP + 0x18]
007e07c2  MOV dword ptr [EDX],ECX
007e07c4  JMP 0x007e077e
007e07c6  CMP dword ptr [EBP + -0x4c],0x0
007e07ca  JZ 0x007e07da
007e07cc  PUSH 0x2
007e07ce  MOV EAX,dword ptr [EBP + -0x50]
007e07d1  PUSH EAX
007e07d2  CALL 0x007c7290
007e07d7  ADD ESP,0x8
007e07da  MOV EAX,0x1
007e07df  JMP 0x007e0dc3
007e07e4  MOV ECX,dword ptr [EBP + -0x24]
007e07e7  MOVSX EDX,byte ptr [ECX]
007e07ea  TEST EDX,EDX
007e07ec  JZ 0x007e0dbe
007e07f2  MOV EAX,dword ptr [EBP + 0x18]
007e07f5  CMP dword ptr [EAX],0x0
007e07f8  JZ 0x007e0dbe
007e07fe  MOV byte ptr [EBP + -0x29],0x0
007e0802  MOV dword ptr [EBP + -0x30],0x0
007e0809  MOV dword ptr [EBP + -0x20],0x0
007e0810  MOV ECX,dword ptr [EBP + -0x24]
007e0813  MOV dword ptr [EBP + -0x1c],ECX
007e0816  JMP 0x007e0821
007e0818  MOV EDX,dword ptr [EBP + -0x20]
007e081b  ADD EDX,0x1
007e081e  MOV dword ptr [EBP + -0x20],EDX
007e0821  MOV EAX,dword ptr [EBP + -0x24]
007e0824  MOVSX ECX,byte ptr [EAX]
007e0827  MOV EDX,dword ptr [EBP + -0x1c]
007e082a  MOVSX EAX,byte ptr [EDX]
007e082d  MOV EDX,dword ptr [EBP + -0x1c]
007e0830  ADD EDX,0x1
007e0833  MOV dword ptr [EBP + -0x1c],EDX
007e0836  CMP EAX,ECX
007e0838  JNZ 0x007e083c
007e083a  JMP 0x007e0818
007e083c  MOV EAX,dword ptr [EBP + -0x1c]
007e083f  SUB EAX,0x1
007e0842  MOV dword ptr [EBP + -0x1c],EAX
007e0845  MOV ECX,dword ptr [EBP + -0x24]
007e0848  MOVSX EDX,byte ptr [ECX]
007e084b  MOV dword ptr [EBP + -0x5c],EDX
007e084e  MOV EAX,dword ptr [EBP + -0x5c]
007e0851  SUB EAX,0x27
007e0854  MOV dword ptr [EBP + -0x5c],EAX
007e0857  CMP dword ptr [EBP + -0x5c],0x52
007e085b  JA 0x007e0cc5
007e0861  MOV ECX,dword ptr [EBP + -0x5c]
007e0864  MOVZX EDX,byte ptr [ECX + 0x7e0e06]
007e086b  JMP dword ptr [EDX*0x4 + 0x7e0dda]
007e0872  MOV EAX,dword ptr [EBP + -0x20]
007e0875  MOV dword ptr [EBP + -0x60],EAX
007e0878  MOV ECX,dword ptr [EBP + -0x60]
007e087b  SUB ECX,0x1
007e087e  MOV dword ptr [EBP + -0x60],ECX
007e0881  CMP dword ptr [EBP + -0x60],0x3
007e0885  JA 0x007e08a8
007e0887  MOV EDX,dword ptr [EBP + -0x60]
007e088a  JMP dword ptr [EDX*0x4 + 0x7e0e59]
007e0891  MOV dword ptr [EBP + -0x30],0x1
007e0898  MOV byte ptr [EBP + -0x29],0x6d
007e089c  JMP 0x007e08a8
007e089e  MOV byte ptr [EBP + -0x29],0x62
007e08a2  JMP 0x007e08a8
007e08a4  MOV byte ptr [EBP + -0x29],0x42
007e08a8  JMP 0x007e0cc5
007e08ad  MOV EAX,dword ptr [EBP + -0x20]
007e08b0  MOV dword ptr [EBP + -0x64],EAX
007e08b3  MOV ECX,dword ptr [EBP + -0x64]
007e08b6  SUB ECX,0x1
007e08b9  MOV dword ptr [EBP + -0x64],ECX
007e08bc  CMP dword ptr [EBP + -0x64],0x3
007e08c0  JA 0x007e08e3
007e08c2  MOV EDX,dword ptr [EBP + -0x64]
007e08c5  JMP dword ptr [EDX*0x4 + 0x7e0e69]
007e08cc  MOV dword ptr [EBP + -0x30],0x1
007e08d3  MOV byte ptr [EBP + -0x29],0x64
007e08d7  JMP 0x007e08e3
007e08d9  MOV byte ptr [EBP + -0x29],0x61
007e08dd  JMP 0x007e08e3
007e08df  MOV byte ptr [EBP + -0x29],0x41
007e08e3  JMP 0x007e0cc5
007e08e8  MOV EAX,dword ptr [EBP + -0x20]
007e08eb  MOV dword ptr [EBP + -0x68],EAX
007e08ee  CMP dword ptr [EBP + -0x68],0x2
007e08f2  JZ 0x007e08fc
007e08f4  CMP dword ptr [EBP + -0x68],0x4
007e08f8  JZ 0x007e0902
007e08fa  JMP 0x007e0906
007e08fc  MOV byte ptr [EBP + -0x29],0x79
007e0900  JMP 0x007e0906
007e0902  MOV byte ptr [EBP + -0x29],0x59
007e0906  JMP 0x007e0cc5
007e090b  MOV ECX,dword ptr [EBP + -0x20]
007e090e  MOV dword ptr [EBP + -0x6c],ECX
007e0911  CMP dword ptr [EBP + -0x6c],0x1
007e0915  JZ 0x007e091f
007e0917  CMP dword ptr [EBP + -0x6c],0x2
007e091b  JZ 0x007e0926
007e091d  JMP 0x007e092a
007e091f  MOV dword ptr [EBP + -0x30],0x1
007e0926  MOV byte ptr [EBP + -0x29],0x49
007e092a  JMP 0x007e0cc5
007e092f  MOV EDX,dword ptr [EBP + -0x20]
007e0932  MOV dword ptr [EBP + -0x70],EDX
007e0935  CMP dword ptr [EBP + -0x70],0x1
007e0939  JZ 0x007e0943
007e093b  CMP dword ptr [EBP + -0x70],0x2
007e093f  JZ 0x007e094a
007e0941  JMP 0x007e094e
007e0943  MOV dword ptr [EBP + -0x30],0x1
007e094a  MOV byte ptr [EBP + -0x29],0x48
007e094e  JMP 0x007e0cc5
007e0953  MOV EAX,dword ptr [EBP + -0x20]
007e0956  MOV dword ptr [EBP + -0x74],EAX
007e0959  CMP dword ptr [EBP + -0x74],0x1
007e095d  JZ 0x007e0967
007e095f  CMP dword ptr [EBP + -0x74],0x2
007e0963  JZ 0x007e096e
007e0965  JMP 0x007e0972
007e0967  MOV dword ptr [EBP + -0x30],0x1
007e096e  MOV byte ptr [EBP + -0x29],0x4d
007e0972  JMP 0x007e0cc5
007e0977  MOV ECX,dword ptr [EBP + -0x20]
007e097a  MOV dword ptr [EBP + -0x78],ECX
007e097d  CMP dword ptr [EBP + -0x78],0x1
007e0981  JZ 0x007e098b
007e0983  CMP dword ptr [EBP + -0x78],0x2
007e0987  JZ 0x007e0992
007e0989  JMP 0x007e0996
007e098b  MOV dword ptr [EBP + -0x30],0x1
007e0992  MOV byte ptr [EBP + -0x29],0x53
007e0996  JMP 0x007e0cc5
007e099b  PUSH 0x8be070
007e09a0  MOV EDX,dword ptr [EBP + -0x24]
007e09a3  PUSH EDX
007e09a4  CALL 0x007e6380
007e09a9  ADD ESP,0x8
007e09ac  TEST EAX,EAX
007e09ae  JNZ 0x007e09bb
007e09b0  MOV EAX,dword ptr [EBP + -0x24]
007e09b3  ADD EAX,0x5
007e09b6  MOV dword ptr [EBP + -0x1c],EAX
007e09b9  JMP 0x007e09d9
007e09bb  PUSH 0x8be06c
007e09c0  MOV ECX,dword ptr [EBP + -0x24]
007e09c3  PUSH ECX
007e09c4  CALL 0x007e6380
007e09c9  ADD ESP,0x8
007e09cc  TEST EAX,EAX
007e09ce  JNZ 0x007e09d9
007e09d0  MOV EDX,dword ptr [EBP + -0x24]
007e09d3  ADD EDX,0x3
007e09d6  MOV dword ptr [EBP + -0x1c],EDX
007e09d9  MOV byte ptr [EBP + -0x29],0x70
007e09dd  JMP 0x007e0cc5
007e09e2  MOV EAX,dword ptr [EBP + 0x10]
007e09e5  CMP dword ptr [EAX + 0x8],0xb
007e09e9  JG 0x007e09f9
007e09eb  MOV ECX,dword ptr [EBP + 0x1c]
007e09ee  MOV EDX,dword ptr [ECX + 0x98]
007e09f4  MOV dword ptr [EBP + -0x28],EDX
007e09f7  JMP 0x007e0a05
007e09f9  MOV EAX,dword ptr [EBP + 0x1c]
007e09fc  MOV ECX,dword ptr [EAX + 0x9c]
007e0a02  MOV dword ptr [EBP + -0x28],ECX
007e0a05  CMP dword ptr [EBP + -0x20],0x1
007e0a09  JNZ 0x007e0ad5
007e0a0f  MOV EDX,dword ptr [EBP + 0x18]
007e0a12  CMP dword ptr [EDX],0x0
007e0a15  JBE 0x007e0ad5
007e0a1b  MOV EAX,dword ptr [EBP + -0x28]
007e0a1e  MOVZX ECX,byte ptr [EAX]
007e0a21  MOV EDX,dword ptr [EBP + 0x8]
007e0a24  MOV EAX,dword ptr [EDX + 0x48]
007e0a27  MOVZX ECX,word ptr [EAX + ECX*0x2]
007e0a2b  AND ECX,0x8000
007e0a31  JZ 0x007e0aa1
007e0a33  MOV EDX,dword ptr [EBP + 0x18]
007e0a36  CMP dword ptr [EDX],0x1
007e0a39  JBE 0x007e0aa1
007e0a3b  MOV EAX,dword ptr [EBP + -0x28]
007e0a3e  MOVSX ECX,byte ptr [EAX + 0x1]
007e0a42  TEST ECX,ECX
007e0a44  JNZ 0x007e0a72
007e0a46  XOR EDX,EDX
007e0a48  JNZ 0x007e0a6b
007e0a4a  PUSH 0x8be028
007e0a4f  PUSH 0x0
007e0a51  PUSH 0x438
007e0a56  PUSH 0x8bdf70
007e0a5b  PUSH 0x2
007e0a5d  CALL 0x007d2670
007e0a62  ADD ESP,0x14
007e0a65  CMP EAX,0x1
007e0a68  JNZ 0x007e0a6b
007e0a6a  INT3
007e0a6b  XOR EAX,EAX
007e0a6d  JMP 0x007e0dc3
007e0a72  MOV ECX,dword ptr [EBP + 0x14]
007e0a75  MOV EDX,dword ptr [ECX]
007e0a77  MOV EAX,dword ptr [EBP + -0x28]
007e0a7a  MOV CL,byte ptr [EAX]
007e0a7c  MOV byte ptr [EDX],CL
007e0a7e  MOV EDX,dword ptr [EBP + 0x14]
007e0a81  MOV EAX,dword ptr [EDX]
007e0a83  ADD EAX,0x1
007e0a86  MOV ECX,dword ptr [EBP + 0x14]
007e0a89  MOV dword ptr [ECX],EAX
007e0a8b  MOV EDX,dword ptr [EBP + -0x28]
007e0a8e  ADD EDX,0x1
007e0a91  MOV dword ptr [EBP + -0x28],EDX
007e0a94  MOV EAX,dword ptr [EBP + 0x18]
007e0a97  MOV ECX,dword ptr [EAX]
007e0a99  SUB ECX,0x1
007e0a9c  MOV EDX,dword ptr [EBP + 0x18]
007e0a9f  MOV dword ptr [EDX],ECX
007e0aa1  MOV EAX,dword ptr [EBP + 0x14]
007e0aa4  MOV ECX,dword ptr [EAX]
007e0aa6  MOV EDX,dword ptr [EBP + -0x28]
007e0aa9  MOV AL,byte ptr [EDX]
007e0aab  MOV byte ptr [ECX],AL
007e0aad  MOV ECX,dword ptr [EBP + 0x14]
007e0ab0  MOV EDX,dword ptr [ECX]
007e0ab2  ADD EDX,0x1
007e0ab5  MOV EAX,dword ptr [EBP + 0x14]
007e0ab8  MOV dword ptr [EAX],EDX
007e0aba  MOV ECX,dword ptr [EBP + -0x28]
007e0abd  ADD ECX,0x1
007e0ac0  MOV dword ptr [EBP + -0x28],ECX
007e0ac3  MOV EDX,dword ptr [EBP + 0x18]
007e0ac6  MOV EAX,dword ptr [EDX]
007e0ac8  SUB EAX,0x1
007e0acb  MOV ECX,dword ptr [EBP + 0x18]
007e0ace  MOV dword ptr [ECX],EAX
007e0ad0  JMP 0x007e0ba8
007e0ad5  MOV EDX,dword ptr [EBP + -0x28]
007e0ad8  MOVSX EAX,byte ptr [EDX]
007e0adb  TEST EAX,EAX
007e0add  JZ 0x007e0ba8
007e0ae3  MOV ECX,dword ptr [EBP + 0x18]
007e0ae6  CMP dword ptr [ECX],0x0
007e0ae9  JBE 0x007e0ba8
007e0aef  MOV EDX,dword ptr [EBP + -0x28]
007e0af2  MOVZX EAX,byte ptr [EDX]
007e0af5  MOV ECX,dword ptr [EBP + 0x8]
007e0af8  MOV EDX,dword ptr [ECX + 0x48]
007e0afb  MOVZX EAX,word ptr [EDX + EAX*0x2]
007e0aff  AND EAX,0x8000
007e0b04  JZ 0x007e0b74
007e0b06  MOV ECX,dword ptr [EBP + 0x18]
007e0b09  CMP dword ptr [ECX],0x1
007e0b0c  JBE 0x007e0b74
007e0b0e  MOV EDX,dword ptr [EBP + -0x28]
007e0b11  MOVSX EAX,byte ptr [EDX + 0x1]
007e0b15  TEST EAX,EAX
007e0b17  JNZ 0x007e0b45
007e0b19  XOR ECX,ECX
007e0b1b  JNZ 0x007e0b3e
007e0b1d  PUSH 0x8be028
007e0b22  PUSH 0x0
007e0b24  PUSH 0x44f
007e0b29  PUSH 0x8bdf70
007e0b2e  PUSH 0x2
007e0b30  CALL 0x007d2670
007e0b35  ADD ESP,0x14
007e0b38  CMP EAX,0x1
007e0b3b  JNZ 0x007e0b3e
007e0b3d  INT3
007e0b3e  XOR EAX,EAX
007e0b40  JMP 0x007e0dc3
007e0b45  MOV EAX,dword ptr [EBP + 0x14]
007e0b48  MOV ECX,dword ptr [EAX]
007e0b4a  MOV EDX,dword ptr [EBP + -0x28]
007e0b4d  MOV AL,byte ptr [EDX]
007e0b4f  MOV byte ptr [ECX],AL
007e0b51  MOV ECX,dword ptr [EBP + 0x14]
007e0b54  MOV EDX,dword ptr [ECX]
007e0b56  ADD EDX,0x1
007e0b59  MOV EAX,dword ptr [EBP + 0x14]
007e0b5c  MOV dword ptr [EAX],EDX
007e0b5e  MOV ECX,dword ptr [EBP + -0x28]
007e0b61  ADD ECX,0x1
007e0b64  MOV dword ptr [EBP + -0x28],ECX
007e0b67  MOV EDX,dword ptr [EBP + 0x18]
007e0b6a  MOV EAX,dword ptr [EDX]
007e0b6c  SUB EAX,0x1
007e0b6f  MOV ECX,dword ptr [EBP + 0x18]
007e0b72  MOV dword ptr [ECX],EAX
007e0b74  MOV EDX,dword ptr [EBP + 0x14]
007e0b77  MOV EAX,dword ptr [EDX]
007e0b79  MOV ECX,dword ptr [EBP + -0x28]
007e0b7c  MOV DL,byte ptr [ECX]
007e0b7e  MOV byte ptr [EAX],DL
007e0b80  MOV EAX,dword ptr [EBP + 0x14]
007e0b83  MOV ECX,dword ptr [EAX]
007e0b85  ADD ECX,0x1
007e0b88  MOV EDX,dword ptr [EBP + 0x14]
007e0b8b  MOV dword ptr [EDX],ECX
007e0b8d  MOV EAX,dword ptr [EBP + -0x28]
007e0b90  ADD EAX,0x1
007e0b93  MOV dword ptr [EBP + -0x28],EAX
007e0b96  MOV ECX,dword ptr [EBP + 0x18]
007e0b99  MOV EDX,dword ptr [ECX]
007e0b9b  SUB EDX,0x1
007e0b9e  MOV EAX,dword ptr [EBP + 0x18]
007e0ba1  MOV dword ptr [EAX],EDX
007e0ba3  JMP 0x007e0ad5
007e0ba8  MOV ECX,dword ptr [EBP + -0x1c]
007e0bab  MOV dword ptr [EBP + -0x24],ECX
007e0bae  JMP 0x007e07e4
007e0bb3  MOV EDX,dword ptr [EBP + -0x20]
007e0bb6  AND EDX,0x1
007e0bb9  JZ 0x007e0cb7
007e0bbf  MOV EAX,dword ptr [EBP + -0x24]
007e0bc2  ADD EAX,dword ptr [EBP + -0x20]
007e0bc5  MOV dword ptr [EBP + -0x24],EAX
007e0bc8  MOV ECX,dword ptr [EBP + -0x24]
007e0bcb  MOVSX EDX,byte ptr [ECX]
007e0bce  TEST EDX,EDX
007e0bd0  JZ 0x007e0cb5
007e0bd6  MOV EAX,dword ptr [EBP + 0x18]
007e0bd9  CMP dword ptr [EAX],0x0
007e0bdc  JZ 0x007e0cb5
007e0be2  MOV ECX,dword ptr [EBP + -0x24]
007e0be5  MOVSX EDX,byte ptr [ECX]
007e0be8  CMP EDX,0x27
007e0beb  JNZ 0x007e0bfb
007e0bed  MOV EAX,dword ptr [EBP + -0x24]
007e0bf0  ADD EAX,0x1
007e0bf3  MOV dword ptr [EBP + -0x24],EAX
007e0bf6  JMP 0x007e0cb5
007e0bfb  MOV ECX,dword ptr [EBP + -0x24]
007e0bfe  MOVZX EDX,byte ptr [ECX]
007e0c01  MOV EAX,dword ptr [EBP + 0x8]
007e0c04  MOV ECX,dword ptr [EAX + 0x48]
007e0c07  MOVZX EDX,word ptr [ECX + EDX*0x2]
007e0c0b  AND EDX,0x8000
007e0c11  JZ 0x007e0c81
007e0c13  MOV EAX,dword ptr [EBP + 0x18]
007e0c16  CMP dword ptr [EAX],0x1
007e0c19  JBE 0x007e0c81
007e0c1b  MOV ECX,dword ptr [EBP + -0x24]
007e0c1e  MOVSX EDX,byte ptr [ECX + 0x1]
007e0c22  TEST EDX,EDX
007e0c24  JNZ 0x007e0c52
007e0c26  XOR EAX,EAX
007e0c28  JNZ 0x007e0c4b
007e0c2a  PUSH 0x8bdfec
007e0c2f  PUSH 0x0
007e0c31  PUSH 0x472
007e0c36  PUSH 0x8bdf70
007e0c3b  PUSH 0x2
007e0c3d  CALL 0x007d2670
007e0c42  ADD ESP,0x14
007e0c45  CMP EAX,0x1
007e0c48  JNZ 0x007e0c4b
007e0c4a  INT3
007e0c4b  XOR EAX,EAX
007e0c4d  JMP 0x007e0dc3
007e0c52  MOV EDX,dword ptr [EBP + 0x14]
007e0c55  MOV EAX,dword ptr [EDX]
007e0c57  MOV ECX,dword ptr [EBP + -0x24]
007e0c5a  MOV DL,byte ptr [ECX]
007e0c5c  MOV byte ptr [EAX],DL
007e0c5e  MOV EAX,dword ptr [EBP + 0x14]
007e0c61  MOV ECX,dword ptr [EAX]
007e0c63  ADD ECX,0x1
007e0c66  MOV EDX,dword ptr [EBP + 0x14]
007e0c69  MOV dword ptr [EDX],ECX
007e0c6b  MOV EAX,dword ptr [EBP + -0x24]
007e0c6e  ADD EAX,0x1
007e0c71  MOV dword ptr [EBP + -0x24],EAX
007e0c74  MOV ECX,dword ptr [EBP + 0x18]
007e0c77  MOV EDX,dword ptr [ECX]
007e0c79  SUB EDX,0x1
007e0c7c  MOV EAX,dword ptr [EBP + 0x18]
007e0c7f  MOV dword ptr [EAX],EDX
007e0c81  MOV ECX,dword ptr [EBP + 0x14]
007e0c84  MOV EDX,dword ptr [ECX]
007e0c86  MOV EAX,dword ptr [EBP + -0x24]
007e0c89  MOV CL,byte ptr [EAX]
007e0c8b  MOV byte ptr [EDX],CL
007e0c8d  MOV EDX,dword ptr [EBP + 0x14]
007e0c90  MOV EAX,dword ptr [EDX]
007e0c92  ADD EAX,0x1
007e0c95  MOV ECX,dword ptr [EBP + 0x14]
007e0c98  MOV dword ptr [ECX],EAX
007e0c9a  MOV EDX,dword ptr [EBP + -0x24]
007e0c9d  ADD EDX,0x1
007e0ca0  MOV dword ptr [EBP + -0x24],EDX
007e0ca3  MOV EAX,dword ptr [EBP + 0x18]
007e0ca6  MOV ECX,dword ptr [EAX]
007e0ca8  SUB ECX,0x1
007e0cab  MOV EDX,dword ptr [EBP + 0x18]
007e0cae  MOV dword ptr [EDX],ECX
007e0cb0  JMP 0x007e0bc8
007e0cb5  JMP 0x007e0cc0
007e0cb7  MOV EAX,dword ptr [EBP + -0x24]
007e0cba  ADD EAX,dword ptr [EBP + -0x20]
007e0cbd  MOV dword ptr [EBP + -0x24],EAX
007e0cc0  JMP 0x007e07e4
007e0cc5  MOVSX ECX,byte ptr [EBP + -0x29]
007e0cc9  TEST ECX,ECX
007e0ccb  JZ 0x007e0d07
007e0ccd  MOV EDX,dword ptr [EBP + -0x30]
007e0cd0  PUSH EDX
007e0cd1  MOV EAX,dword ptr [EBP + 0x1c]
007e0cd4  PUSH EAX
007e0cd5  MOV ECX,dword ptr [EBP + 0x18]
007e0cd8  PUSH ECX
007e0cd9  MOV EDX,dword ptr [EBP + 0x14]
007e0cdc  PUSH EDX
007e0cdd  MOV EAX,dword ptr [EBP + 0x10]
007e0ce0  PUSH EAX
007e0ce1  MOV CL,byte ptr [EBP + -0x29]
007e0ce4  PUSH ECX
007e0ce5  MOV EDX,dword ptr [EBP + 0x8]
007e0ce8  PUSH EDX
007e0ce9  CALL 0x007dfe40
007e0cee  ADD ESP,0x1c
007e0cf1  TEST EAX,EAX
007e0cf3  JNZ 0x007e0cfc
007e0cf5  XOR EAX,EAX
007e0cf7  JMP 0x007e0dc3
007e0cfc  MOV EAX,dword ptr [EBP + -0x1c]
007e0cff  MOV dword ptr [EBP + -0x24],EAX
007e0d02  JMP 0x007e0db9
007e0d07  MOV ECX,dword ptr [EBP + -0x24]
007e0d0a  MOVZX EDX,byte ptr [ECX]
007e0d0d  MOV EAX,dword ptr [EBP + 0x8]
007e0d10  MOV ECX,dword ptr [EAX + 0x48]
007e0d13  MOVZX EDX,word ptr [ECX + EDX*0x2]
007e0d17  AND EDX,0x8000
007e0d1d  JZ 0x007e0d8a
007e0d1f  MOV EAX,dword ptr [EBP + 0x18]
007e0d22  CMP dword ptr [EAX],0x1
007e0d25  JBE 0x007e0d8a
007e0d27  MOV ECX,dword ptr [EBP + -0x24]
007e0d2a  MOVSX EDX,byte ptr [ECX + 0x1]
007e0d2e  TEST EDX,EDX
007e0d30  JNZ 0x007e0d5b
007e0d32  XOR EAX,EAX
007e0d34  JNZ 0x007e0d57
007e0d36  PUSH 0x8bdfec
007e0d3b  PUSH 0x0
007e0d3d  PUSH 0x49f
007e0d42  PUSH 0x8bdf70
007e0d47  PUSH 0x2
007e0d49  CALL 0x007d2670
007e0d4e  ADD ESP,0x14
007e0d51  CMP EAX,0x1
007e0d54  JNZ 0x007e0d57
007e0d56  INT3
007e0d57  XOR EAX,EAX
007e0d59  JMP 0x007e0dc3
007e0d5b  MOV EDX,dword ptr [EBP + 0x14]
007e0d5e  MOV EAX,dword ptr [EDX]
007e0d60  MOV ECX,dword ptr [EBP + -0x24]
007e0d63  MOV DL,byte ptr [ECX]
007e0d65  MOV byte ptr [EAX],DL
007e0d67  MOV EAX,dword ptr [EBP + 0x14]
007e0d6a  MOV ECX,dword ptr [EAX]
007e0d6c  ADD ECX,0x1
007e0d6f  MOV EDX,dword ptr [EBP + 0x14]
007e0d72  MOV dword ptr [EDX],ECX
007e0d74  MOV EAX,dword ptr [EBP + -0x24]
007e0d77  ADD EAX,0x1
007e0d7a  MOV dword ptr [EBP + -0x24],EAX
007e0d7d  MOV ECX,dword ptr [EBP + 0x18]
007e0d80  MOV EDX,dword ptr [ECX]
007e0d82  SUB EDX,0x1
007e0d85  MOV EAX,dword ptr [EBP + 0x18]
007e0d88  MOV dword ptr [EAX],EDX
007e0d8a  MOV ECX,dword ptr [EBP + 0x14]
007e0d8d  MOV EDX,dword ptr [ECX]
007e0d8f  MOV EAX,dword ptr [EBP + -0x24]
007e0d92  MOV CL,byte ptr [EAX]
007e0d94  MOV byte ptr [EDX],CL
007e0d96  MOV EDX,dword ptr [EBP + 0x14]
007e0d99  MOV EAX,dword ptr [EDX]
007e0d9b  ADD EAX,0x1
007e0d9e  MOV ECX,dword ptr [EBP + 0x14]
007e0da1  MOV dword ptr [ECX],EAX
007e0da3  MOV EDX,dword ptr [EBP + -0x24]
007e0da6  ADD EDX,0x1
007e0da9  MOV dword ptr [EBP + -0x24],EDX
007e0dac  MOV EAX,dword ptr [EBP + 0x18]
007e0daf  MOV ECX,dword ptr [EAX]
007e0db1  SUB ECX,0x1
007e0db4  MOV EDX,dword ptr [EBP + 0x18]
007e0db7  MOV dword ptr [EDX],ECX
007e0db9  JMP 0x007e07e4
007e0dbe  MOV EAX,0x1
007e0dc3  LEA ESP,[EBP + 0xffffff7c]
007e0dc9  MOV ECX,dword ptr [EBP + -0x10]
007e0dcc  MOV dword ptr FS:[0x0],ECX
007e0dd3  POP EDI
007e0dd4  POP ESI
007e0dd5  POP EBX
007e0dd6  MOV ESP,EBP
007e0dd8  POP EBP
007e0dd9  RET
