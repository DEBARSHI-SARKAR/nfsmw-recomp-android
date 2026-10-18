/* speed.exe 007ead40 FUN_007ead40; analysis pseudocode, not buildable source.
 * calls 007e9a90 FUN_007e9a90
 */

void __thiscall FUN_007ead40(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_c4 [4];
  uint local_b4;
  
  FUN_007e9a90();
  uVar1 = *param_1;
  local_b4 = uVar1 >> 9 & 1;
  local_c4[2] = uVar1 >> 10 & 1;
  local_c4[3] = uVar1 >> 0xb & 1;
  puVar3 = local_c4;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

