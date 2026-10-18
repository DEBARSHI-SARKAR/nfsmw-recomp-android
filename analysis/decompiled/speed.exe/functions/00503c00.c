/* speed.exe 00503c00 FUN_00503c00; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00503c00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  for (puVar3 = *(undefined4 **)(param_1 + 8); puVar3 != (undefined4 *)(param_1 + 8);
      puVar3 = (undefined4 *)*puVar3) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    puVar3[0x18] = *param_2;
    puVar3[0x19] = uVar1;
    puVar3[0x1a] = uVar2;
  }
  return;
}

