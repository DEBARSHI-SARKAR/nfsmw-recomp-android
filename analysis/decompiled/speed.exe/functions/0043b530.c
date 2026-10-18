/* speed.exe 0043b530 FUN_0043b530; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00433f80 FUN_00433f80
 * calls 0041c3c0 FUN_0041c3c0
 */

void __thiscall FUN_0043b530(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_4;
  
  uVar3 = param_2;
  local_4 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = FUN_005cc240(param_2);
  piVar1 = DAT_0090d8ec;
  do {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
LAB_0043b561:
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
      param_2 = iVar2;
      uVar3 = FUN_005cc240(uVar3);
      *(undefined4 *)(iVar2 + 0x38) = uVar3;
      iVar2 = *(int *)(param_1 + 0xc);
      iVar4 = FUN_0041c3c0(iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
      FUN_00433f80(1);
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      return;
    }
    if (*piVar1 == iVar2) {
      iVar2 = (*(code *)piVar1[1])(&local_4);
      goto LAB_0043b561;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

