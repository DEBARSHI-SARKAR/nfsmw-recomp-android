/* speed.exe 008075aa FUN_008075aa; analysis pseudocode, not buildable source.
 */

void FUN_008075aa(int param_1,int param_2,int param_3,byte param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = param_1;
  iVar2 = *(int *)(param_1 + 0x230) * param_2 + param_3;
  param_2 = 0;
  param_3 = 1;
  param_1 = 0;
  piVar5 = (int *)(iVar1 + 0x6ac);
  do {
    iVar3 = *piVar5 + iVar2;
    if ((*(uint *)(&DAT_008c4d50 + *(char *)(*(int *)(iVar1 + 0x6f4) + iVar3) * 4) == (uint)param_4)
       && (iVar3 = *(int *)(*(int *)(iVar1 + 0x6f8) + iVar3 * 4), iVar3 != 0)) {
      param_3 = 2;
      param_2 = iVar3;
      break;
    }
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  } while (param_1 < 0xc);
  iVar3 = param_1;
  param_1 = param_1 + 1;
  if (param_1 < 0xc) {
    piVar5 = (int *)(iVar1 + 0x6ac + param_1 * 4);
    do {
      iVar4 = *piVar5 + iVar2;
      if (((*(uint *)(&DAT_008c4d50 + *(char *)(*(int *)(iVar1 + 0x6f4) + iVar4) * 4) ==
            (uint)param_4) &&
          (iVar4 = *(int *)(*(int *)(iVar1 + 0x6f8) + iVar4 * 4), iVar4 != param_2)) && (iVar4 != 0)
         ) {
        param_3 = 0;
        goto LAB_00807668;
      }
      param_1 = param_1 + 1;
      piVar5 = piVar5 + 1;
    } while (param_1 < 0xc);
  }
  iVar4 = 0;
LAB_00807668:
  if (param_4 == 1) {
    *param_5 = param_3;
    *(int *)(iVar1 + 0x44) = iVar3;
    *(int *)(iVar1 + 0x3c) = param_2;
    *(int *)(iVar1 + 0x40) = iVar4;
  }
  else {
    *(int *)(iVar1 + 0x50) = iVar3;
    *(int *)(iVar1 + 0x48) = param_2;
    *(int *)(iVar1 + 0x4c) = iVar4;
  }
  return;
}

