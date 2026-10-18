/* speed.exe 0062ac30 FUN_0062ac30; analysis pseudocode, not buildable source.
 * calls 0071f6e0 FUN_0071f6e0
 */

void __fastcall FUN_0062ac30(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6844;
  local_4 = 0;
  if ((param_1[2] != 0) && (DAT_00993cc8 != 0)) {
    FUN_0071f6e0(1);
  }
  if (param_1[3] == 0) {
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = local_c;
    return;
  }
  puVar1 = DAT_0092fd2c;
  if (DAT_0092fd2c != DAT_0092fd2c + DAT_0092fd34) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x110))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_0092fd2c + DAT_0092fd34);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

