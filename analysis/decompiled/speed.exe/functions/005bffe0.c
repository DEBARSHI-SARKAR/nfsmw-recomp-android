/* speed.exe 005bffe0 FUN_005bffe0; analysis pseudocode, not buildable source.
 * calls 005aef40 FUN_005aef40
 * calls 00652ac0 _malloc
 * calls 005bd710 FUN_005bd710
 */

int __fastcall FUN_005bffe0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008743ab;
  local_c = ExceptionList;
  for (iVar3 = *(int *)(param_1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    ExceptionList = &local_c;
    if (*(int *)(iVar3 + 0x2010) != 0) goto LAB_005c0064;
  }
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x2020);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005bd710();
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
LAB_005c0064:
  iVar1 = *(int *)(iVar3 + 0x2014);
  if (iVar1 != 0) {
    FUN_005aef40(iVar1);
  }
  *(int *)(iVar3 + 0x201c) = *(int *)(iVar3 + 0x201c) + 1;
  ExceptionList = local_c;
  return iVar1;
}

