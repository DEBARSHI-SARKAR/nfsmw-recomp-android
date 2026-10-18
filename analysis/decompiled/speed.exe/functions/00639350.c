/* speed.exe 00639350 FUN_00639350; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall FUN_00639350(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c40;
  param_1[2] = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00405000);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))();
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

