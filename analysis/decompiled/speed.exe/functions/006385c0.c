/* speed.exe 006385c0 FUN_006385c0; analysis pseudocode, not buildable source.
 * calls 00633f40 FUN_00633f40
 */

void __fastcall FUN_006385c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7c20;
  local_4 = 0;
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    puVar2 = &DAT_0091f170;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_00633f40(param_1[2],CONCAT31((int3)((uint)param_1[4] >> 8),param_1[4] != 0));
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

