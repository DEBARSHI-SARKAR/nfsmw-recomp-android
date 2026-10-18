/* speed.exe 005e76f0 FUN_005e76f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e76f0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x4c);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      (**(code **)*puVar2)(0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x34;
    } while (uVar1 < *(uint *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

