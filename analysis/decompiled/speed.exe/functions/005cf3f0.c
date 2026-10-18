/* speed.exe 005cf3f0 FUN_005cf3f0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005c80d0 FUN_005c80d0
 */

void __thiscall FUN_005cf3f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_2 < param_3) {
      piVar5 = param_2 + 3;
      iVar3 = ((uint)((int)param_3 + (-1 - (int)param_2)) >> 4) + 1;
      do {
        if (((*(byte *)(piVar5 + -2) & 4) != 0) && (*piVar5 != 0)) {
          FUN_004655f0(*piVar5);
        }
        piVar5 = piVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar3 = iVar3 * 0x10 + param_1;
    }
    uVar1 = (((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 - (int)param_3) + iVar3;
    if (uVar1 != 0) {
      puVar4 = param_3;
      puVar6 = param_2;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - ((int)param_3 - (int)param_2 >> 4);
  }
  FUN_005c80d0();
  return;
}

