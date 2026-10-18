/* speed.exe 00587030 FUN_00587030; analysis pseudocode, not buildable source.
 * calls 00460ed0 FUN_00460ed0
 * calls 005251a0 FUN_005251a0
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e90 FUN_00515e90
 * calls 00573270 FUN_00573270
 */

int __thiscall FUN_00587030(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  FUN_00460ed0(local_40,*(undefined4 *)(param_1 + 0x1c),&DAT_0089d764);
  FUN_00515e20(local_20,0x20,local_40,*(undefined4 *)(param_1 + 0x24));
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = FUN_005af1c0(local_20);
  iVar5 = FUN_005251a0(uVar2,uVar4);
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (param_2 != 0) {
      FUN_00573270(iVar5);
      piVar3 = *(int **)(param_1 + 8);
      piVar1 = (int *)(param_2 + 4);
      *piVar3 = (int)piVar1;
      *(int **)(param_1 + 8) = piVar1;
      *(int **)(param_2 + 8) = piVar3;
      *piVar1 = param_1 + 4;
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar6 = *(int *)(param_1 + 4);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + -4;
        }
        *(int *)(param_1 + 0xc) = iVar6;
        FUN_00515e90(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x10))
        ;
      }
      return iVar5;
    }
  }
  return 0;
}

