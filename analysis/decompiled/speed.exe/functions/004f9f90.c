/* speed.exe 004f9f90 FUN_004f9f90; analysis pseudocode, not buildable source.
 * calls 004eaff0 FUN_004eaff0
 * calls 004eaf90 FUN_004eaf90
 * calls 00652ad0 _malloc
 * calls 004f8f40 FUN_004f8f40
 */

void __thiscall
FUN_004f9f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_24 [2];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086dd74;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  puVar2 = _malloc(0x30);
  local_14 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_24[0] = puVar2;
    FUN_004eaff0();
    *puVar2 = &PTR_LAB_008992e4;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    puVar2[6] = param_4;
    puVar2[8] = param_5;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  local_14 = 0xffffffff;
  local_24[0] = puVar2;
  iVar3 = FUN_004eaf90(iVar1,*(undefined4 *)(iVar1 + 4),local_24);
  FUN_004f8f40(1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_1c;
  return;
}

