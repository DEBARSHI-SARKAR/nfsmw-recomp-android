/* speed.exe 005e77b0 FUN_005e77b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e77b0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      (**(code **)*puVar2)(0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

