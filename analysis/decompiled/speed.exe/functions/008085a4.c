/* speed.exe 008085a4 FUN_008085a4; analysis pseudocode, not buildable source.
 * calls 0080855b FUN_0080855b
 */

void FUN_008085a4(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint local_30c [192];
  int local_c;
  uint local_8;
  
  iVar8 = 0;
  local_8 = 0;
  if (0 < (int)param_3) {
    puVar4 = local_30c + 2;
    do {
      *puVar4 = (iVar8 * 2 ^ *puVar4) & 0xfe ^ *puVar4 | 1;
      puVar1 = (uint *)(param_2 + iVar8 * 4);
      if (*puVar1 == 0) {
        *puVar1 = 1;
      }
      puVar4[-2] = 0xffffffff;
      puVar4[-1] = *puVar1;
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar8 < (int)param_3);
  }
  iVar8 = 1;
  local_c = param_3;
  uVar6 = 0;
  if (1 < (int)param_3) {
    do {
      FUN_0080855b(&local_8);
      iVar8 = iVar8 + 1;
      uVar6 = local_8;
    } while (iVar8 < (int)param_3);
  }
  uVar5 = local_30c[uVar6 * 3];
  if (uVar5 != 0xffffffff) {
    puVar4 = local_30c + param_3 * 3 + 2;
    puVar7 = (undefined1 *)(param_1 + 8 + (param_3 - 1) * 0xc);
    param_3 = param_3 - 1;
    do {
      uVar2 = local_30c[uVar6 * 3 + 1];
      local_8 = uVar2;
      uVar3 = local_30c[uVar5 * 3 + 1];
      *(uint *)(puVar7 + -0x14) = local_30c[uVar6 * 3 + 2];
      *(uint *)(puVar7 + -0x10) = local_30c[uVar5 * 3 + 2];
      puVar7 = puVar7 + -0xc;
      param_3 = param_3 - 1;
      uVar6 = *puVar4;
      puVar4[-2] = 0xffffffff;
      puVar4[-1] = uVar3 + uVar2;
      *puVar7 = (char)((int)(uVar2 << 8) / (int)(uVar3 + uVar2));
      *puVar4 = (param_3 & 0x7f) << 1 | uVar6 & 0xffffff00;
      local_8 = local_30c[uVar5 * 3];
      FUN_0080855b(&local_8);
      local_c = local_c + 1;
      uVar5 = local_30c[local_8 * 3];
      puVar4 = puVar4 + 3;
      uVar6 = local_8;
    } while (uVar5 != 0xffffffff);
  }
  return;
}

