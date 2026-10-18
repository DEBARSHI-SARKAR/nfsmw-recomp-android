/* speed.exe 00866f80 FUN_00866f80; analysis pseudocode, not buildable source.
 * calls 00866e20 FUN_00866e20
 */

int FUN_00866f80(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_1[*param_1 + 4] == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)param_1[*param_1 + 2];
  uVar2 = param_1[1];
  iVar1 = 0;
  uVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = (int)puVar5[iVar1] >> 0x1f;
      uVar3 = (puVar5[iVar1] ^ uVar3) - uVar3;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[1]);
    if (0x7ffe < uVar4) {
      FUN_00866e20(param_2,puVar5,uVar4);
      goto LAB_00866ff0;
    }
  }
  iVar1 = 0;
  if (0 < (int)uVar2) {
    do {
      *(undefined2 *)(param_2 + iVar1 * 2) = *(undefined2 *)(puVar5 + iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
LAB_00866ff0:
  for (uVar2 = param_1[1] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  param_1[*param_1 + 4] = 0;
  param_1[*param_1 + 6] = 0;
  *param_1 = (uint)(*param_1 == 0);
  return param_1[1] << 1;
}

