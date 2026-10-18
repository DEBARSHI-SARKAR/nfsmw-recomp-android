/* speed.exe 0070cfd0 FUN_0070cfd0; analysis pseudocode, not buildable source.
 * calls 00708a50 FUN_00708a50
 * calls 004ac0e0 FUN_004ac0e0
 * calls 00831109 FUN_00831109
 * calls 004b1f60 FUN_004b1f60
 * calls 004b2210 FUN_004b2210
 */

void __fastcall FUN_0070cfd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087fbbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b2228;
  local_4 = 2;
  if (param_1[0xb] != 0) {
    FUN_004b2210();
  }
  if (param_1[8] != 0) {
    FUN_004ac0e0(param_1[8]);
    param_1[8] = 0;
  }
  if (DAT_00992290 != 0) {
    FUN_004ac0e0(DAT_00992290);
    DAT_00992290 = 0;
  }
  if (param_1[4] != 0) {
    FUN_004ac0e0(param_1[4]);
    param_1[4] = 0;
    param_1[9] = 0;
  }
  if (DAT_00992288 != 0) {
    FUN_00831109(DAT_00992288);
    FUN_004ac0e0(DAT_00992288);
    DAT_00992288 = 0;
  }
  DAT_00992294 = 0;
  if (param_1[0x1f] != 0) {
    FUN_004ac0e0(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  FUN_00708a50();
  if (param_1[0xb] != 0) {
    FUN_004b1f60(2);
    param_1[0xb] = 0;
  }
  if (param_1[0x1f] != 0) {
    *(undefined1 *)(param_1[0x1f] + 0x18) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00708a50();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

