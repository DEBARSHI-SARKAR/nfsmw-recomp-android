/* speed.exe 0082c2b0 FUN_0082c2b0; analysis pseudocode, not buildable source.
 */

void FUN_0082c2b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_8;
  
  local_8 = &DAT_009c2954;
  do {
    iVar1 = *local_8;
    if (iVar1 != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar1 + 0xc0 + iVar2 * 4) == param_1) {
          *(undefined4 *)(iVar1 + 0xc0 + iVar2 * 4) = 0;
          iVar2 = iVar2 + 1;
          *(int *)(iVar1 + 0x1100) = *(int *)(iVar1 + 0x1100) + -1;
          if (iVar2 < 0x10) {
            puVar4 = (undefined4 *)(iVar1 + 0xc0 + iVar2 * 4);
            puVar5 = (undefined4 *)(iVar1 + 0xbc + iVar2 * 4);
            for (iVar3 = 0x10 - iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            iVar2 = iVar2 + (0x10 - iVar2);
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x11);
    }
    local_8 = local_8 + 1;
  } while ((int)local_8 < 0x9c2964);
  return;
}

