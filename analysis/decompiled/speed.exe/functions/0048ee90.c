/* speed.exe 0048ee90 FUN_0048ee90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0048ee90(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_20 [4];
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar1 = param_3[1];
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20[2] = local_20[2] & param_3[2];
  local_20[0] = local_20[0] & *param_3;
  local_20[1] = local_20[1] & uVar1;
  local_20[3] = local_20[3] & param_3[3];
  local_8 = local_8 & param_3[6];
  local_4 = local_4 & param_3[7];
  local_10 = local_10 & param_3[4];
  local_c = local_c & param_3[5];
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

