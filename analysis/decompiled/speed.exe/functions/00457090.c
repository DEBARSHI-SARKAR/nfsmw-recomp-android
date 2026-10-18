/* speed.exe 00457090 FUN_00457090; analysis pseudocode, not buildable source.
 * calls 00456880 FUN_00456880
 */

void FUN_00457090(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar3 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_00456880(param_2,puVar3,param_3 + -2);
  puVar7 = puVar3 + 2;
  for (; ((param_2 < puVar3 &&
          (uVar1 = puVar3[-2], uVar2 = *puVar3, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar3 = puVar3 + -2) {
  }
  puVar8 = puVar7;
  puVar4 = puVar3;
  if (puVar7 < param_3) {
    uVar1 = *puVar3;
    do {
      uVar2 = *puVar7;
      puVar8 = puVar7;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar7 = puVar7 + 2;
      puVar8 = puVar7;
    } while (puVar7 < param_3);
  }
joined_r0x004570f7:
  do {
    if (param_3 <= puVar7) {
joined_r0x0045713a:
      for (; param_2 < puVar3; puVar3 = puVar3 + -2) {
        puVar5 = puVar4;
        if (*puVar4 <= puVar3[-2]) {
          if (*puVar4 < puVar3[-2]) break;
          uVar1 = puVar4[-2];
          uVar2 = puVar4[-1];
          puVar5 = puVar4 + -2;
          *puVar5 = puVar3[-2];
          puVar4[-1] = puVar3[-1];
          puVar3[-2] = uVar1;
          puVar3[-1] = uVar2;
        }
        puVar4 = puVar5;
      }
      if (puVar3 == param_2) {
        if (puVar7 == param_3) {
          param_1[1] = puVar8;
          *param_1 = puVar4;
          return;
        }
        if (puVar8 != puVar7) {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          *puVar8 = uVar1;
          puVar8[1] = uVar2;
        }
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        *puVar4 = *puVar7;
        puVar4[1] = puVar7[1];
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
        puVar4 = puVar4 + 2;
      }
      else {
        puVar5 = puVar3 + -2;
        if (puVar7 == param_3) {
          puVar6 = puVar4 + -2;
          if (puVar5 != puVar6) {
            uVar1 = *puVar5;
            uVar2 = puVar3[-1];
            *puVar5 = *puVar6;
            puVar3[-1] = puVar4[-1];
            *puVar6 = uVar1;
            puVar4[-1] = uVar2;
          }
          uVar1 = *puVar6;
          uVar2 = puVar4[-1];
          *puVar6 = puVar8[-2];
          puVar4[-1] = puVar8[-1];
          puVar8[-2] = uVar1;
          puVar8[-1] = uVar2;
          puVar8 = puVar8 + -2;
          puVar3 = puVar5;
          puVar4 = puVar6;
        }
        else {
          uVar1 = *puVar7;
          uVar2 = puVar7[1];
          *puVar7 = *puVar5;
          puVar7[1] = puVar3[-1];
          *puVar5 = uVar1;
          puVar3[-1] = uVar2;
          puVar7 = puVar7 + 2;
          puVar3 = puVar5;
        }
      }
      goto joined_r0x004570f7;
    }
    uVar1 = *puVar7;
    if (uVar1 <= *puVar4) {
      if (uVar1 < *puVar4) goto joined_r0x0045713a;
      uVar2 = *puVar8;
      *puVar8 = uVar1;
      uVar1 = puVar8[1];
      puVar8[1] = puVar7[1];
      puVar8 = puVar8 + 2;
      *puVar7 = uVar2;
      puVar7[1] = uVar1;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}

