/* speed.exe 00625880 FUN_00625880; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 006e8df0 FUN_006e8df0
 * calls 00516e10 FUN_00516e10
 * calls 005258b0 FUN_005258b0
 */

void __fastcall FUN_00625880(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008775d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a76bc;
  local_4 = 0;
  FUN_005258b0(0);
  iVar1 = FUN_00516e10();
  *(undefined1 *)(iVar1 + 1) = 0;
  iVar1 = FUN_006e8df0();
  if (((iVar1 != 1) && (DAT_0091e000 != 0)) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    FUN_005faa20();
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

