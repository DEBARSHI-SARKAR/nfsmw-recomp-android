/* speed.exe 00621cc0 FUN_00621cc0; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 005169b0 FUN_005169b0
 */

undefined4 * __fastcall FUN_00621cc0(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a6bb0;
  local_4 = 0;
  cVar1 = FUN_00516b50("FadeScreenNoLoadingBar.fng");
  if (cVar1 != '\0') {
    FUN_005169b0("FadeScreenNoLoadingBar.fng");
  }
  ExceptionList = local_c;
  return param_1;
}

