/* speed.exe 00594ea0 FUN_00594ea0; analysis pseudocode, not buildable source.
 * calls 00579840 FUN_00579840
 * calls 005675d0 FUN_005675d0
 * calls 006e8df0 FUN_006e8df0
 */

void __fastcall FUN_00594ea0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  iVar1 = FUN_006e8df0();
  if (iVar1 == 1) {
    if (DAT_0092d884 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(DAT_0092d87c + -4 + DAT_0092d884 * 4);
    }
    uVar2 = (**(code **)(*piVar3 + 4))();
    FUN_00579840(auStack_8,auStack_10,uVar2);
    FUN_005675d0(auStack_8,auStack_10,*(undefined4 *)(param_1 + 0x94),0);
  }
  return;
}

