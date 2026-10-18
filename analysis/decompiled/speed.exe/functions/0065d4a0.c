/* speed.exe 0065d4a0 FUN_0065d4a0; analysis pseudocode, not buildable source.
 * calls 0065c860 FUN_0065c860
 * calls 006490e0 FUN_006490e0
 * calls 00658480 FUN_00658480
 */

undefined4 FUN_0065d4a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  if (*param_1 != -0x7ffc5000) {
    return 0;
  }
  piVar3 = param_1 + 2;
  if (piVar3 < (int *)(param_1[1] + 8 + (int)param_1)) {
    do {
      uVar1 = (int)piVar3 + piVar3[3] + 0x27 & 0xfffffff0;
      uVar2 = (int)piVar3 + 0x1fU & 0xfffffff0;
      *(uint *)(uVar2 + 0x20) = uVar1;
      *(uint *)(uVar2 + 0x24) = uVar1 + 0x10;
      *(undefined1 *)(uVar2 + 0x18) = 0;
      *(undefined4 *)(uVar2 + 0x28) = 0;
      if (*(int *)(uVar2 + 8) == 0) {
        *(undefined **)(uVar2 + 0x28) = &DAT_009259d0;
      }
      FUN_006490e0();
      FUN_0065c860(uVar2);
      FUN_00658480();
      piVar3 = (int *)((int)piVar3 + piVar3[1] + 8);
    } while (piVar3 < (int *)(param_1[1] + 8 + (int)param_1));
  }
  return 1;
}

