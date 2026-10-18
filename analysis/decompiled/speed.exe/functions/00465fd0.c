/* speed.exe 00465fd0 FUN_00465fd0; analysis pseudocode, not buildable source.
 * calls 00465de0 FUN_00465de0
 */

undefined4 * __thiscall FUN_00465fd0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x18) < param_2) {
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      return (undefined4 *)0x0;
    }
    iVar3 = ((int)(*(int *)(param_1 + 0x24) + (*(int *)(param_1 + 0x24) >> 0x1f & 3U)) >> 2) + 1;
    if (iVar3 < param_2) {
      iVar3 = param_2;
    }
    FUN_00465de0(iVar3);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    while (iVar3 < param_2 + -1) {
      puVar4 = (undefined4 *)*puVar4;
      iVar3 = iVar3 + 1;
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = *puVar4;
      *puVar4 = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar4;
      }
      param_2 = *(int *)(param_1 + 0x18) + param_2;
      *(int *)(param_1 + 0x18) = param_2;
      if (*(int *)(param_1 + 0x1c) < param_2) {
        *(int *)(param_1 + 0x1c) = param_2;
      }
      puVar4 = puVar1;
      if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
        do {
          iVar3 = *(int *)(param_1 + 0x28) >> 2;
          puVar2 = puVar4;
          if (1 < iVar3) {
            while( true ) {
              iVar3 = iVar3 + -1;
              if (iVar3 == 0) break;
              puVar2[1] = 0;
              puVar2 = puVar2 + 1;
            }
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

