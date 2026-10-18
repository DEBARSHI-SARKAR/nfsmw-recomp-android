/* speed.exe 007844f0 FUN_007844f0; analysis pseudocode, not buildable source.
 * calls 0077cb70 FUN_0077cb70
 * calls 0077f970 FUN_0077f970
 * calls 005c8cc0 FUN_005c8cc0
 * calls 00780960 FUN_00780960
 * calls 007627b0 FUN_007627b0
 * calls 007632b0 FUN_007632b0
 * calls 00486610 FUN_00486610
 */

void FUN_007844f0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float local_f0;
  uint *local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  float local_dc;
  int local_d8;
  undefined1 local_d4 [4];
  float local_d0;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [16];
  undefined4 local_a8 [8];
  undefined4 local_88;
  float local_84;
  undefined4 local_80 [7];
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  FUN_0077f970(0x15);
  local_dc = param_4 * param_4;
  piVar6 = *(int **)(param_2 + 4);
  if (piVar6 != *(int **)(param_2 + 8)) {
    do {
      local_e4 = *piVar6;
      if ((((*local_ec & (uint)*(ushort *)(local_e4 + 0x12)) == 0) &&
          (iVar7 = *(int *)(local_e4 + 0x1c), iVar7 != 0)) &&
         (sVar2 = *(short *)(iVar7 + 4), sVar2 != 0)) {
        local_d8 = iVar7;
        FUN_007632b0(local_40,1);
        FUN_00486610(param_3,local_40,local_d4);
        bVar5 = false;
        puVar9 = (undefined4 *)(*(ushort *)(iVar7 + 2) + 0x10 + iVar7);
        local_e8 = 0;
        if (sVar2 != 0) {
          do {
            if (((byte)*local_ec & *(byte *)((int)puVar9 + 0xd)) == 0) {
              fVar12 = (float10)FUN_007627b0(local_d4);
              local_f0 = (float)fVar12;
              if (fVar12 < (float10)local_dc) {
                if ((float)puVar9[5] <= (float)puVar9[1]) {
                  fVar1 = (float)puVar9[5];
                }
                else {
                  fVar1 = (float)puVar9[1];
                }
                if (fVar1 < local_d0 + param_4) {
                  if ((float)puVar9[1] <= (float)puVar9[5]) {
                    fVar1 = (float)puVar9[5];
                  }
                  else {
                    fVar1 = (float)puVar9[1];
                  }
                  if (local_d0 - param_4 < fVar1 != (local_d0 - param_4 == fVar1)) {
                    if (!bVar5) {
                      puVar10 = local_40;
                      puVar11 = local_80;
                      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                        *puVar11 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar11 = puVar11 + 1;
                      }
                      local_80[3] = 0;
                      local_64 = 0;
                      local_54 = 0;
                      local_44 = 0x3f800000;
                      FUN_005c8cc0(local_80);
                      bVar5 = true;
                    }
                    puVar10 = puVar9;
                    puVar11 = local_c8;
                    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar11 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar11 = puVar11 + 1;
                    }
                    FUN_00486610(local_c8,local_80,local_c8);
                    FUN_00486610(local_b8,local_80,local_b8);
                    iVar7 = *(int *)(local_e4 + 0x1c);
                    uVar3 = *(ushort *)(iVar7 + 6);
                    uVar4 = *(ushort *)(iVar7 + 2);
                    puVar10 = local_c8;
                    puVar11 = local_a8;
                    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar11 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar11 = puVar11 + 1;
                    }
                    local_88 = *(undefined4 *)
                                ((uint)uVar4 + (uint)uVar3 + iVar7 + 0x10 + (uint)local_bc * 4);
                    local_84 = local_f0;
                    FUN_0077cb70(&local_e0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8)
                                 ,local_a8,0);
                    FUN_00780960(&local_f0,local_e0,local_a8);
                    iVar7 = local_d8;
                  }
                }
              }
            }
            puVar9 = puVar9 + 8;
            local_e8 = local_e8 + 1;
          } while (local_e8 < (int)(uint)*(ushort *)(iVar7 + 4));
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_2 + 8));
  }
  return;
}

