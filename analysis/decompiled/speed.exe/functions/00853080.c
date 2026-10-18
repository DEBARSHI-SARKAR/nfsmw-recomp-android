/* speed.exe 00853080 FUN_00853080; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00853080(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8) * 4) != 0) break;
        iVar2 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar2;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    iVar2 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x10) <= iVar2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
    *(int *)(param_1 + 8) = iVar2 + 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *puVar1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = puVar1[2];
  }
  return puVar1[1];
}

