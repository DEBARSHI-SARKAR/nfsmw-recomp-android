/* speed.exe 004f8ac0 FUN_004f8ac0; analysis pseudocode, not buildable source.
 * calls 004e7410 FUN_004e7410
 * calls 004ca430 FUN_004ca430
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_004f8ac0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086dbb0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899b80;
  local_4 = 0;
  if (param_1[0x5b] != 0) {
    FUN_00664cc0(param_1[0x5b]);
  }
  if (param_1[0x5c] != 0) {
    FUN_00664cc0(param_1[0x5c]);
  }
  if (param_1[0x5d] != 0) {
    FUN_00664cc0(param_1[0x5d]);
  }
  if (param_1[0x5e] != 0) {
    FUN_00664cc0(param_1[0x5e]);
  }
  if (param_1[0x5f] != 0) {
    FUN_00664cc0(param_1[0x5f]);
  }
  if (param_1[0x60] != 0) {
    FUN_00664cc0(param_1[0x60]);
  }
  if (param_1[0x61] != 0) {
    FUN_00664cc0(param_1[0x61]);
  }
  if (param_1[0x62] != 0) {
    FUN_00664cc0(param_1[0x62]);
  }
  FUN_004e7410();
  *param_1 = &PTR_FUN_008983e8;
  local_4 = 1;
  FUN_004ca430(param_1);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

