/* speed.exe 0042cc70 FUN_0042cc70; analysis pseudocode, not buildable source.
 * calls 00424930 FUN_00424930
 */

void __fastcall FUN_0042cc70(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00868268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008915b8;
  iVar1 = param_1[3];
  local_4 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[3] = iVar2;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_FUN_008915c0)(param_1[1],param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_LAB_00890ef8;
  ExceptionList = local_c;
  return;
}

