/* speed.exe 00631100 FUN_00631100; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00631100(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a74f8;
  local_4 = 0;
  puVar2 = DAT_0092d87c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x20))();
      piVar1 = (int *)FUN_005d59f0(&LAB_004b4380);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != DAT_0092d87c + DAT_0092d884);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

