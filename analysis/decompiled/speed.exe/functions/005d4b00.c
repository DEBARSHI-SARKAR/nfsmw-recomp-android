/* speed.exe 005d4b00 FUN_005d4b00; analysis pseudocode, not buildable source.
 * calls 005d3740 FUN_005d3740
 */

void FUN_005d4b00(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar3 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_005d3740(param_2,puVar3,param_3 + -2);
  puVar8 = puVar3 + 2;
  for (; ((param_2 < puVar3 &&
          (uVar1 = puVar3[-2], uVar2 = *puVar3, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar3 = puVar3 + -2) {
  }
  puVar9 = puVar8;
  puVar4 = puVar3;
  if (puVar8 < param_3) {
    uVar1 = *puVar3;
    do {
      uVar2 = *puVar8;
      puVar9 = puVar8;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar8 = puVar8 + 2;
      puVar9 = puVar8;
    } while (puVar8 < param_3);
  }
joined_r0x005d4b67:
  do {
    puVar7 = puVar3;
    if (param_3 <= puVar8) {
joined_r0x005d4baa:
      for (; param_2 < puVar3; puVar3 = puVar3 + -2) {
        puVar6 = puVar7 + -2;
        puVar5 = puVar4;
        if (*puVar4 <= *puVar6) {
          if (*puVar4 < *puVar6) break;
          uVar1 = puVar4[-1];
          uVar2 = puVar4[-2];
          puVar5 = puVar4 + -2;
          *puVar5 = *puVar6;
          puVar4[-1] = puVar7[-1];
          *puVar6 = uVar2;
          puVar7[-1] = uVar1;
        }
        puVar4 = puVar5;
        puVar7 = puVar6;
      }
      if (puVar3 == param_2) {
        if (puVar8 == param_3) {
          param_1[1] = puVar9;
          *param_1 = puVar4;
          return;
        }
        if (puVar9 != puVar8) {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          *puVar4 = *puVar9;
          puVar4[1] = puVar9[1];
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
        }
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        *puVar4 = *puVar8;
        puVar4[1] = puVar8[1];
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
        puVar4 = puVar4 + 2;
      }
      else {
        puVar7 = puVar3 + -2;
        if (puVar8 == param_3) {
          puVar5 = puVar4 + -2;
          if (puVar7 != puVar5) {
            uVar1 = *puVar7;
            uVar2 = puVar3[-1];
            *puVar7 = *puVar5;
            puVar3[-1] = puVar4[-1];
            *puVar5 = uVar1;
            puVar4[-1] = uVar2;
          }
          uVar1 = *puVar5;
          uVar2 = puVar4[-1];
          *puVar5 = puVar9[-2];
          puVar4[-1] = puVar9[-1];
          puVar9[-2] = uVar1;
          puVar9[-1] = uVar2;
          puVar9 = puVar9 + -2;
          puVar3 = puVar7;
          puVar4 = puVar5;
        }
        else {
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          *puVar8 = *puVar7;
          puVar8[1] = puVar3[-1];
          puVar8 = puVar8 + 2;
          *puVar7 = uVar2;
          puVar3[-1] = uVar1;
          puVar3 = puVar7;
        }
      }
      goto joined_r0x005d4b67;
    }
    if (*puVar8 <= *puVar4) {
      if (*puVar8 < *puVar4) goto joined_r0x005d4baa;
      uVar1 = puVar9[1];
      uVar2 = *puVar9;
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      puVar9 = puVar9 + 2;
      *puVar8 = uVar2;
      puVar8[1] = uVar1;
    }
    puVar8 = puVar8 + 2;
  } while( true );
}

