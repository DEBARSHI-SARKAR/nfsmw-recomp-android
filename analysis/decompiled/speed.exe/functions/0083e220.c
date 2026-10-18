/* speed.exe 0083e220 FUN_0083e220; analysis pseudocode, not buildable source.
 * calls 0083e020 FUN_0083e020
 */

undefined4 * FUN_0083e220(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar2 = FUN_0083e020(), iVar2 < 1)) {
    return (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  *puVar1 = param_2;
  *(undefined4 **)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x18) * 4) = puVar1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if ((*(code **)(param_1 + 0x24) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x24))
                        (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),*puVar1),
     iVar2 < 1)) {
    return puVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return puVar1;
}

