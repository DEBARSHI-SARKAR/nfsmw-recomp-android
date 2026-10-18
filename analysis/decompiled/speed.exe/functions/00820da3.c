/* speed.exe 00820da3 FUN_00820da3; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 008244ac FUN_008244ac
 * calls 0082447b FUN_0082447b
 * calls 0082279f FUN_0082279f
 */

void FUN_00820da3(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int local_3c [6];
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  local_3c[0] = 0;
  DAT_009c22f8 = DAT_009c22f8 + 1;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_20 = DAT_009c23f0;
  local_8 = DAT_009c23f4;
  if ((DAT_009c22f8 < 3000) && (local_1c = 0, 0 < DAT_0090bd18)) {
    do {
      puVar6 = *(undefined4 **)(DAT_009c22fc + local_1c * 4);
      iVar4 = local_1c;
      if (puVar6 != (undefined4 *)0x0) {
        do {
          local_24 = (undefined4 *)*puVar6;
          FUN_00822050(local_3c,0x18);
          iVar3 = FUN_008244ac(puVar6 + puVar6[0x12] + 2,4);
          if (iVar3 != 0) {
            FUN_0082447b(*(undefined4 *)(puVar6[0xf] + puVar6[0x13] * 4),
                         *(undefined4 *)(DAT_009c22f4 + iVar4 * 4));
            local_c = 0;
            if (DAT_009c2318._1_1_ != 0) {
              iVar3 = -(int)puVar6;
              puVar7 = puVar6 + 0x1a;
              local_18 = iVar3;
              do {
                if ((local_3c[local_c] == 0) &&
                   (piVar1 = (int *)(puVar6[0x10] + iVar3 + -100 + (int)puVar7), *piVar1 != 0)) {
                  puVar2 = (undefined4 *)*piVar1;
                  (*(code *)*puVar2)(puVar2,param_1,local_20,local_8,local_c + 1);
                  uVar8 = *puVar7;
                  if (puVar6[0x20] == 1) {
                    FUN_0082279f(puVar7[-6],uVar8,local_8,
                                 *(int *)(&DAT_009c23a8 + iVar3 + (int)puVar7));
                    uVar8 = *puVar7;
                    iVar4 = *(int *)(&DAT_009c23a8 + iVar3 + (int)puVar7) + 0x40;
                    iVar3 = param_1 + -0x10;
                    iVar9 = local_8 + 0x40;
                  }
                  else {
                    iVar4 = *(int *)(&DAT_009c23a8 + iVar3 + (int)puVar7);
                    iVar3 = param_1;
                    iVar9 = local_8;
                  }
                  (*DAT_009c2524)(iVar3,uVar8,iVar9,iVar4);
                  iVar4 = local_c;
                  local_14 = 0;
                  local_3c[local_c] = 1;
                  pcVar5 = &DAT_0090bf58 +
                           (iVar4 + ((DAT_009c2318._1_1_ - 7) + puVar6[0x12] * 6) * 6) * 6;
                  if (DAT_009c2318._1_1_ != 0) {
                    local_10 = puVar6 + 0x1a;
                    do {
                      if (-1 < *pcVar5) {
                        iVar4 = *(int *)(&DAT_009c2410 + *pcVar5 * 4);
                        if (puVar6[0x20] == 1) {
                          FUN_0082279f(puVar7[-6],*puVar7,local_8,iVar4);
                          uVar8 = *puVar7;
                          iVar4 = *(int *)(&DAT_009c2410 + *pcVar5 * 4) + 0x40;
                          iVar3 = param_1 + -0x10;
                          iVar9 = local_8 + 0x40;
                        }
                        else {
                          uVar8 = *local_10;
                          iVar3 = param_1;
                          iVar9 = local_8;
                        }
                        (*DAT_009c2524)(iVar3,uVar8,iVar9,iVar4);
                        local_3c[*pcVar5] = 1;
                      }
                      local_10 = local_10 + 1;
                      pcVar5 = pcVar5 + 1;
                      local_14 = local_14 + 1;
                    } while (local_14 < (int)(uint)DAT_009c2318._1_1_);
                  }
                  iVar3 = local_18;
                  if (puVar6[0x20] == 1) {
                    puVar7[-6] = *puVar7;
                  }
                }
                local_c = local_c + 1;
                puVar7 = puVar7 + 1;
                iVar4 = local_1c;
              } while (local_c < (int)(uint)DAT_009c2318._1_1_);
            }
          }
          puVar6[0x20] = 0;
          puVar6 = local_24;
        } while (local_24 != (undefined4 *)0x0);
        FUN_00822050(*(undefined4 *)(DAT_009c22f4 + iVar4 * 4),param_1 << 2);
      }
      local_1c = iVar4 + 1;
    } while (local_1c < DAT_0090bd18);
  }
  return;
}

