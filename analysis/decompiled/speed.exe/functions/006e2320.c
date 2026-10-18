/* speed.exe 006e2320 FUN_006e2320; analysis pseudocode, not buildable source.
 * calls 006ddad0 FUN_006ddad0
 */

void FUN_006e2320(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_006ddad0(param_2,puVar5,param_3 + -2);
  puVar8 = puVar5 + 2;
  for (; param_2 < puVar5; puVar5 = puVar5 + -2) {
    uVar1 = puVar5[-1];
    uVar2 = puVar5[1];
    if ((uVar1 < uVar2) ||
       ((((uVar1 == uVar2 && (puVar5[-2] < *puVar5)) || (uVar2 < uVar1)) ||
        ((uVar2 == uVar1 && (*puVar5 < puVar5[-2])))))) break;
  }
  puVar9 = puVar8;
  puVar4 = puVar5;
  if (puVar8 < param_3) {
    uVar1 = puVar5[1];
    while( true ) {
      uVar2 = puVar8[1];
      puVar9 = puVar8;
      if (((uVar2 < uVar1) || ((uVar2 == uVar1 && (*puVar8 < *puVar5)))) || (uVar1 < uVar2)) break;
      if (((uVar1 == uVar2) && (*puVar5 < *puVar8)) ||
         (puVar8 = puVar8 + 2, puVar9 = puVar8, param_3 <= puVar8)) break;
    }
  }
joined_r0x006e23bc:
  do {
    if (param_3 <= puVar8) {
joined_r0x006e2412:
      for (; param_2 < puVar4; puVar4 = puVar4 + -2) {
        uVar1 = puVar4[-1];
        puVar6 = puVar5;
        if ((puVar5[1] <= uVar1) && ((uVar1 != puVar5[1] || (*puVar5 <= puVar4[-2])))) {
          if ((puVar5[1] < uVar1) || ((puVar5[1] == uVar1 && (*puVar5 < puVar4[-2])))) break;
          uVar1 = puVar5[-2];
          uVar2 = puVar5[-1];
          puVar6 = puVar5 + -2;
          *puVar6 = puVar4[-2];
          puVar5[-1] = puVar4[-1];
          puVar4[-2] = uVar1;
          puVar4[-1] = uVar2;
        }
        puVar5 = puVar6;
      }
      if (puVar4 == param_2) {
        if (puVar8 == param_3) {
          param_1[1] = puVar9;
          *param_1 = puVar5;
          return;
        }
        if (puVar9 != puVar8) {
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          *puVar5 = *puVar9;
          puVar5[1] = puVar9[1];
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
        }
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
        puVar5 = puVar5 + 2;
      }
      else {
        puVar6 = puVar4 + -2;
        if (puVar8 == param_3) {
          puVar7 = puVar5 + -2;
          if (puVar6 != puVar7) {
            uVar1 = *puVar6;
            uVar2 = puVar4[-1];
            *puVar6 = *puVar7;
            puVar4[-1] = puVar5[-1];
            *puVar7 = uVar1;
            puVar5[-1] = uVar2;
          }
          uVar1 = *puVar7;
          uVar2 = puVar5[-1];
          *puVar7 = puVar9[-2];
          puVar5[-1] = puVar9[-1];
          puVar9[-2] = uVar1;
          puVar9[-1] = uVar2;
          puVar9 = puVar9 + -2;
          puVar5 = puVar7;
          puVar4 = puVar6;
        }
        else {
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          *puVar8 = *puVar6;
          puVar8[1] = puVar4[-1];
          *puVar6 = uVar1;
          puVar4[-1] = uVar2;
          puVar8 = puVar8 + 2;
          puVar4 = puVar6;
        }
      }
      goto joined_r0x006e23bc;
    }
    uVar1 = puVar8[1];
    if ((uVar1 <= puVar5[1]) && ((puVar5[1] != uVar1 || (*puVar8 <= *puVar5)))) {
      if ((uVar1 < puVar5[1]) || ((uVar1 == puVar5[1] && (*puVar8 < *puVar5))))
      goto joined_r0x006e2412;
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar1;
      *puVar8 = uVar2;
      puVar9 = puVar9 + 2;
      puVar8[1] = uVar3;
    }
    puVar8 = puVar8 + 2;
  } while( true );
}

