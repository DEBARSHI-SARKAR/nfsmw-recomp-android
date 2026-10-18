/* speed.exe 006407d0 FUN_006407d0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_006407d0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_00879758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6b70;
  local_4 = 0;
  if (DAT_0092d884 != 0) {
    piVar3 = (int *)*DAT_0092d87c;
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 0x20))();
      if (iVar2 != 0) {
        (**(code **)(*piVar3 + 0x20))();
        piVar3 = (int *)FUN_005d59f0(&LAB_005659c0);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x14))(param_1[2]);
        }
      }
    }
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = local_c;
    return;
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = pvVar1;
  return;
}

