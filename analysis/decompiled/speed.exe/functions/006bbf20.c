/* speed.exe 006bbf20 thunk_FUN_006bbae0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_006bbae0(undefined4 *param_1)

{
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_0087e166;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ad83c;
  param_1[2] = &PTR_LAB_008ad834;
  param_1[0x13] = &PTR_LAB_008ad818;
  param_1[0x15] = &PTR_LAB_008ad798;
  param_1[0x18] = &PTR_LAB_008ad778;
  uStack_4 = 1;
  if (param_1[0x21] != 0) {
    FUN_006eea10(param_1[0x21]);
    param_1[0x21] = 0;
  }
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_006bb410(auStack_10,*(undefined4 *)param_1[0x2a],(undefined4 *)param_1[0x2a]);
  if (param_1[0x2a] != 0) {
    FUN_005d0370(param_1[0x2a],0x18,0);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uStack_4 = 0xffffffff;
  FUN_006b8de0();
  ExceptionList = pvStack_c;
  return;
}

