0045e610  MOV ECX,dword ptr [ESP + 0x8]
0045e614  PUSH ECX
0045e615  CALL 0x0045e4d0
0045e61a  FDIVR float ptr [0x0089096c]
0045e620  MOV EAX,dword ptr [ESP + 0x8]
0045e624  ADD ESP,0x4
0045e627  FLD float ptr [ECX + 0x2c]
0045e62a  FMUL float ptr [ECX + 0x34]
0045e62d  FMUL float ptr [ECX + 0x18]
0045e630  FLD float ptr [ECX + 0x34]
0045e633  FMUL float ptr [ECX + 0x28]
0045e636  FMUL float ptr [ECX + 0x1c]
0045e639  FSUBP
0045e63b  FLD float ptr [ECX + 0x24]
0045e63e  FMUL float ptr [ECX + 0x38]
0045e641  FMUL float ptr [ECX + 0x1c]
0045e644  FADDP
0045e646  FLD float ptr [ECX + 0x14]
0045e649  FMUL float ptr [ECX + 0x2c]
0045e64c  FMUL float ptr [ECX + 0x38]
0045e64f  FSUBP
0045e651  FLD float ptr [ECX + 0x24]
0045e654  FMUL float ptr [ECX + 0x3c]
0045e657  FMUL float ptr [ECX + 0x18]
0045e65a  FSUBP
0045e65c  FLD float ptr [ECX + 0x14]
0045e65f  FMUL float ptr [ECX + 0x3c]
0045e662  FMUL float ptr [ECX + 0x28]
0045e665  FADDP
0045e667  FMUL ST1
0045e669  FSTP float ptr [EAX]
0045e66b  FLD float ptr [ECX + 0x34]
0045e66e  FMUL float ptr [ECX + 0x28]
0045e671  FMUL float ptr [ECX + 0xc]
0045e674  FLD float ptr [ECX + 0x2c]
0045e677  FMUL float ptr [ECX + 0x34]
0045e67a  FMUL float ptr [ECX + 0x8]
0045e67d  FSUBP
0045e67f  FLD float ptr [ECX + 0x24]
0045e682  FMUL float ptr [ECX + 0x38]
0045e685  FMUL float ptr [ECX + 0xc]
0045e688  FSUBP
0045e68a  FLD float ptr [ECX + 0x24]
0045e68d  FMUL float ptr [ECX + 0x3c]
0045e690  FMUL float ptr [ECX + 0x8]
0045e693  FADDP
0045e695  FLD float ptr [ECX + 0x2c]
0045e698  FMUL float ptr [ECX + 0x38]
0045e69b  FMUL float ptr [ECX + 0x4]
0045e69e  FADDP
0045e6a0  FLD float ptr [ECX + 0x4]
0045e6a3  FMUL float ptr [ECX + 0x3c]
0045e6a6  FMUL float ptr [ECX + 0x28]
0045e6a9  FSUBP
0045e6ab  FMUL ST1
0045e6ad  FSTP float ptr [EAX + 0x4]
0045e6b0  FLD float ptr [ECX + 0x34]
0045e6b3  FMUL float ptr [ECX + 0x1c]
0045e6b6  FMUL float ptr [ECX + 0x8]
0045e6b9  FLD float ptr [ECX + 0x34]
0045e6bc  FMUL float ptr [ECX + 0x18]
0045e6bf  FMUL float ptr [ECX + 0xc]
0045e6c2  FSUBP
0045e6c4  FLD float ptr [ECX + 0x14]
0045e6c7  FMUL float ptr [ECX + 0x38]
0045e6ca  FMUL float ptr [ECX + 0xc]
0045e6cd  FADDP
0045e6cf  FLD float ptr [ECX + 0x38]
0045e6d2  FMUL float ptr [ECX + 0x4]
0045e6d5  FMUL float ptr [ECX + 0x1c]
0045e6d8  FSUBP
0045e6da  FLD float ptr [ECX + 0x14]
0045e6dd  FMUL float ptr [ECX + 0x3c]
0045e6e0  FMUL float ptr [ECX + 0x8]
0045e6e3  FSUBP
0045e6e5  FLD float ptr [ECX + 0x4]
0045e6e8  FMUL float ptr [ECX + 0x3c]
0045e6eb  FMUL float ptr [ECX + 0x18]
0045e6ee  FADDP
0045e6f0  FMUL ST1
0045e6f2  FSTP float ptr [EAX + 0x8]
0045e6f5  FLD float ptr [ECX + 0x24]
0045e6f8  FMUL float ptr [ECX + 0x18]
0045e6fb  FMUL float ptr [ECX + 0xc]
0045e6fe  FLD float ptr [ECX + 0x24]
0045e701  FMUL float ptr [ECX + 0x1c]
0045e704  FMUL float ptr [ECX + 0x8]
0045e707  FSUBP
0045e709  FLD float ptr [ECX + 0x14]
0045e70c  FMUL float ptr [ECX + 0x28]
0045e70f  FMUL float ptr [ECX + 0xc]
0045e712  FSUBP
0045e714  FLD float ptr [ECX + 0x14]
0045e717  FMUL float ptr [ECX + 0x2c]
0045e71a  FMUL float ptr [ECX + 0x8]
0045e71d  FADDP
0045e71f  FLD float ptr [ECX + 0x4]
0045e722  FMUL float ptr [ECX + 0x28]
0045e725  FMUL float ptr [ECX + 0x1c]
0045e728  FADDP
0045e72a  FLD float ptr [ECX + 0x2c]
0045e72d  FMUL float ptr [ECX + 0x4]
0045e730  FMUL float ptr [ECX + 0x18]
0045e733  FSUBP
0045e735  FMUL ST1
0045e737  FSTP float ptr [EAX + 0xc]
0045e73a  FLD float ptr [ECX + 0x30]
0045e73d  FMUL float ptr [ECX + 0x28]
0045e740  FMUL float ptr [ECX + 0x1c]
0045e743  FLD float ptr [ECX + 0x30]
0045e746  FMUL float ptr [ECX + 0x2c]
0045e749  FMUL float ptr [ECX + 0x18]
0045e74c  FSUBP
0045e74e  FLD float ptr [ECX + 0x20]
0045e751  FMUL float ptr [ECX + 0x38]
0045e754  FMUL float ptr [ECX + 0x1c]
0045e757  FSUBP
0045e759  FLD float ptr [ECX + 0x10]
0045e75c  FMUL float ptr [ECX + 0x2c]
0045e75f  FMUL float ptr [ECX + 0x38]
0045e762  FADDP
0045e764  FLD float ptr [ECX + 0x20]
0045e767  FMUL float ptr [ECX + 0x3c]
0045e76a  FMUL float ptr [ECX + 0x18]
0045e76d  FADDP
0045e76f  FLD float ptr [ECX + 0x10]
0045e772  FMUL float ptr [ECX + 0x3c]
0045e775  FMUL float ptr [ECX + 0x28]
0045e778  FSUBP
0045e77a  FMUL ST1
0045e77c  FSTP float ptr [EAX + 0x10]
0045e77f  FLD float ptr [ECX + 0x30]
0045e782  FMUL float ptr [ECX + 0x2c]
0045e785  FMUL float ptr [ECX + 0x8]
0045e788  FLD float ptr [ECX + 0x30]
0045e78b  FMUL float ptr [ECX + 0x28]
0045e78e  FMUL float ptr [ECX + 0xc]
0045e791  FSUBP
0045e793  FLD float ptr [ECX + 0x20]
0045e796  FMUL float ptr [ECX + 0x38]
0045e799  FMUL float ptr [ECX + 0xc]
0045e79c  FADDP
0045e79e  FLD float ptr [ECX + 0x2c]
0045e7a1  FMUL float ptr [ECX + 0x38]
0045e7a4  FMUL float ptr [ECX]
0045e7a6  FSUBP
0045e7a8  FLD float ptr [ECX + 0x20]
0045e7ab  FMUL float ptr [ECX + 0x3c]
0045e7ae  FMUL float ptr [ECX + 0x8]
0045e7b1  FSUBP
0045e7b3  FLD float ptr [ECX]
0045e7b5  FMUL float ptr [ECX + 0x3c]
0045e7b8  FMUL float ptr [ECX + 0x28]
0045e7bb  FADDP
0045e7bd  FMUL ST1
0045e7bf  FSTP float ptr [EAX + 0x14]
0045e7c2  FLD float ptr [ECX + 0x30]
0045e7c5  FMUL float ptr [ECX + 0x18]
0045e7c8  FMUL float ptr [ECX + 0xc]
0045e7cb  FLD float ptr [ECX + 0x30]
0045e7ce  FMUL float ptr [ECX + 0x1c]
0045e7d1  FMUL float ptr [ECX + 0x8]
0045e7d4  FSUBP
0045e7d6  FLD float ptr [ECX + 0x10]
0045e7d9  FMUL float ptr [ECX + 0x38]
0045e7dc  FMUL float ptr [ECX + 0xc]
0045e7df  FSUBP
0045e7e1  FLD float ptr [ECX + 0x10]
0045e7e4  FMUL float ptr [ECX + 0x3c]
0045e7e7  FMUL float ptr [ECX + 0x8]
0045e7ea  FADDP
0045e7ec  FLD float ptr [ECX + 0x38]
0045e7ef  FMUL float ptr [ECX]
0045e7f1  FMUL float ptr [ECX + 0x1c]
0045e7f4  FADDP
0045e7f6  FLD float ptr [ECX]
0045e7f8  FMUL float ptr [ECX + 0x3c]
0045e7fb  FMUL float ptr [ECX + 0x18]
0045e7fe  FSUBP
0045e800  FMUL ST1
0045e802  FSTP float ptr [EAX + 0x18]
0045e805  FLD float ptr [ECX + 0x20]
0045e808  FMUL float ptr [ECX + 0x1c]
0045e80b  FMUL float ptr [ECX + 0x8]
0045e80e  FLD float ptr [ECX + 0x20]
0045e811  FMUL float ptr [ECX + 0x18]
0045e814  FMUL float ptr [ECX + 0xc]
0045e817  FSUBP
0045e819  FLD float ptr [ECX + 0x10]
0045e81c  FMUL float ptr [ECX + 0x28]
0045e81f  FMUL float ptr [ECX + 0xc]
0045e822  FADDP
0045e824  FLD float ptr [ECX]
0045e826  FMUL float ptr [ECX + 0x28]
0045e829  FMUL float ptr [ECX + 0x1c]
0045e82c  FSUBP
0045e82e  FLD float ptr [ECX + 0x10]
0045e831  FMUL float ptr [ECX + 0x2c]
0045e834  FMUL float ptr [ECX + 0x8]
0045e837  FSUBP
0045e839  FLD float ptr [ECX + 0x2c]
0045e83c  FMUL float ptr [ECX]
0045e83e  FMUL float ptr [ECX + 0x18]
0045e841  FADDP
0045e843  FMUL ST1
0045e845  FSTP float ptr [EAX + 0x1c]
0045e848  FLD float ptr [ECX + 0x14]
0045e84b  FMUL float ptr [ECX + 0x30]
0045e84e  FMUL float ptr [ECX + 0x2c]
0045e851  FLD float ptr [ECX + 0x30]
0045e854  FMUL float ptr [ECX + 0x24]
0045e857  FMUL float ptr [ECX + 0x1c]
0045e85a  FSUBP
0045e85c  FLD float ptr [ECX + 0x20]
0045e85f  FMUL float ptr [ECX + 0x34]
0045e862  FMUL float ptr [ECX + 0x1c]
0045e865  FADDP
0045e867  FLD float ptr [ECX + 0x10]
0045e86a  FMUL float ptr [ECX + 0x2c]
0045e86d  FMUL float ptr [ECX + 0x34]
0045e870  FSUBP
0045e872  FLD float ptr [ECX + 0x14]
0045e875  FMUL float ptr [ECX + 0x20]
0045e878  FMUL float ptr [ECX + 0x3c]
0045e87b  FSUBP
0045e87d  FLD float ptr [ECX + 0x10]
0045e880  FMUL float ptr [ECX + 0x24]
0045e883  FMUL float ptr [ECX + 0x3c]
0045e886  FADDP
0045e888  FMUL ST1
0045e88a  FSTP float ptr [EAX + 0x20]
0045e88d  FLD float ptr [ECX + 0x30]
0045e890  FMUL float ptr [ECX + 0x24]
0045e893  FMUL float ptr [ECX + 0xc]
0045e896  FLD float ptr [ECX + 0x30]
0045e899  FMUL float ptr [ECX + 0x2c]
0045e89c  FMUL float ptr [ECX + 0x4]
0045e89f  FSUBP
0045e8a1  FLD float ptr [ECX + 0x20]
0045e8a4  FMUL float ptr [ECX + 0x34]
0045e8a7  FMUL float ptr [ECX + 0xc]
0045e8aa  FSUBP
0045e8ac  FLD float ptr [ECX + 0x2c]
0045e8af  FMUL float ptr [ECX + 0x34]
0045e8b2  FMUL float ptr [ECX]
0045e8b4  FADDP
0045e8b6  FLD float ptr [ECX + 0x20]
0045e8b9  FMUL float ptr [ECX + 0x4]
0045e8bc  FMUL float ptr [ECX + 0x3c]
0045e8bf  FADDP
0045e8c1  FLD float ptr [ECX + 0x24]
0045e8c4  FMUL float ptr [ECX]
0045e8c6  FMUL float ptr [ECX + 0x3c]
0045e8c9  FSUBP
0045e8cb  FMUL ST1
0045e8cd  FSTP float ptr [EAX + 0x24]
0045e8d0  FLD float ptr [ECX + 0x30]
0045e8d3  FMUL float ptr [ECX + 0x4]
0045e8d6  FMUL float ptr [ECX + 0x1c]
0045e8d9  FLD float ptr [ECX + 0x14]
0045e8dc  FMUL float ptr [ECX + 0x30]
0045e8df  FMUL float ptr [ECX + 0xc]
0045e8e2  FSUBP
0045e8e4  FLD float ptr [ECX + 0x10]
0045e8e7  FMUL float ptr [ECX + 0x34]
0045e8ea  FMUL float ptr [ECX + 0xc]
0045e8ed  FADDP
0045e8ef  FLD float ptr [ECX + 0x34]
0045e8f2  FMUL float ptr [ECX]
0045e8f4  FMUL float ptr [ECX + 0x1c]
0045e8f7  FSUBP
0045e8f9  FLD float ptr [ECX + 0x10]
0045e8fc  FMUL float ptr [ECX + 0x4]
0045e8ff  FMUL float ptr [ECX + 0x3c]
0045e902  FSUBP
0045e904  FLD float ptr [ECX + 0x14]
0045e907  FMUL float ptr [ECX]
0045e909  FMUL float ptr [ECX + 0x3c]
0045e90c  FADDP
0045e90e  FMUL ST1
0045e910  FSTP float ptr [EAX + 0x28]
0045e913  FLD float ptr [ECX + 0x14]
0045e916  FMUL float ptr [ECX + 0x20]
0045e919  FMUL float ptr [ECX + 0xc]
0045e91c  FLD float ptr [ECX + 0x20]
0045e91f  FMUL float ptr [ECX + 0x4]
0045e922  FMUL float ptr [ECX + 0x1c]
0045e925  FSUBP
0045e927  FLD float ptr [ECX + 0x10]
0045e92a  FMUL float ptr [ECX + 0x24]
0045e92d  FMUL float ptr [ECX + 0xc]
0045e930  FSUBP
0045e932  FLD float ptr [ECX + 0x24]
0045e935  FMUL float ptr [ECX]
0045e937  FMUL float ptr [ECX + 0x1c]
0045e93a  FADDP
0045e93c  FLD float ptr [ECX + 0x10]
0045e93f  FMUL float ptr [ECX + 0x2c]
0045e942  FMUL float ptr [ECX + 0x4]
0045e945  FADDP
0045e947  FLD float ptr [ECX + 0x14]
0045e94a  FMUL float ptr [ECX + 0x2c]
0045e94d  FMUL float ptr [ECX]
0045e94f  FSUBP
0045e951  FMUL ST1
0045e953  FSTP float ptr [EAX + 0x2c]
0045e956  FLD float ptr [ECX + 0x30]
0045e959  FMUL float ptr [ECX + 0x24]
0045e95c  FMUL float ptr [ECX + 0x18]
0045e95f  FLD float ptr [ECX + 0x14]
0045e962  FMUL float ptr [ECX + 0x30]
0045e965  FMUL float ptr [ECX + 0x28]
0045e968  FSUBP
0045e96a  FLD float ptr [ECX + 0x20]
0045e96d  FMUL float ptr [ECX + 0x34]
0045e970  FMUL float ptr [ECX + 0x18]
0045e973  FSUBP
0045e975  FLD float ptr [ECX + 0x14]
0045e978  FMUL float ptr [ECX + 0x20]
0045e97b  FMUL float ptr [ECX + 0x38]
0045e97e  FADDP
0045e980  FLD float ptr [ECX + 0x10]
0045e983  FMUL float ptr [ECX + 0x34]
0045e986  FMUL float ptr [ECX + 0x28]
0045e989  FADDP
0045e98b  FLD float ptr [ECX + 0x10]
0045e98e  FMUL float ptr [ECX + 0x24]
0045e991  FMUL float ptr [ECX + 0x38]
0045e994  FSUBP
0045e996  FMUL ST1
0045e998  FSTP float ptr [EAX + 0x30]
0045e99b  FLD float ptr [ECX + 0x30]
0045e99e  FMUL float ptr [ECX + 0x4]
0045e9a1  FMUL float ptr [ECX + 0x28]
0045e9a4  FLD float ptr [ECX + 0x30]
0045e9a7  FMUL float ptr [ECX + 0x24]
0045e9aa  FMUL float ptr [ECX + 0x8]
0045e9ad  FSUBP
0045e9af  FLD float ptr [ECX + 0x20]
0045e9b2  FMUL float ptr [ECX + 0x34]
0045e9b5  FMUL float ptr [ECX + 0x8]
0045e9b8  FADDP
0045e9ba  FLD float ptr [ECX + 0x34]
0045e9bd  FMUL float ptr [ECX]
0045e9bf  FMUL float ptr [ECX + 0x28]
0045e9c2  FSUBP
0045e9c4  FLD float ptr [ECX + 0x20]
0045e9c7  FMUL float ptr [ECX + 0x38]
0045e9ca  FMUL float ptr [ECX + 0x4]
0045e9cd  FSUBP
0045e9cf  FLD float ptr [ECX + 0x24]
0045e9d2  FMUL float ptr [ECX + 0x38]
0045e9d5  FMUL float ptr [ECX]
0045e9d7  FADDP
0045e9d9  FMUL ST1
0045e9db  FSTP float ptr [EAX + 0x34]
0045e9de  FLD float ptr [ECX + 0x14]
0045e9e1  FMUL float ptr [ECX + 0x30]
0045e9e4  FMUL float ptr [ECX + 0x8]
0045e9e7  FLD float ptr [ECX + 0x30]
0045e9ea  FMUL float ptr [ECX + 0x4]
0045e9ed  FMUL float ptr [ECX + 0x18]
0045e9f0  FSUBP
0045e9f2  FLD float ptr [ECX + 0x10]
0045e9f5  FMUL float ptr [ECX + 0x34]
0045e9f8  FMUL float ptr [ECX + 0x8]
0045e9fb  FSUBP
0045e9fd  FLD float ptr [ECX + 0x34]
0045ea00  FMUL float ptr [ECX]
0045ea02  FMUL float ptr [ECX + 0x18]
0045ea05  FADDP
0045ea07  FLD float ptr [ECX + 0x10]
0045ea0a  FMUL float ptr [ECX + 0x38]
0045ea0d  FMUL float ptr [ECX + 0x4]
0045ea10  FADDP
0045ea12  FLD float ptr [ECX + 0x14]
0045ea15  FMUL float ptr [ECX + 0x38]
0045ea18  FMUL float ptr [ECX]
0045ea1a  FSUBP
0045ea1c  FMUL ST1
0045ea1e  FSTP float ptr [EAX + 0x38]
0045ea21  FLD float ptr [ECX + 0x20]
0045ea24  FMUL float ptr [ECX + 0x4]
0045ea27  FMUL float ptr [ECX + 0x18]
0045ea2a  FLD float ptr [ECX + 0x14]
0045ea2d  FMUL float ptr [ECX + 0x20]
0045ea30  FMUL float ptr [ECX + 0x8]
0045ea33  FSUBP
0045ea35  FLD float ptr [ECX + 0x10]
0045ea38  FMUL float ptr [ECX + 0x24]
0045ea3b  FMUL float ptr [ECX + 0x8]
0045ea3e  FADDP
0045ea40  FLD float ptr [ECX + 0x24]
0045ea43  FMUL float ptr [ECX]
0045ea45  FMUL float ptr [ECX + 0x18]
0045ea48  FSUBP
0045ea4a  FLD float ptr [ECX + 0x10]
0045ea4d  FMUL float ptr [ECX + 0x4]
0045ea50  FMUL float ptr [ECX + 0x28]
0045ea53  FSUBP
0045ea55  FLD float ptr [ECX + 0x14]
0045ea58  FMUL float ptr [ECX]
0045ea5a  FMUL float ptr [ECX + 0x28]
0045ea5d  FADDP
0045ea5f  FMUL ST1
0045ea61  FSTP float ptr [EAX + 0x3c]
0045ea64  FSTP ST0
0045ea66  RET
