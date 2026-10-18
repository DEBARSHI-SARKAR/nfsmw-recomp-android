/* speed.exe 005d03a0 FUN_005d03a0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005d03a0 FUN_005d03a0
 * calls 005ca4f0 FUN_005ca4f0
 */

undefined1 __thiscall FUN_005d03a0(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 0x118);
  if (*(uint *)(param_1 + 0x114) < uVar2 + param_2) {
    if ((0x10 < *(uint *)(param_1 + 0x114) - uVar2) && ((uVar2 & 0x1f) != 0)) {
      FUN_005d03a0(0x10);
    }
    uVar2 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x118);
    while (0x20 < uVar2) {
      FUN_005d03a0(0x20);
      uVar2 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x118);
    }
    cVar1 = FUN_005ca4f0(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x110) + *(int *)(param_1 + 0x118));
  *(uint *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + param_2;
  if (param_2 < 0x401) {
    uVar2 = param_2 - 1 >> 4;
    *puVar3 = *(undefined4 *)(param_1 + uVar2 * 4);
    *(undefined4 **)(param_1 + uVar2 * 4) = puVar3;
    return 1;
  }
  FUN_004655f0(puVar3);
  return 1;
}

