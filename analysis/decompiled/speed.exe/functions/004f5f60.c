/* speed.exe 004f5f60 FUN_004f5f60; analysis pseudocode, not buildable source.
 * calls 004b02a0 FUN_004b02a0
 * calls 00664cc0 FUN_00664cc0
 * calls 004ca430 FUN_004ca430
 */

void __fastcall FUN_004f5f60(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086d71b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899664;
  local_4 = 1;
  if (param_1[0x15] != 0) {
    FUN_00664cc0(param_1[0x15]);
  }
  if (param_1[0x16] != 0) {
    FUN_00664cc0(param_1[0x16]);
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  param_1[0x14] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004b02a0();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 2;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

