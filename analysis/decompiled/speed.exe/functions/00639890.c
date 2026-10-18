/* speed.exe 00639890 FUN_00639890; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall
FUN_00639890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008790b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  param_1[2] = param_2;
  param_1[5] = param_5;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c58;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[6] = param_6;
  if (param_6 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_6);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00445650);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x28))(param_1[2],param_1[3],param_1[4],param_1[5]);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

