/* speed.exe 00745930 FUN_00745930; analysis pseudocode, not buildable source.
 * calls 0073a040 FUN_0073a040
 */

void __thiscall FUN_00745930(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = FUN_0073a040(*param_2);
  if ((0 < (int)uVar2) && ((int)uVar2 < 0x4c)) {
    puVar1 = (uint *)(param_1 + 0x54 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  return;
}

