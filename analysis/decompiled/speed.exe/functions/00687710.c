/* speed.exe 00687710 FUN_00687710; analysis pseudocode, not buildable source.
 * calls 00683c80 FUN_00683c80
 * calls 006701a0 FUN_006701a0
 * calls 00675b80 FUN_00675b80
 * calls 005d0370 FUN_005d0370
 * calls 0066f2b0 FUN_0066f2b0
 * calls 00683410 FUN_00683410
 * calls 00739f60 FUN_00739f60
 * calls 00674060 FUN_00674060
 * calls 00681020 FUN_00681020
 * calls 0067d2e0 FUN_0067d2e0
 * calls 00679800 FUN_00679800
 * calls 00684890 FUN_00684890
 * calls 006740d0 FUN_006740d0
 */

undefined4 FUN_00687710(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint local_230;
  uint local_21c;
  int local_218;
  undefined **local_214;
  int *local_210;
  uint local_20c;
  uint local_208;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087baa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006701a0();
  local_218 = *(int *)(param_2 + 8);
  puVar7 = (undefined4 *)**(undefined4 **)(param_2 + 4);
  iVar14 = 0;
  local_230 = local_230 & 0xffffff00;
  for (; puVar7 != *(undefined4 **)(param_2 + 4); puVar7 = (undefined4 *)*puVar7) {
    if (((uint)puVar7[4] >> 2 & 1) != 0) {
      uVar4 = local_230 >> 8;
      local_230 = CONCAT31((int3)uVar4,1);
    }
    iVar13 = puVar7[3];
    if (DAT_0092c510 == 0) goto LAB_0068778e;
    puVar3 = (undefined *)(DAT_0092c510 + -200);
    while (puVar3 != &DAT_0092c448) {
      if (*(int *)(puVar3 + 0x18c) == puVar7[2]) {
        iVar1 = *(int *)(puVar7[2] * 0xd0 + 0x94 + DAT_009b09d8);
        if ((iVar1 == 1) || (iVar1 == 2)) {
          iVar13 = 0;
        }
        break;
      }
      if (*(int *)(puVar3 + 200) == 0) {
LAB_0068778e:
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = (undefined *)(*(int *)(puVar3 + 200) + -200);
      }
    }
    iVar14 = iVar14 + iVar13;
  }
  uVar4 = FUN_00739f60(local_230);
  iVar13 = FUN_00683c80();
  local_230 = 0;
  local_21c = 0;
  if (uVar4 < (uint)(iVar13 + iVar14)) {
    local_230 = (iVar13 - uVar4) + iVar14;
  }
  if (0x14 < (uint)(local_218 + DAT_0092cd24)) {
    local_21c = (local_218 + DAT_0092cd24) - 0x14;
  }
  if ((local_230 == 0) && (local_21c == 0)) {
LAB_00687e1d:
    uVar5 = 1;
  }
  else {
    if (param_1 != (int *)0x0) {
      local_210 = (int *)0x0;
      local_20c = 0;
      local_208 = 0;
      local_214 = &PTR_FUN_008aa234;
      local_4 = 0;
      FUN_00674060(0x14);
      if (DAT_0092c510 == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = (undefined *)(DAT_0092c510 + -200);
      }
      while (puVar3 != &DAT_0092c448) {
        iVar14 = *(int *)(puVar3 + 0x18c);
        iVar13 = *(int *)(puVar3 + 400);
        local_18 = *(int *)(puVar3 + 0x194);
        if (local_20c <= local_208) {
          uVar5 = (*(code *)local_214[3])(local_208 + 1);
          FUN_00674060(uVar5);
        }
        piVar6 = local_210 + local_208 * 6;
        if (piVar6 != (int *)0x0) {
          *piVar6 = (int)puVar3;
          piVar6[1] = iVar14;
          piVar6[2] = iVar13;
          piVar6[3] = local_18;
          piVar6[4] = 1;
          piVar6[5] = 0;
        }
        local_208 = local_208 + 1;
        if (*(int *)(puVar3 + 200) == 0) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = (undefined *)(*(int *)(puVar3 + 200) + -200);
        }
      }
      uVar4 = local_208;
      piVar6 = local_210;
      if (local_210 != local_210 + local_208 * 6) {
        do {
          if (piVar6[4] != 0) {
            if (*piVar6 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *piVar6 + 0xac;
            }
            iVar14 = (**(code **)(*param_1 + 8))(iVar14,param_1);
            piVar6[4] = iVar14;
            uVar4 = local_208;
          }
          piVar6 = piVar6 + 6;
        } while (piVar6 != local_210 + uVar4 * 6);
      }
      piVar6 = local_210;
      piVar8 = DAT_0092fda4;
      if (local_210 != local_210 + uVar4 * 6) {
        do {
          piVar12 = piVar8;
          if ((piVar6[4] != 0) && (piVar8 != piVar8 + DAT_0092fdac)) {
            do {
              piVar10 = (int *)*piVar8;
              if ((piVar10 == (int *)0x0) || (piVar10[1] != param_1[1])) {
                if (*piVar6 == 0) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *piVar6 + 0xac;
                }
                iVar14 = (**(code **)(*piVar10 + 8))(iVar14,param_1);
                uVar4 = local_208;
                piVar12 = DAT_0092fda4;
                if (iVar14 == 0) {
                  piVar6[4] = 0;
                  piVar12 = DAT_0092fda4;
                  break;
                }
              }
              piVar8 = piVar8 + 1;
            } while (piVar8 != piVar12 + DAT_0092fdac);
          }
          piVar6 = piVar6 + 6;
          piVar8 = piVar12;
        } while (piVar6 != local_210 + uVar4 * 6);
      }
      FUN_00681020(local_210,local_210 + uVar4 * 6,
                   ((int)(local_210 + uVar4 * 6) - (int)local_210) / 0x18,&LAB_00668f30);
      piVar6 = (int *)**(int **)(param_2 + 4);
      if (piVar6 != *(int **)(param_2 + 4)) {
        do {
          if (local_210 != local_210 + local_208 * 6) {
            piVar8 = local_210;
            do {
              if (piVar6[2] == piVar8[1]) {
                piVar8[4] = 0;
                break;
              }
              piVar8 = piVar8 + 6;
            } while (piVar8 != local_210 + local_208 * 6);
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)*(int *)(param_2 + 4));
      }
      if (local_230 != 0) {
        iVar13 = -1;
        iVar14 = 1;
        if (local_210 != local_210 + local_208 * 6) {
          piVar6 = local_210 + 4;
          do {
            if (piVar6[-3] != iVar13) {
              iVar14 = *piVar6;
              iVar13 = piVar6[-3];
            }
            if (iVar14 == 0) {
              *piVar6 = 0;
            }
            piVar8 = piVar6 + 2;
            piVar6 = piVar6 + 6;
          } while (piVar8 != local_210 + local_208 * 6);
        }
      }
      piVar6 = local_210 + local_208 * 6;
      for (piVar8 = local_210; piVar8 != piVar6; piVar8 = piVar8 + 6) {
        if (piVar8[4] == 0) {
          if (piVar8 != piVar6) {
            piVar8 = (int *)FUN_0066f2b0(piVar8 + 6,piVar6,piVar8,&LAB_00668f70);
          }
          break;
        }
      }
      FUN_006740d0(piVar8,local_210 + local_208 * 6);
      if (local_208 != 0) {
        puVar7 = (undefined4 *)FUN_00675b80();
        *(undefined1 *)((int)puVar7 + 0x15) = 1;
        puVar7[1] = puVar7;
        *puVar7 = puVar7;
        puVar7[2] = puVar7;
        local_4 = CONCAT31(local_4._1_3_,1);
        piVar6 = local_210;
        if (local_210 != local_210 + local_208 * 6) {
          do {
            piVar8 = (int *)FUN_00684890(piVar6 + 1);
            *piVar8 = *piVar8 + 1;
            piVar6 = piVar6 + 6;
          } while (piVar6 != local_210 + local_208 * 6);
        }
        if (local_210 != local_210 + local_208 * 6) {
          piVar6 = local_210 + 5;
          do {
            piVar8 = (int *)FUN_00684890(piVar6 + -4);
            *piVar6 = *piVar8;
            piVar8 = piVar6 + 1;
            piVar6 = piVar6 + 6;
          } while (piVar8 != local_210 + local_208 * 6);
        }
        piVar6 = local_210;
        uVar4 = 0;
        if (local_230 == 0) {
LAB_00687c73:
          uVar11 = local_21c;
          if (uVar4 < local_21c) {
            FUN_00681020(piVar6,local_210 + local_208 * 6,
                         ((int)(local_210 + local_208 * 6) - (int)piVar6) / 0x18,&LAB_00668ef0);
            for (; piVar6 != local_210 + local_208 * 6; piVar6 = piVar6 + 6) {
              if (uVar11 <= uVar4) goto LAB_00687d29;
              uVar4 = uVar4 + 1;
            }
            if (uVar4 < uVar11) {
              uVar5 = *puVar7;
              goto LAB_00687cdd;
            }
          }
LAB_00687d29:
          if (piVar6 != local_210 + local_208 * 6) {
            FUN_006740d0(piVar6,local_210 + local_208 * 6);
          }
          uVar4 = local_208;
          piVar6 = local_210;
          piVar8 = DAT_0092fda4;
          piVar12 = local_210;
          if (local_210 != local_210 + local_208 * 6) {
            do {
              puVar2 = (undefined4 *)*piVar12;
              piVar10 = piVar8;
              if (piVar8 != piVar8 + DAT_0092fdac) {
                do {
                  if (puVar2 == (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else {
                    puVar9 = puVar2 + 0x2b;
                  }
                  (**(code **)(*(int *)*piVar8 + 0xc))(puVar9);
                  piVar8 = piVar8 + 1;
                  uVar4 = local_208;
                  piVar6 = local_210;
                  piVar10 = DAT_0092fda4;
                } while (piVar8 != DAT_0092fda4 + DAT_0092fdac);
              }
              if (puVar2 != (undefined4 *)0x0) {
                (**(code **)*puVar2)(1);
                uVar4 = local_208;
                piVar6 = local_210;
                piVar10 = DAT_0092fda4;
              }
              piVar12 = piVar12 + 6;
              piVar8 = piVar10;
            } while (piVar12 != piVar6 + uVar4 * 6);
          }
          local_4 = local_4 & 0xffffff00;
          FUN_00683410(&local_21c,*puVar7,puVar7);
          if (puVar7 != (undefined4 *)0x0) {
            FUN_005d0370(puVar7,0x18,0);
          }
          local_4 = 0xffffffff;
          FUN_0067d2e0();
          goto LAB_00687e1d;
        }
        FUN_00681020(local_210,local_210 + local_208 * 6,
                     ((int)(local_210 + local_208 * 6) - (int)local_210) / 0x18,&LAB_00668eb0);
        uVar11 = 0;
        iVar14 = 0;
        local_218 = -1;
        for (; piVar6 != local_210 + local_208 * 6; piVar6 = piVar6 + 6) {
          if (piVar6[1] != local_218) {
            uVar11 = uVar11 + iVar14;
            local_218 = piVar6[1];
          }
          if (local_230 <= uVar11) {
            iVar14 = 0;
            break;
          }
          iVar14 = piVar6[2];
          uVar4 = uVar4 + 1;
        }
        if (local_230 <= uVar11 + iVar14) goto LAB_00687c73;
        uVar5 = *puVar7;
LAB_00687cdd:
        local_4 = local_4 & 0xffffff00;
        FUN_00683410(&local_21c,uVar5,puVar7);
        if (puVar7 != (undefined4 *)0x0) {
          FUN_005d0370(puVar7,0x18,0);
        }
      }
      local_4 = 0xffffffff;
      FUN_0067d2e0();
    }
    uVar5 = 0;
  }
  ExceptionList = local_c;
  return uVar5;
}

