/* speed.exe 0063a140 FUN_0063a140; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall FUN_0063a140(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  param_1[2] = param_2;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c78;
  param_1[3] = param_3;
  if (param_3 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_3);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00620460);
      if (piVar2 != (int *)0x0) {
        if (param_1[2] == 0) {
          (**(code **)(*piVar2 + 0xc))(0);
          ExceptionList = param_1;
          return param_1;
        }
        (**(code **)(*piVar2 + 0xc))(1);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

