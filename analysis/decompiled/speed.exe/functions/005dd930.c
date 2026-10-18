/* speed.exe 005dd930 FUN_005dd930; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005dd930(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  uVar2 = 0;
  uVar1 = param_2;
  do {
    uVar1 = *(uint *)(param_1 + 0x70) & uVar1;
    if (*(uint *)(*(int *)(param_1 + 0x78) + uVar1 * 8) == param_2) {
      return *(undefined4 *)(*(int *)(param_1 + 0x78) + 4 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 <= *(uint *)(param_1 + 0x74));
  return 0;
}

