/* speed.exe 005e7730 FUN_005e7730; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e7730(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      (**(code **)*puVar2)(0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

