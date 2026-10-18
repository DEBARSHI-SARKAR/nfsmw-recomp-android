/* speed.exe 00640340 FUN_00640340; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00640340(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008796b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6890;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))();
        if (DAT_0092d884 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)*DAT_0092d87c;
        }
        uVar3 = (**(code **)(*piVar4 + 4))();
        (**(code **)(*piVar2 + 0x18))(0,uVar3);
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

