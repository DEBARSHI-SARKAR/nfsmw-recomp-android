/* speed.exe 00639d00 FUN_00639d00; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 * __thiscall
FUN_00639d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  param_1[2] = param_2;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7c68;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if ((((param_4 != 0) &&
       (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_4), iVar1 != 0)) &&
      (*(int *)(iVar1 + 4) != 0)) &&
     (piVar2 = (int *)FUN_005d59f0(&LAB_004040e0), piVar2 != (int *)0x0)) {
    if (param_1[2] == 0) {
      (**(code **)(*piVar2 + 0xa4))();
    }
    else {
      (**(code **)(*piVar2 + 0xa0))(0x7000);
    }
    if (param_1[3] == 0) {
      (**(code **)(*piVar2 + 0xa4))();
      ExceptionList = unaff_ESI;
      return param_1;
    }
    (**(code **)(*piVar2 + 0xa0))(7);
  }
  ExceptionList = local_c;
  return param_1;
}

