/* speed.exe 00827c9b FUN_00827c9b; analysis pseudocode, not buildable source.
 */

void FUN_00827c9b(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int unaff_ESI;
  float local_68 [12];
  float local_38 [12];
  int local_8;
  
  iVar6 = 10;
  do {
    iVar4 = iVar6 + -1;
    local_38[iVar6 + 1] = *(float *)(unaff_ESI + iVar6 * 4);
    iVar6 = iVar4;
  } while (-1 < iVar4);
  local_38[0] = 1.0;
  iVar6 = 0;
  local_8 = param_1 - (int)local_68;
  do {
    iVar4 = 10;
    pfVar5 = (float *)(unaff_ESI + 0x28);
    local_38[0] = -(local_38[0xb] * *(float *)(unaff_ESI + 0x2c));
    do {
      pfVar2 = local_38 + iVar4;
      iVar4 = iVar4 + -1;
      local_38[0] = local_38[0] - *pfVar2 * *pfVar5;
      *(float *)((int)local_38 + (4 - unaff_ESI) + (int)pfVar5) = local_38[0] * *pfVar5 + *pfVar2;
      pfVar5 = pfVar5 + -1;
    } while (-1 < iVar4);
    iVar4 = 0;
    local_68[iVar6] = local_38[0];
    if (0 < iVar6) {
      pfVar5 = local_68 + iVar6 + -1;
      do {
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        fVar3 = *pfVar5;
        pfVar5 = pfVar5 + -1;
        local_38[0] = local_38[0] - *(float *)(param_1 + iVar1) * fVar3;
      } while (iVar4 < iVar6);
    }
    iVar4 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(float *)((int)local_68 + local_8 + iVar4) = local_38[0];
  } while (iVar6 < 0xc);
  return;
}

