/* speed.exe 007f5da9 FUN_007f5da9; analysis pseudocode, not buildable source.
 * calls 007f5c07 FUN_007f5c07
 */

void __thiscall FUN_007f5da9(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14 [4];
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    do {
      local_14[uVar2] = *puVar3;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < uVar1);
  }
  FUN_007f5c07();
  (**(code **)**(undefined4 **)(param_1 + 0x10))
            (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),local_14);
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}

