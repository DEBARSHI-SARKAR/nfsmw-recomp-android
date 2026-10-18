/* speed.exe 0070f330 FUN_0070f330; analysis pseudocode, not buildable source.
 * calls 00708a50 FUN_00708a50
 * calls 004ac0e0 FUN_004ac0e0
 * calls 00831109 FUN_00831109
 * calls 0070e6b0 FUN_0070e6b0
 * calls 004b1f60 FUN_004b1f60
 * calls 004b2210 FUN_004b2210
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070f330(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087fd2e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b24f0;
  local_4 = 2;
  FUN_0070e6b0();
  if (param_1[0xb] != 0) {
    FUN_004b2210();
  }
  if (param_1[8] != 0) {
    FUN_004ac0e0(param_1[8]);
    param_1[8] = 0;
  }
  if (DAT_0099227c != 0) {
    FUN_004ac0e0(DAT_0099227c);
    DAT_0099227c = 0;
  }
  if (param_1[4] != 0) {
    FUN_004ac0e0(param_1[4]);
    param_1[4] = 0;
    param_1[9] = 0;
  }
  if (DAT_00992274 != 0) {
    FUN_00831109(DAT_00992274);
    FUN_004ac0e0(DAT_00992274);
    DAT_00992274 = 0;
  }
  FUN_00708a50();
  if (param_1[0xb] != 0) {
    FUN_004b1f60(0);
    param_1[0xb] = 0;
  }
  iVar1 = param_1[0x1f];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x21] - iVar1 >> 2) * 4,0);
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x11] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  param_1[0x26] = 0;
  param_1[0x1d] = &PTR_LAB_008967fc;
  iVar1 = param_1[0x1f];
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x21] - iVar1 >> 2) * 4,0);
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00708a50();
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = pvStack_c;
  return;
}

