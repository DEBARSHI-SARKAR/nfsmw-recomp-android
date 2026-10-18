/* speed.exe 007fd527 FUN_007fd527; analysis pseudocode, not buildable source.
 */

void FUN_007fd527(int param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  piVar2 = &DAT_008c44b8;
  param_2 = param_2 - (int)param_3;
  do {
    iVar1 = (int)*(short *)(param_2 + (int)param_3) * (int)*param_3 -
            (int)*(short *)(param_1 + *piVar2 * 2);
    local_8 = local_8 + iVar1 * iVar1;
    piVar2 = piVar2 + 1;
    param_3 = param_3 + 1;
  } while ((int)piVar2 < 0x8c45b8);
  *param_4 = local_8 * 4;
  return;
}

