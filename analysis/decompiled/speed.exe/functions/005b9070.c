/* speed.exe 005b9070 FUN_005b9070; analysis pseudocode, not buildable source.
 * calls 005b0fc0 FUN_005b0fc0
 * calls 00652ac0 _malloc
 * calls 005b2a10 FUN_005b2a10
 */

void __fastcall FUN_005b9070(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873ffb;
  local_c = ExceptionList;
  for (iVar3 = *(int *)(param_1 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    ExceptionList = &local_c;
    if (*(short *)(iVar3 + 0xe) != 0x20) goto LAB_005b90f8;
  }
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x18);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005b0fc0(*(undefined2 *)(param_1 + 0x1c));
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 0x14) = iVar3;
    if (*(int *)(param_1 + 0x18) == 0) {
      *(int *)(param_1 + 0x18) = iVar3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_005b90f8:
  FUN_005b2a10();
  ExceptionList = local_c;
  return;
}

