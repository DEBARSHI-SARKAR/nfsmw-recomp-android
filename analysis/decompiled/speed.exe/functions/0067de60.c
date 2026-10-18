/* speed.exe 0067de60 FUN_0067de60; analysis pseudocode, not buildable source.
 * calls 0067b060 FUN_0067b060
 */

void FUN_0067de60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *local_ac;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_0067b060(param_2,puVar9,param_3 + -6,param_4);
  puVar1 = puVar9;
  while (local_ac = puVar1, param_2 < local_ac) {
    puVar1 = local_ac + -6;
    cVar8 = (*param_4)(puVar1,local_ac);
    if ((cVar8 != '\0') || (cVar8 = (*param_4)(local_ac,puVar1), cVar8 != '\0')) break;
  }
  do {
    puVar9 = puVar9 + 6;
    puVar1 = puVar9;
    puVar12 = local_ac;
    if (param_3 <= puVar9) break;
    cVar8 = (*param_4)(puVar9,local_ac);
    if ((cVar8 != '\0') || (cVar8 = (*param_4)(local_ac,puVar9), cVar8 != '\0')) break;
  } while( true );
joined_r0x0067df27:
  puVar11 = local_ac;
  if (param_3 <= puVar1) {
joined_r0x0067e00a:
    for (; param_2 < local_ac; local_ac = local_ac + -6) {
      puVar10 = puVar11 + -6;
      cVar8 = (*param_4)(puVar10,puVar12);
      puVar13 = puVar12;
      if (cVar8 == '\0') {
        cVar8 = (*param_4)(puVar12,puVar10);
        if (cVar8 != '\0') break;
        puVar13 = puVar12 + -6;
        uVar2 = *puVar13;
        uVar3 = puVar12[-5];
        uVar4 = puVar12[-4];
        uVar5 = puVar12[-3];
        uVar6 = puVar12[-2];
        uVar7 = puVar12[-1];
        *puVar13 = *puVar10;
        puVar12[-5] = puVar11[-5];
        puVar12[-4] = puVar11[-4];
        puVar12[-3] = puVar11[-3];
        puVar12[-2] = puVar11[-2];
        puVar12[-1] = puVar11[-1];
        *puVar10 = uVar2;
        puVar11[-5] = uVar3;
        puVar11[-4] = uVar4;
        puVar11[-3] = uVar5;
        puVar11[-2] = uVar6;
        puVar11[-1] = uVar7;
      }
      puVar12 = puVar13;
      puVar11 = puVar10;
    }
    if (local_ac == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar9;
        return;
      }
      if (puVar9 != puVar1) {
        uVar2 = *puVar12;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        uVar6 = puVar12[4];
        uVar7 = puVar12[5];
        *puVar12 = *puVar9;
        puVar12[1] = puVar9[1];
        puVar12[2] = puVar9[2];
        puVar12[3] = puVar9[3];
        puVar12[4] = puVar9[4];
        puVar12[5] = puVar9[5];
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = uVar6;
        puVar9[5] = uVar7;
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      uVar7 = puVar12[5];
      *puVar12 = *puVar1;
      puVar12[1] = puVar1[1];
      puVar12[2] = puVar1[2];
      puVar12[3] = puVar1[3];
      puVar12[4] = puVar1[4];
      puVar12[5] = puVar1[5];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar9 = puVar9 + 6;
      puVar1 = puVar1 + 6;
      puVar12 = puVar12 + 6;
    }
    else {
      puVar11 = local_ac + -6;
      if (puVar1 == param_3) {
        puVar13 = puVar12 + -6;
        if (puVar11 != puVar13) {
          uVar2 = *puVar11;
          uVar3 = local_ac[-5];
          uVar4 = local_ac[-4];
          uVar5 = local_ac[-3];
          uVar6 = local_ac[-2];
          uVar7 = local_ac[-1];
          *puVar11 = *puVar13;
          local_ac[-5] = puVar12[-5];
          local_ac[-4] = puVar12[-4];
          local_ac[-3] = puVar12[-3];
          local_ac[-2] = puVar12[-2];
          local_ac[-1] = puVar12[-1];
          *puVar13 = uVar2;
          puVar12[-5] = uVar3;
          puVar12[-4] = uVar4;
          puVar12[-3] = uVar5;
          puVar12[-2] = uVar6;
          puVar12[-1] = uVar7;
        }
        uVar2 = *puVar13;
        uVar3 = puVar12[-5];
        uVar4 = puVar12[-4];
        uVar5 = puVar12[-3];
        uVar6 = puVar12[-2];
        uVar7 = puVar12[-1];
        puVar10 = puVar9 + -6;
        *puVar13 = *puVar10;
        puVar12[-5] = puVar9[-5];
        puVar12[-4] = puVar9[-4];
        puVar12[-3] = puVar9[-3];
        puVar12[-2] = puVar9[-2];
        puVar12[-1] = puVar9[-1];
        *puVar10 = uVar2;
        puVar9[-5] = uVar3;
        puVar9[-4] = uVar4;
        puVar9[-3] = uVar5;
        puVar9[-2] = uVar6;
        puVar9[-1] = uVar7;
        puVar9 = puVar10;
        local_ac = puVar11;
        puVar12 = puVar13;
      }
      else {
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = puVar1[4];
        uVar7 = puVar1[5];
        *puVar1 = *puVar11;
        puVar1[1] = local_ac[-5];
        puVar1[2] = local_ac[-4];
        puVar1[3] = local_ac[-3];
        puVar1[4] = local_ac[-2];
        puVar1[5] = local_ac[-1];
        *puVar11 = uVar2;
        local_ac[-5] = uVar3;
        local_ac[-4] = uVar4;
        local_ac[-3] = uVar5;
        local_ac[-2] = uVar6;
        local_ac[-1] = uVar7;
        puVar1 = puVar1 + 6;
        local_ac = puVar11;
      }
    }
    goto joined_r0x0067df27;
  }
  cVar8 = (*param_4)(puVar12,puVar1);
  if (cVar8 == '\0') {
    cVar8 = (*param_4)(puVar1,puVar12);
    if (cVar8 != '\0') goto joined_r0x0067e00a;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    uVar6 = puVar9[4];
    uVar7 = puVar9[5];
    *puVar9 = *puVar1;
    puVar9[1] = puVar1[1];
    puVar9[2] = puVar1[2];
    puVar9[3] = puVar1[3];
    puVar9[4] = puVar1[4];
    puVar9[5] = puVar1[5];
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar1[4] = uVar6;
    puVar9 = puVar9 + 6;
    puVar1[5] = uVar7;
  }
  puVar1 = puVar1 + 6;
  goto joined_r0x0067df27;
}

