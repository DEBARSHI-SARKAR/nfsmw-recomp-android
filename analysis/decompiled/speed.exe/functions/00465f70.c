/* speed.exe 00465f70 FUN_00465f70; analysis pseudocode, not buildable source.
 * calls 00465de0 FUN_00465de0
 */

undefined4 * __fastcall FUN_00465f70(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(param_1 + 0x10) == 0) && ((*(byte *)(param_1 + 0x14) & 1) != 0)) {
    FUN_00465de0(((int)(*(int *)(param_1 + 0x24) + (*(int *)(param_1 + 0x24) >> 0x1f & 3U)) >> 2) +
                 1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    if (((*(byte *)(param_1 + 0x14) & 2) != 0) &&
       (iVar3 = *(int *)(param_1 + 0x28) >> 2, puVar4 = puVar1, 0 < iVar3)) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return puVar1;
}

