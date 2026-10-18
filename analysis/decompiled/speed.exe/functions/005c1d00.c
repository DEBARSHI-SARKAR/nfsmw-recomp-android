/* speed.exe 005c1d00 FUN_005c1d00; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 005c02b0 FUN_005c02b0
 * calls 005aef40 FUN_005aef40
 */

int __fastcall FUN_005c1d00(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087458b;
  local_c = ExceptionList;
  for (iVar3 = *(int *)(param_1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    ExceptionList = &local_c;
    if (*(int *)(iVar3 + 0x610) != 0) goto LAB_005c1d84;
  }
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x620);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005c02b0();
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
    if (*(int *)(param_1 + 0xc) == 0) {
      *(int *)(param_1 + 0xc) = iVar3;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
LAB_005c1d84:
  iVar1 = *(int *)(iVar3 + 0x614);
  if (iVar1 != 0) {
    FUN_005aef40(iVar1);
  }
  *(int *)(iVar3 + 0x61c) = *(int *)(iVar3 + 0x61c) + 1;
  ExceptionList = local_c;
  return iVar1;
}

