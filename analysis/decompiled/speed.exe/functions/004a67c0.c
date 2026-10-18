/* speed.exe 004a67c0 FUN_004a67c0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004a67c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086af58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00895b20;
  local_4 = 0;
  if (param_1[6] != 0) {
    (**(code **)(*DAT_009117f4 + 0x2c))(param_1[6]);
  }
  if (param_1[7] != 0) {
    (**(code **)(*DAT_009117f4 + 0x2c))(param_1[7]);
  }
  if (param_1[8] != 0) {
    (**(code **)(*DAT_009117f4 + 0x2c))(param_1[8]);
  }
  if (param_1[9] != 0) {
    (**(code **)(*DAT_009117f4 + 0x2c))(param_1[9]);
  }
  if (param_1[0xb] != 0) {
    DAT_00911808 = DAT_00911808 + -1;
    if ((DAT_00911800 != 0) && (DAT_00911808 < 1)) {
      (*(code *)PTR_FUN_008ee4d4)(DAT_00911800,DAT_00911804);
      DAT_00911800 = 0;
    }
  }
  if (param_1[3] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[3]);
  }
  if (param_1[4] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[4]);
  }
  if (param_1[5] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[5]);
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[0x1f]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = pvStack_c;
  return;
}

