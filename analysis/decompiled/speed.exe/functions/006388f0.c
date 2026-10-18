/* speed.exe 006388f0 FUN_006388f0; analysis pseudocode, not buildable source.
 * calls 005f6a30 FUN_005f6a30
 * calls 005dd930 FUN_005dd930
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall
FUN_006388f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c28;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if (param_2 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 != 0) {
        iVar2 = FUN_005d59f0(&LAB_00403950);
        if (iVar2 == 0) {
          iVar2 = FUN_005dd930(param_1[4]);
          if (iVar2 != 0) {
            FUN_005f6a30(iVar1,param_1[3]);
          }
        }
      }
      ExceptionList = local_c;
      return param_1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

