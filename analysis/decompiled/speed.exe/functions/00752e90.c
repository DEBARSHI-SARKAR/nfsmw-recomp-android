/* speed.exe 00752e90 FUN_00752e90; analysis pseudocode, not buildable source.
 * calls 00507730 FUN_00507730
 * calls 00663f00 FUN_00663f00
 * calls 00748350 FUN_00748350
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 FUN_00752e90(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((short)param_1[5] != 0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x16) == '\x02') {
    if (param_1[4] == 0) {
      FUN_00507730(param_1[2]);
    }
    else {
      FUN_00663f00(param_1[4]);
      param_1[4] = 0;
    }
  }
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  FUN_00748350();
  FUN_00463ca0(DAT_009b0a04,param_1);
  return 1;
}

