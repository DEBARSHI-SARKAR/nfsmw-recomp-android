/* speed.exe 005e77f0 FUN_005e77f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e77f0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      (**(code **)*puVar2)(0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

