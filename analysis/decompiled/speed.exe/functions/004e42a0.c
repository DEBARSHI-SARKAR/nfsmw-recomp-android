/* speed.exe 004e42a0 FUN_004e42a0; analysis pseudocode, not buildable source.
 * calls 004e42a0 FUN_004e42a0
 * calls 004e4180 FUN_004e4180
 */

int FUN_004e42a0(uint param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
joined_r0x004e42a8:
  if (9 < param_1) {
    return 0;
  }
  iVar2 = (int)param_2 >> 6;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    iVar1 = *(int *)(&DAT_008f1550 + iVar2 * 4);
    if (iVar1 != 0) {
      iVar1 = iVar1 + ((int)((*(int *)(&DAT_008f1554 + iVar2 * 4) - iVar1) *
                            ((param_2 & 0x1e) << 9 | 0x3ff)) >> 0xf);
    }
    break;
  case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (param_3 != '\0') {
      iVar2 = FUN_004e42a0(0,param_2,1);
      return -iVar2;
    }
    param_2 = 0x7fff - param_2;
    param_1 = 0;
    goto joined_r0x004e42a8;
  case 2:
    if (param_3 == '\0') {
      iVar2 = FUN_004e42a0(0,param_2,0);
      return iVar2 * iVar2 >> 0xf;
    }
    uVar3 = 0;
    goto LAB_004e4394;
  case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (param_3 != '\0') {
      iVar2 = FUN_004e42a0(2,param_2,1);
      return -iVar2;
    }
    param_2 = 0x7fff - param_2;
    param_1 = 2;
    goto joined_r0x004e42a8;
  case 4:
    iVar1 = ((int)(((0x7fff - *(int *)(&DAT_008f1554 + (0x1ff - iVar2) * 4)) -
                   (0x7fff - *(int *)(&DAT_008f1550 + (0x1ff - iVar2) * 4))) *
                  ((param_2 & 0x1e) << 9 | 0x3ff)) >> 0xf) +
            (0x7fff - *(int *)(&DAT_008f1550 + (0x1ff - iVar2) * 4));
    break;
  case 5:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (param_3 != '\0') {
      iVar2 = FUN_004e42a0(4,param_2,1);
      return -iVar2;
    }
    param_2 = 0x7fff - param_2;
    param_1 = 4;
    goto joined_r0x004e42a8;
  case 6:
    if (param_3 == '\0') {
      iVar2 = FUN_004e42a0(4,param_2,0);
      return iVar2 * iVar2 >> 0xf;
    }
    uVar3 = 4;
LAB_004e4394:
    iVar2 = FUN_004e42a0(uVar3,param_2,1);
    iVar2 = iVar2 << 1;
    goto LAB_004e439e;
  case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (param_3 != '\0') {
      iVar2 = FUN_004e42a0(6,param_2,1);
      return -iVar2;
    }
    param_2 = 0x7fff - param_2;
    param_1 = 6;
    goto joined_r0x004e42a8;
  case 8:
    if (param_3 != '\0') {
      iVar2 = FUN_004e4180(0x7fff - param_2);
      return iVar2;
    }
    return 0x7fff - param_2;
  case 9:
    goto switchD_004e42b6_caseD_9;
  }
  if (param_3 == '\0') {
    return iVar1;
  }
  iVar2 = FUN_004e4180(iVar1);
LAB_004e439e:
  if (-0x2581 < iVar2) {
    return iVar2;
  }
  return -10000;
switchD_004e42b6_caseD_9:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (param_3 != '\0') {
    iVar2 = FUN_004e42a0(8,param_2,1);
    return -iVar2;
  }
  param_2 = 0x7fff - param_2;
  param_1 = 8;
  goto joined_r0x004e42a8;
}

