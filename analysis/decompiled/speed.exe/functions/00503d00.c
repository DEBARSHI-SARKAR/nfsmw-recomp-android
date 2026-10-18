/* speed.exe 00503d00 FUN_00503d00; analysis pseudocode, not buildable source.
 * calls 006da2f0 FUN_006da2f0
 * calls 00503400 FUN_00503400
 * calls 00444fe0 FUN_00444fe0
 * calls 004fef50 FUN_004fef50
 * calls 006c1160 FUN_006c1160
 * calls 006ceee0 FUN_006ceee0
 * calls 006bcc00 FUN_006bcc00
 * calls 004fdfe0 FUN_004fdfe0
 * calls 006bd920 FUN_006bd920
 * calls 006c6770 FUN_006c6770
 */

void __thiscall FUN_00503d00(int *param_1,undefined4 *param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [76];
  
  if ((DAT_008f86ec != '\0') && (0 < *param_1)) {
    local_d8 = 0;
    local_a4 = param_1;
    FUN_00444fe0(local_50,*param_2);
    local_e0 = (int *)param_1[0xde];
    if (local_e0 != param_1 + 0xde) {
      do {
        piVar5 = (int *)local_e0[2];
        if (piVar5 != local_e0 + 2) {
          do {
            if ((int *)piVar5[0x20] != piVar5 + 0x20) {
              local_d8 = local_d8 + 1;
              iVar3 = FUN_00503400(*(undefined4 *)(*(int *)(piVar5[0x1f] + 8) + 0x98),1,0);
              param_1[0xe3] = iVar3;
              if (iVar3 != 0) {
                local_dc = 0;
                FUN_006bcc00(param_2,local_80,local_8c,local_5c);
                cVar2 = FUN_006ceee0(param_2,param_1[0xe3],(short)piVar5[7]);
                if (cVar2 != '\0') {
                  piVar4 = (int *)piVar5[0x20];
                  local_d4 = 0;
                  if (piVar4 != piVar5 + 0x20) {
                    do {
                      iVar3 = piVar5[0x1f];
                      if (iVar3 != local_d4) {
                        local_d4 = iVar3;
                      }
                      iVar3 = *(int *)(*(int *)(iVar3 + 8) + 200);
                      bVar6 = iVar3 != 0;
                      if (bVar6) {
                        FUN_004fdfe0(iVar3,&local_c0,&local_d0,(int)piVar4 + 0x6a,local_50);
                        local_a0 = piVar4[0x14];
                        local_9c = piVar4[0x15];
                        local_98 = piVar4[0x16];
                        local_94 = 0x3f800000;
                        FUN_006bd920(&local_a0,local_50,&local_a0);
                        fVar1 = (float)piVar4[3];
                        local_c0 = local_c0 * fVar1;
                        local_dc = 2;
                        local_bc = local_bc * fVar1;
                        local_b8 = local_b8 * fVar1;
                        local_b4 = local_b4 * fVar1;
                        local_d0 = local_d0 * fVar1;
                        local_cc = local_cc * fVar1;
                        local_c8 = local_c8 * fVar1;
                        local_c4 = local_c4 * fVar1;
                      }
                      FUN_004fef50(piVar4,local_80,local_8c,local_5c,local_68,local_74);
                      FUN_006c1160(piVar4,local_74,local_68,local_dc,-(uint)bVar6 & (uint)&local_c0,
                                   -(uint)bVar6 & (uint)&local_d0);
                      piVar4 = (int *)*piVar4;
                      param_1 = local_a4;
                    } while (piVar4 != piVar5 + 0x20);
                  }
                }
                FUN_006da2f0();
              }
            }
            piVar5 = (int *)*piVar5;
          } while (piVar5 != local_e0 + 2);
        }
        local_e0 = (int *)*local_e0;
      } while (local_e0 != param_1 + 0xde);
    }
    FUN_006c6770(*param_1,0x400,local_d8,0x2e,DAT_00916a54,500,DAT_00916a50,200);
  }
  return;
}

