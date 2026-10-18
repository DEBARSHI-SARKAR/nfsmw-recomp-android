/* speed.exe 00480dd0 FUN_00480dd0; analysis pseudocode, not buildable source.
 * calls 006466b0 FUN_006466b0
 * calls 0047bcd0 FUN_0047bcd0
 */

void __fastcall FUN_00480dd0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086a5b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00895110;
  local_4 = 1;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006466b0();
  FUN_0047bcd0();
  ExceptionList = pvStack_c;
  return;
}

