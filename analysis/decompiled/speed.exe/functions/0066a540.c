/* speed.exe 0066a540 FUN_0066a540; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00460bf0 FUN_00460bf0
 * calls 007398d0 FUN_007398d0
 * calls 004ab1c0 FUN_004ab1c0
 */

undefined4 FUN_0066a540(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a5f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004ab1c0(param_1,0,0);
  puVar2 = *(undefined1 **)(*(int *)(iVar1 + 8) + 0x1c);
  local_4 = 0;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00890978;
  }
  uVar3 = FUN_00460bf0(puVar2);
  uVar3 = FUN_007398d0(uVar3);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar3;
}

