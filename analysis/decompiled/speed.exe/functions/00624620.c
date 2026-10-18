/* speed.exe 00624620 FUN_00624620; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 006672d0 FUN_006672d0
 * calls 00569cc0 FUN_00569cc0
 * calls 005169b0 FUN_005169b0
 */

void __fastcall FUN_00624620(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a72c8;
  local_4 = 0;
  if (DAT_00925e90 == 6) {
    FUN_00569cc0();
    cVar1 = FUN_00516b50("FadeScreen.fng");
    if (cVar1 != '\0') {
      FUN_005169b0("FadeScreen.fng");
    }
    FUN_006672d0();
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

