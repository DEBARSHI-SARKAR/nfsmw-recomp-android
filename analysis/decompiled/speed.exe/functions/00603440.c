/* speed.exe 00603440 FUN_00603440; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 * calls 005d29d0 FUN_005d29d0
 * calls 00602680 FUN_00602680
 */

undefined4 __thiscall FUN_00603440(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008762b2;
  local_c = ExceptionList;
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_2 + 0xc);
  ExceptionList = &local_c;
  if ((piVar1 != (int *)0x0) && (ExceptionList = &local_c, *piVar1 == 0)) {
    ExceptionList = &local_c;
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_2 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  iVar3 = FUN_005d29d0(0x24,0);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00602680(param_2);
  }
  *(undefined4 *)(param_1 + 0x10 + iVar2 * 4) = uVar4;
  ExceptionList = local_c;
  return uVar4;
}

