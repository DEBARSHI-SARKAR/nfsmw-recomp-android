/* speed.exe 00621d60 FUN_00621d60; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 00516990 FUN_00516990
 * calls 00516e10 FUN_00516e10
 */

undefined4 * __fastcall FUN_00621d60(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a6bd4;
  local_4 = 0;
  cVar1 = FUN_00516b50("FadeScreenNoLoadingBar.fng");
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)FUN_00516e10();
    *puVar2 = 1;
    FUN_00516990("FadeScreenNoLoadingBar.fng",0x67);
  }
  ExceptionList = local_c;
  return param_1;
}

