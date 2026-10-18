/* speed.exe 006c9570 FUN_006c9570; analysis pseudocode, not buildable source.
 * calls 006c9510 FUN_006c9510
 * calls 006c9440 FUN_006c9440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __thiscall FUN_006c9570(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte local_55;
  int local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [13];
  
  pfVar3 = param_3;
  pfVar2 = param_2;
  iVar6 = 0;
  local_55 = 0;
  local_54 = 6;
  do {
    cVar4 = FUN_006c9440(&param_3,&param_2,param_1,pfVar2,pfVar3);
    if (cVar4 != '\0') {
      if (_DAT_00890968 <= (float)param_3) {
        iVar6 = iVar6 + 1;
        local_34[iVar6] = (float)param_3;
      }
      if (_DAT_00890968 <= (float)param_2) {
        iVar6 = iVar6 + 1;
        local_34[iVar6] = (float)param_2;
      }
    }
    param_1 = param_1 + 0x10;
    local_54 = local_54 + -1;
  } while (local_54 != 0);
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      fVar1 = local_34[iVar7 + 1];
      local_40 = fVar1 * *pfVar3 + *pfVar2;
      local_3c = pfVar2[1] + fVar1 * pfVar3[1];
      local_38 = pfVar2[2] + fVar1 * pfVar3[2];
      local_34[0] = pfVar2[3] * _DAT_008910c4;
      bVar5 = FUN_006c9510(&local_40);
      local_55 = local_55 | bVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  return local_55;
}

