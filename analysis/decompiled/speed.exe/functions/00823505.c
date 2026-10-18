/* speed.exe 00823505 FUN_00823505; analysis pseudocode, not buildable source.
 * calls 00825ee7 FUN_00825ee7
 * calls 00824500 FUN_00824500
 * calls 0081e9e7 FUN_0081e9e7
 * calls 008260cf FUN_008260cf
 */

void FUN_00823505(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1 * 0x5c + DAT_009c2520;
  if (0x40000 < param_2) {
    param_2 = 0x40000;
  }
  if (*(int *)(iVar2 + 0x50) == 0) {
    iVar1 = FUN_0081e9e7(0x3c);
    *(int *)(iVar2 + 0x50) = iVar1;
    bVar3 = 0x31 < DAT_009c231e;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined2 *)(*(int *)(iVar2 + 0x50) + 0x18) = 0xa0;
    *(undefined1 *)(*(int *)(iVar2 + 0x50) + 0x1a) = 0;
    FUN_008260cf(*(undefined4 *)(iVar2 + 0x50),DAT_009c218f,bVar3);
    FUN_00824500(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x50));
  }
  FUN_00825ee7(*(undefined4 *)(iVar2 + 0x50),param_2);
  return;
}

