/* speed.exe 006b50e0 FUN_006b50e0; analysis pseudocode, not buildable source.
 * calls 006b16d0 FUN_006b16d0
 */

void FUN_006b50e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_158;
  undefined4 local_150 [12];
  undefined4 local_120 [12];
  undefined4 local_f0 [12];
  undefined4 local_c0 [12];
  undefined4 local_90 [12];
  undefined4 local_60 [12];
  undefined4 local_30 [12];
  
  local_158 = param_2 + (((int)param_3 - (int)param_2) / 0x60) * 0xc;
  FUN_006b16d0(param_2,local_158,param_3 + -0xc);
  puVar3 = local_158 + 0xc;
  for (; ((param_2 < local_158 && ((float)local_158[-5] <= (float)local_158[7])) &&
         ((float)local_158[7] <= (float)local_158[-5])); local_158 = local_158 + -0xc) {
  }
  puVar2 = local_158;
  if (3 < ((int)param_3 + (0x2f - (int)puVar3)) / 0x30) {
    do {
      puVar4 = puVar3;
      if (((float)local_158[7] < (float)puVar3[7]) || ((float)puVar3[7] < (float)local_158[7]))
      goto joined_r0x006b5242;
      if (((float)local_158[7] < (float)puVar3[0x13]) || ((float)puVar3[0x13] < (float)local_158[7])
         ) {
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar3;
        goto joined_r0x006b5242;
      }
      if (((float)local_158[7] < (float)puVar3[0x1f]) || ((float)puVar3[0x1f] < (float)local_158[7])
         ) {
        puVar3 = puVar3 + 0x18;
        puVar4 = puVar3;
        goto joined_r0x006b5242;
      }
      if (((float)local_158[7] < (float)puVar3[0x2b]) || ((float)puVar3[0x2b] < (float)local_158[7])
         ) {
        puVar3 = puVar3 + 0x24;
        puVar4 = puVar3;
        goto joined_r0x006b5242;
      }
      puVar3 = puVar3 + 0x30;
    } while ((int)puVar3 < (int)(param_3 + -0x24));
  }
  for (; ((puVar4 = puVar3, puVar3 < param_3 && ((float)puVar3[7] <= (float)local_158[7])) &&
         ((float)local_158[7] <= (float)puVar3[7])); puVar3 = puVar3 + 0xc) {
  }
joined_r0x006b5242:
  do {
    puVar5 = local_158;
    if (param_3 <= puVar3) {
joined_r0x006b52a7:
      for (; param_2 < local_158; local_158 = local_158 + -0xc) {
        puVar7 = puVar5 + -0xc;
        if ((float)puVar5[-5] <= (float)puVar2[7]) {
          if ((float)puVar5[-5] < (float)puVar2[7]) break;
          puVar2 = puVar2 + -0xc;
          puVar5 = puVar2;
          puVar6 = local_60;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = puVar7;
          puVar6 = puVar2;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_60;
          puVar6 = puVar7;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        puVar5 = puVar7;
      }
      if (local_158 == param_2) {
        if (puVar3 == param_3) {
          param_1[1] = puVar4;
          *param_1 = puVar2;
          return;
        }
        if (puVar4 != puVar3) {
          puVar5 = puVar2;
          puVar7 = local_150;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = puVar4;
          puVar7 = puVar2;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = local_150;
          puVar7 = puVar4;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        puVar5 = puVar2;
        puVar7 = local_120;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = puVar3;
        puVar7 = puVar2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = local_120;
        puVar7 = puVar3;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar4 + 0xc;
        puVar2 = puVar2 + 0xc;
      }
      else {
        local_158 = local_158 + -0xc;
        if (puVar3 == param_3) {
          puVar2 = puVar2 + -0xc;
          if (local_158 != puVar2) {
            puVar5 = local_158;
            puVar7 = local_f0;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar5 = puVar2;
            puVar7 = local_158;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar5 = local_f0;
            puVar7 = puVar2;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          puVar4 = puVar4 + -0xc;
          puVar5 = puVar2;
          puVar7 = local_90;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = puVar4;
          puVar7 = puVar2;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = local_90;
          puVar7 = puVar4;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          puVar5 = puVar3;
          puVar7 = local_30;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = local_158;
          puVar7 = puVar3;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = local_30;
          puVar7 = local_158;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar3 = puVar3 + 0xc;
        }
      }
      goto joined_r0x006b5242;
    }
    if ((float)puVar2[7] <= (float)puVar3[7]) {
      if ((float)puVar2[7] < (float)puVar3[7]) goto joined_r0x006b52a7;
      puVar5 = puVar4;
      puVar7 = local_c0;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar3;
      puVar7 = puVar4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = local_c0;
      puVar7 = puVar3;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar4 + 0xc;
    }
    puVar3 = puVar3 + 0xc;
  } while( true );
}

