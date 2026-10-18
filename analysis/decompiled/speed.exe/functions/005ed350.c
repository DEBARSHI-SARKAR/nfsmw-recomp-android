/* speed.exe 005ed350 FUN_005ed350; analysis pseudocode, not buildable source.
 * calls 005eb230 FUN_005eb230
 */

void FUN_005ed350(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_005eb230(param_2,puVar4,param_3 + -1);
  puVar5 = puVar4 + 1;
  for (; ((param_2 < puVar4 &&
          (uVar1 = puVar4[-1], uVar2 = *puVar4, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar4 = puVar4 + -1) {
  }
  puVar6 = puVar5;
  puVar3 = puVar4;
  if (puVar5 < param_3) {
    uVar1 = *puVar4;
    do {
      uVar2 = *puVar5;
      puVar6 = puVar5;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar5;
    } while (puVar5 < param_3);
  }
joined_r0x005ed3b5:
  do {
    if (param_3 <= puVar5) {
joined_r0x005ed3db:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        if (*puVar3 <= puVar4[-1]) {
          if (*puVar3 < puVar4[-1]) break;
          uVar1 = puVar3[-1];
          puVar3 = puVar3 + -1;
          *puVar3 = puVar4[-1];
          puVar4[-1] = uVar1;
        }
      }
      if (puVar4 == param_2) {
        if (puVar5 == param_3) {
          param_1[1] = puVar6;
          *param_1 = puVar3;
          return;
        }
        if (puVar6 != puVar5) {
          uVar1 = *puVar3;
          *puVar3 = *puVar6;
          *puVar6 = uVar1;
        }
        uVar1 = *puVar3;
        *puVar3 = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar5 == param_3) {
          puVar3 = puVar3 + -1;
          if (puVar4 != puVar3) {
            uVar1 = *puVar4;
            *puVar4 = *puVar3;
            *puVar3 = uVar1;
          }
          uVar1 = *puVar3;
          *puVar3 = puVar6[-1];
          puVar6[-1] = uVar1;
          puVar6 = puVar6 + -1;
        }
        else {
          uVar1 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar1;
          puVar5 = puVar5 + 1;
        }
      }
      goto joined_r0x005ed3b5;
    }
    uVar1 = *puVar5;
    if (uVar1 <= *puVar3) {
      if (uVar1 < *puVar3) goto joined_r0x005ed3db;
      uVar2 = *puVar6;
      *puVar6 = uVar1;
      *puVar5 = uVar2;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

