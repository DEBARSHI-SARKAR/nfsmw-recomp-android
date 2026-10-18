/* speed.exe 006c9680 FUN_006c9680; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_006c9680(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  uint *puVar8;
  int iVar9;
  float *pfVar10;
  float local_4;
  
  pfVar6 = param_2;
  cVar5 = '\0';
  iVar9 = 0;
  pfVar10 = (float *)(param_1 + 4);
  puVar8 = (uint *)(param_1 + 0x60);
  while( true ) {
    uVar4 = *puVar8;
    if ((uVar4 & 4) == 0) {
      fVar1 = pfVar6[5];
    }
    else {
      fVar1 = pfVar6[2];
    }
    if ((uVar4 & 2) == 0) {
      fVar2 = pfVar6[4];
    }
    else {
      fVar2 = pfVar6[1];
    }
    if ((uVar4 & 1) == 0) {
      fVar3 = pfVar6[3];
    }
    else {
      fVar3 = *pfVar6;
    }
    if ((uVar4 & 4) == 0) {
      fVar7 = pfVar6[2];
    }
    else {
      fVar7 = pfVar6[5];
    }
    if ((uVar4 & 2) == 0) {
      local_4 = pfVar6[1];
    }
    else {
      local_4 = pfVar6[4];
    }
    if ((uVar4 & 1) == 0) {
      param_2 = (float *)*pfVar6;
    }
    else {
      param_2 = (float *)pfVar6[3];
    }
    if (fVar2 * *pfVar10 + fVar1 * pfVar10[1] + fVar3 * pfVar10[-1] + pfVar10[2] < _DAT_00890968)
    break;
    if (local_4 * *pfVar10 + fVar7 * pfVar10[1] + (float)param_2 * pfVar10[-1] + pfVar10[2] <
        _DAT_00890968) {
      cVar5 = '\x01';
    }
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
    pfVar10 = pfVar10 + 4;
    if (5 < iVar9) {
      return cVar5 + '\x01';
    }
  }
  return '\0';
}

