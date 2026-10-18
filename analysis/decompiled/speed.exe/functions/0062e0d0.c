/* speed.exe 0062e0d0 FUN_0062e0d0; analysis pseudocode, not buildable source.
 * calls 0044b130 FUN_0044b130
 * calls 00460c50 FUN_00460c50
 */

undefined4 * __thiscall FUN_0062e0d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7b10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (param_2 != 0) {
    iVar1 = FUN_00460c50(param_2);
    if ((iVar1 != 0) && (DAT_009885c8 != (int *)0x0)) {
      iVar1 = (**(code **)(*DAT_009885c8 + 0x4c))();
      if (iVar1 != 0) {
        (**(code **)(*DAT_009885c8 + 0x4c))();
        piVar2 = (int *)FUN_0044b130(param_1[2]);
        if (piVar2 != (int *)0x0) {
          iVar1 = (**(code **)(*piVar2 + 0x20))();
          if (iVar1 != 0) {
            iVar1 = param_1[3];
            iVar3 = (**(code **)(*piVar2 + 0x20))();
            *(bool *)(iVar3 + 0x28) = iVar1 != 0;
            ExceptionList = local_c;
            return param_1;
          }
        }
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

