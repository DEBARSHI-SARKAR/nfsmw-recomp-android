/* speed.exe 004a7b60 FUN_004a7b60; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004a7b60(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086af78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00895c00;
  local_4 = 0;
  if (param_1[7] != 0) {
    DAT_00911814 = DAT_00911814 + -1;
    if ((DAT_0091180c != 0) && (DAT_00911814 < 1)) {
      (*(code *)PTR_FUN_008ee4d4)(DAT_0091180c,DAT_00911810);
      DAT_0091180c = 0;
    }
  }
  if (param_1[3] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[3]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = pvStack_c;
  return;
}

