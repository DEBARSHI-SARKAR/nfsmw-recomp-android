/* speed.exe 005e7770 FUN_005e7770; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e7770(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3c);
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      (**(code **)*puVar2)(0);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x20;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

