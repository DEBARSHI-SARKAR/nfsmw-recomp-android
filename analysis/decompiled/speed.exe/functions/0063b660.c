/* speed.exe 0063b660 FUN_0063b660; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall
FUN_0063b660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 param_10,undefined4 param_11,int param_12)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008794e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x40;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[6] = param_6;
  param_1[5] = param_5;
  param_1[7] = param_7;
  param_1[8] = param_8;
  param_1[9] = param_9;
  *(undefined1 *)(param_1 + 10) = param_10;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a7ca8;
  param_1[0xb] = param_11;
  param_1[0xc] = param_12;
  if ((param_12 != 0) &&
     (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_12), iVar2 != 0)) {
    piVar1 = *(int **)(iVar2 + 4);
    if (piVar1 != (int *)0x0) {
      if (((param_1[5] != 0) &&
          (iVar2 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,param_1[5]), iVar2 != 0
          )) && (*(int **)(iVar2 + 4) != (int *)0x0)) {
        iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
        iVar3 = (**(code **)(*piVar1 + 0x70))();
        if (iVar2 != iVar3) {
          ExceptionList = local_c;
          return param_1;
        }
      }
      param_1[5] = 0;
    }
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}

