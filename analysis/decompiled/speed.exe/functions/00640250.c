/* speed.exe 00640250 FUN_00640250; analysis pseudocode, not buildable source.
 * calls 006e8df0 FUN_006e8df0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00640250(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6874;
  local_4 = 0;
  iVar2 = FUN_006e8df0();
  if (iVar2 != 0) {
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = local_c;
    return;
  }
  if (DAT_0092d884 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*DAT_0092d87c;
  }
  iVar2 = (**(code **)(*piVar3 + 4))();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_005d59f0(&LAB_00403770);
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)FUN_005d59f0(&LAB_004039e0);
      if (piVar4 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0xc))();
        if (cVar1 != '\0') {
          (**(code **)(*piVar3 + 0x10))(0);
          (**(code **)(*piVar4 + 0xc))(1);
          (**(code **)(*piVar4 + 0x10))(3,0x3f800000);
        }
      }
    }
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = local_c;
    return;
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

