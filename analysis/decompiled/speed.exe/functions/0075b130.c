/* speed.exe 0075b130 FUN_0075b130; analysis pseudocode, not buildable source.
 * calls 0075ae10 FUN_0075ae10
 * calls 006e9e40 FUN_006e9e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0075b130(int param_1)

{
  int iVar1;
  char cVar2;
  undefined **local_18;
  undefined1 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881288;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x38);
  if (((iVar1 == 0) || (*(uint *)(iVar1 + 0x1c) < *(uint *)(iVar1 + 0x20))) ||
     (*(int *)(iVar1 + 0x20) == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  local_10 = _DAT_00890968;
  if (iVar1 != 0) {
    local_10 = *(undefined4 *)(iVar1 + 0x24);
  }
  local_18 = &PTR_LAB_008b47d8;
  local_4 = 0;
  ExceptionList = &local_c;
  cVar2 = FUN_006e9e40(&local_18);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x28) = 0;
    }
    ExceptionList = local_c;
    return;
  }
  FUN_0075ae10();
  ExceptionList = local_c;
  return;
}

