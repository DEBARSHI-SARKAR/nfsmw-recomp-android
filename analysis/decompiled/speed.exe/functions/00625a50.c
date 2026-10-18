/* speed.exe 00625a50 FUN_00625a50; analysis pseudocode, not buildable source.
 * calls 005258b0 FUN_005258b0
 * calls 00516b50 FUN_00516b50
 */

void __fastcall FUN_00625a50(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008775f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7718;
  local_4 = 0;
  cVar1 = FUN_00516b50("WorldMapMain.fng");
  if (cVar1 != '\0') {
    FUN_005258b0(0);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

