/* speed.exe 0070bef0 FUN_0070bef0; analysis pseudocode, not buildable source.
 * calls 00709560 FUN_00709560
 */

void FUN_0070bef0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00709560(param_2,puVar5,param_3 + -1);
  puVar6 = puVar5 + 1;
  for (; ((param_2 < puVar5 &&
          (uVar1 = puVar5[-1], uVar2 = *puVar5, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar5 = puVar5 + -1) {
  }
  puVar7 = puVar6;
  puVar3 = puVar5;
  if (puVar6 < param_3) {
    uVar1 = *puVar5;
    do {
      uVar2 = *puVar6;
      puVar7 = puVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x0070bf55:
  do {
    puVar4 = puVar5;
    if (param_3 <= puVar6) {
joined_r0x0070bf7d:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar4 = puVar4 + -1;
        if (*puVar3 <= *puVar4) {
          if (*puVar3 < *puVar4) break;
          uVar1 = puVar3[-1];
          puVar3 = puVar3 + -1;
          *puVar3 = *puVar4;
          *puVar4 = uVar1;
        }
      }
      if (puVar5 == param_2) {
        if (puVar6 == param_3) {
          param_1[1] = puVar7;
          *param_1 = puVar3;
          return;
        }
        if (puVar7 != puVar6) {
          uVar1 = *puVar3;
          *puVar3 = *puVar7;
          *puVar7 = uVar1;
        }
        uVar1 = *puVar3;
        *puVar3 = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar6 == param_3) {
          puVar3 = puVar3 + -1;
          if (puVar5 != puVar3) {
            uVar1 = *puVar5;
            *puVar5 = *puVar3;
            *puVar3 = uVar1;
          }
          uVar1 = *puVar3;
          *puVar3 = puVar7[-1];
          puVar7[-1] = uVar1;
          puVar7 = puVar7 + -1;
        }
        else {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          puVar6 = puVar6 + 1;
          *puVar5 = uVar1;
        }
      }
      goto joined_r0x0070bf55;
    }
    if (*puVar6 <= *puVar3) {
      if (*puVar6 < *puVar3) goto joined_r0x0070bf7d;
      uVar1 = *puVar7;
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}

