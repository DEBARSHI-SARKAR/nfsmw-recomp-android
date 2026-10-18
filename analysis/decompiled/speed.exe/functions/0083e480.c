/* speed.exe 0083e480 FUN_0083e480; analysis pseudocode, not buildable source.
 * calls 0084c1e0 FUN_0084c1e0
 */

undefined4 FUN_0083e480(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x40);
    puVar3 = puVar2 + *(int *)(param_1 + 0x18);
    puVar4 = puVar2;
    if (puVar2 != puVar3) {
      do {
        if ((*(code **)(param_1 + 0x24) == (code *)0x0) ||
           (iVar1 = (**(code **)(param_1 + 0x24))
                              (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),
                               *(undefined4 *)*puVar2), 0 < iVar1)) {
          *puVar4 = *puVar2;
          puVar4 = puVar4 + 1;
        }
        else {
          *puVar3 = *puVar2;
          puVar3 = puVar3 + 1;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x18) * 4));
    }
    *(int *)(param_1 + 0x14) = (int)puVar4 - *(int *)(param_1 + 0x40) >> 2;
    for (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x18) * 4);
        puVar2 != puVar3; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    *(int *)(param_1 + 0x18) = (int)puVar4 - *(int *)(param_1 + 0x40) >> 2;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_0084c1e0(param_1,*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x14),4,&LAB_0083e120)
      ;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 2;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

