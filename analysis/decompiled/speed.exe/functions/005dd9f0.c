/* speed.exe 005dd9f0 FUN_005dd9f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005dd9f0(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  param_2 = param_2 >> 5;
  uVar1 = *(uint *)(param_1 + 0x264 + param_2 * 4);
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x264 + param_2 * 4) = uVar1 | uVar2;
    return;
  }
  *(uint *)(param_1 + 0x264 + param_2 * 4) = uVar1 & ~uVar2;
  return;
}

