/* speed.exe 00452720 FUN_00452720; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00452720(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 != 0) {
    iVar4 = iVar5 << 4;
    do {
      iVar4 = iVar4 + -0x10;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 8 + iVar4);
      piVar2 = *(int **)(param_1 + 4);
      iVar5 = iVar5 + -1;
      if ((uVar1 < (uint)piVar2[2]) &&
         (piVar3 = *(int **)(*piVar2 + 4 + uVar1 * 8), piVar3 != (int *)0x0)) {
        uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 8 + iVar4);
        if (uVar1 < (uint)piVar2[2]) {
          local_4 = *(undefined4 *)(*piVar2 + uVar1 * 8);
        }
        else {
          local_4 = 0;
        }
        (**(code **)(*piVar3 + 8))(param_1,&local_4,*(int *)(param_1 + 0x30) + iVar5 * 4);
      }
    } while (iVar5 != 0);
  }
  return;
}

