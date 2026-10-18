/* speed.exe 005e3a70 FUN_005e3a70; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659250 FUN_00659250
 * calls 005e2580 FUN_005e2580
 */

void __fastcall FUN_005e3a70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087506f;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0) {
    ExceptionList = &local_c;
    FUN_00452880(0x14,1);
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    uStack_4 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_005e2580(**(undefined4 **)(param_1 + 4),0,0);
      *(undefined4 *)(param_1 + 8) = uVar2;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

