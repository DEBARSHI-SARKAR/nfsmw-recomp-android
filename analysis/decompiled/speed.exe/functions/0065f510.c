/* speed.exe 0065f510 FUN_0065f510; analysis pseudocode, not buildable source.
 * calls 0065ab60 FUN_0065ab60
 * calls 00465a70 FUN_00465a70
 * calls 0065ab20 FUN_0065ab20
 * calls 0064d600 FUN_0064d600
 * calls 00461970 FUN_00461970
 * calls 00463ca0 FUN_00463ca0
 * calls 0065aa50 FUN_0065aa50
 * calls 0065e720 FUN_0065e720
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0065f510(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  *DAT_00925b00 = param_1;
  puVar2 = param_1;
  param_1[1] = DAT_00925b00;
  DAT_00925b00 = puVar2;
  *param_1 = &DAT_00925afc;
  _DAT_00925924 = _DAT_00925924 + 1;
  uVar3 = FUN_00461970(param_2);
  param_1[9] = uVar3;
  param_1[6] = 0;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_3 == 6) || (param_3 == 2)) {
    piVar4 = (int *)FUN_0065ab60(uVar3);
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[1];
      iVar5 = *piVar4;
      *piVar1 = iVar5;
      *(int **)(iVar5 + 4) = piVar1;
      FUN_0065ab20();
      FUN_00463ca0(DAT_00925914,piVar4);
    }
    param_1[0xc] = 0x2000;
    uVar3 = FUN_00465a70(0x2000,0);
    param_1[0xd] = uVar3;
  }
  iVar5 = FUN_0065ab60(param_2);
  if ((iVar5 != 0) && (param_1[2] == 1)) {
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    param_1[5] = *(undefined4 *)(iVar5 + 0xc);
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    param_1[6] = iVar5;
    param_1[3] = uVar3;
    return param_1;
  }
  iVar5 = FUN_0065aa50(param_1[9]);
  if (iVar5 != 0) {
    iVar5 = FUN_0065aa50(param_1[9]);
    param_1[3] = *(undefined4 *)(iVar5 + 8);
    return param_1;
  }
  FUN_0064d600();
  if (-1 < (int)param_1[3]) {
    if (param_1[2] == 2) {
      param_1[4] = param_1[3];
    }
    FUN_0065e720();
  }
  return param_1;
}

