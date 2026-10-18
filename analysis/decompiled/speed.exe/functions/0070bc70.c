/* speed.exe 0070bc70 FUN_0070bc70; analysis pseudocode, not buildable source.
 * calls 007094c0 FUN_007094c0
 */

void FUN_0070bc70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_13c;
  undefined4 local_134 [11];
  undefined4 local_108 [11];
  undefined4 local_dc [11];
  undefined4 local_b0 [11];
  undefined4 local_84 [11];
  undefined4 local_58 [11];
  undefined4 local_2c [11];
  
  local_13c = param_2 + (((int)param_3 - (int)param_2) / 0x58) * 0xb;
  FUN_007094c0(param_2,local_13c,param_3 + -0xb);
  puVar6 = local_13c + 0xb;
  for (; ((param_2 < local_13c &&
          (uVar1 = local_13c[-2], uVar2 = local_13c[9], uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); local_13c = local_13c + -0xb) {
  }
  puVar3 = puVar6;
  puVar5 = local_13c;
  if (puVar6 < param_3) {
    uVar1 = local_13c[9];
    do {
      uVar2 = puVar6[9];
      puVar3 = puVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar6 = puVar6 + 0xb;
      puVar3 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x0070bcfd:
  do {
    puVar7 = local_13c;
    if (param_3 <= puVar3) {
joined_r0x0070bd55:
      for (; param_2 < local_13c; local_13c = local_13c + -0xb) {
        puVar9 = puVar7 + -0xb;
        if ((uint)puVar5[9] <= (uint)puVar7[-2]) {
          if ((uint)puVar5[9] < (uint)puVar7[-2]) break;
          puVar5 = puVar5 + -0xb;
          puVar7 = puVar5;
          puVar8 = local_58;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar7 = puVar9;
          puVar8 = puVar5;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar7 = local_58;
          puVar8 = puVar9;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar7 = puVar9;
      }
      if (local_13c == param_2) {
        if (puVar3 == param_3) {
          param_1[1] = puVar6;
          *param_1 = puVar5;
          return;
        }
        if (puVar6 != puVar3) {
          puVar7 = puVar5;
          puVar9 = local_134;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = puVar6;
          puVar9 = puVar5;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_134;
          puVar9 = puVar6;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        puVar7 = puVar5;
        puVar9 = local_108;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar7 = puVar3;
        puVar9 = puVar5;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar6 = puVar6 + 0xb;
        puVar8 = puVar3 + 0xb;
        puVar5 = puVar5 + 0xb;
        puVar7 = local_108;
        puVar9 = puVar3;
        for (iVar4 = 0xb; puVar3 = puVar8, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      else {
        local_13c = local_13c + -0xb;
        if (puVar3 == param_3) {
          puVar5 = puVar5 + -0xb;
          if (local_13c != puVar5) {
            puVar7 = local_13c;
            puVar9 = local_dc;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = puVar5;
            puVar9 = local_13c;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = local_dc;
            puVar9 = puVar5;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          puVar6 = puVar6 + -0xb;
          puVar7 = puVar5;
          puVar9 = local_84;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = puVar6;
          puVar9 = puVar5;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_84;
          puVar9 = puVar6;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        else {
          puVar7 = puVar3;
          puVar9 = local_2c;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar7 = local_13c;
          puVar9 = puVar3;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar3 = puVar3 + 0xb;
          puVar7 = local_2c;
          puVar9 = local_13c;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
        }
      }
      goto joined_r0x0070bcfd;
    }
    if ((uint)puVar3[9] <= (uint)puVar5[9]) {
      if ((uint)puVar3[9] < (uint)puVar5[9]) goto joined_r0x0070bd55;
      puVar7 = puVar6;
      puVar9 = local_b0;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar7 = puVar3;
      puVar9 = puVar6;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar6 = puVar6 + 0xb;
      puVar7 = local_b0;
      puVar9 = puVar3;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    puVar3 = puVar3 + 0xb;
  } while( true );
}

