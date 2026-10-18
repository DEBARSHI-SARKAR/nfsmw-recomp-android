/* speed.exe 005b1fc0 FUN_005b1fc0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005b1fc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x84);
  uVar5 = 0;
  if (uVar3 != 0) {
    piVar1 = *(int **)(param_1 + 0x88);
    do {
      if ((undefined4 *)*piVar1 == param_2) break;
      uVar5 = uVar5 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar5 < *(uint *)(param_1 + 0x84));
  }
  if (uVar5 == uVar3) {
    return 0;
  }
  if (uVar3 != 1) {
    param_2 = _malloc((uVar3 * 3 + -3) * 4);
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else if (-1 < (int)(uVar3 - 2)) {
      iVar4 = uVar3 - 1;
      puVar2 = param_2 + 2;
      do {
        puVar2[-2] = 0;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (uVar5 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x88);
      puVar6 = param_2;
      for (uVar3 = uVar5 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    if (uVar5 < *(int *)(param_1 + 0x84) - 1U) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x88) + 0xc + uVar5 * 0xc);
      puVar6 = param_2 + uVar5 * 3;
      for (uVar3 = (*(int *)(param_1 + 0x84) - uVar5) * 0xc - 0xc >> 2; uVar3 != 0;
          uVar3 = uVar3 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x88));
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    *(undefined4 **)(param_1 + 0x88) = param_2;
    return 1;
  }
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 1;
}

