/* speed.exe 00827182 FUN_00827182; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081e092 FUN_0081e092
 * calls 0081e1e8 FUN_0081e1e8
 * calls 00828f10 FUN_00828f10
 */

undefined4 FUN_00827182(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_4;
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0081e1e8(*(undefined4 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x31),
                 *(int *)(param_1 + 0x2c));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  do {
    if (param_2 < 1) {
LAB_0082723d:
      return *(undefined4 *)(iVar1 + 0x2c);
    }
    if (*(int *)(iVar1 + 0x20) <= *(int *)(iVar1 + 0x24)) {
      iVar2 = FUN_0081e092(*(undefined4 *)(iVar1 + 0x28),*(undefined1 *)(iVar1 + 0x31),&param_4,
                           &param_1);
      *(int *)(iVar1 + 0x1c) = iVar2;
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 0x2c) != 0) {
          FUN_00822050(iVar3,param_2 << 2);
        }
        goto LAB_0082723d;
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(int *)(iVar1 + 0x20) = param_4;
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    iVar4 = *(int *)(iVar1 + 0x20) - iVar2;
    if (param_2 < iVar4) {
      iVar4 = param_2;
    }
    if (*(char *)(iVar1 + 0x30) == '\0') {
      FUN_00828f10(iVar4,*(int *)(iVar1 + 0x1c) + iVar2,iVar3);
    }
    else {
      (*DAT_009c2528)(iVar4,*(int *)(iVar1 + 0x1c) + iVar2 * 2);
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + iVar4;
    param_2 = param_2 - iVar4;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + iVar4;
    iVar3 = iVar3 + iVar4 * 4;
  } while( true );
}

