/* speed.exe 0083e2f0 FUN_0083e2f0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0083e2f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) <= param_2) {
    return 0;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x40) + param_2 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (param_2 < iVar1) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x40) + 4 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x18));
  }
  uVar3 = *puVar2;
  *puVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 **)(param_1 + 0x38) = puVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return uVar3;
}

