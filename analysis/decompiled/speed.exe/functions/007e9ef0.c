/* speed.exe 007e9ef0 FUN_007e9ef0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9ef0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffeff | 0x100;
  uVar3 = ((*(int *)(param_2 + 8) != 1) - 1 & 4) << 8;
  *param_1 = uVar3 | uVar1 & 0xfffffaff | 0x100;
  uVar2 = ((*(int *)(param_2 + 0xc) != 1) - 1 & 8) << 8;
  *param_1 = uVar2 | uVar3 | uVar1 & 0xfffff2ff | 0x100;
  *param_1 = ((*(int *)(param_2 + 0x10) != 1) - 1 & 2) << 8 |
             uVar2 | uVar3 | uVar1 & 0xfffff0ff | 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}

