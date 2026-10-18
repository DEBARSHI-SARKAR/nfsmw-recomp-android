/* speed.exe 005c4a30 FUN_005c4a30; analysis pseudocode, not buildable source.
 * calls 005c2c40 FUN_005c2c40
 * calls 005b7c30 FUN_005b7c30
 * calls 005c07b0 FUN_005c07b0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005c4670 FUN_005c4670
 * calls 00652ad0 _malloc
 * calls 005af9c0 FUN_005af9c0
 * calls 005b5420 FUN_005b5420
 * calls 0050db90 FUN_0050db90
 * calls 005c3610 FUN_005c3610
 * calls 005add30 FUN_005add30
 */

uint __fastcall FUN_005c4a30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  byte bVar8;
  int *local_c;
  uint local_4;
  
  iVar3 = param_1[1];
  piVar5 = (int *)(iVar3 + 8);
  iVar4 = *(int *)(iVar3 + 8);
  while (iVar4 != -0x33959db1) {
    if (piVar5 == (int *)(*(int *)(iVar3 + 4) + 8 + iVar3)) {
      if (*piVar5 != -0x33959db1) {
        return (uint)piVar5 & 0xffffff00;
      }
      break;
    }
    piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
    iVar4 = *piVar5;
  }
  local_c = piVar5 + 2;
  piVar1 = (int *)(piVar5[1] + 8 + (int)piVar5);
  if ((local_c == (int *)0x0) || (piVar1 == (int *)0x0)) {
    return (uint)piVar5 & 0xffffff00;
  }
  iVar3 = *local_c;
  while (iVar3 != -0x159db0ba) {
    if (piVar1 <= local_c) goto LAB_005c4afc;
    if (iVar3 == 0x6e747542) {
      iVar3 = *param_1;
      iVar4 = local_c[2];
      param_1[0x12] = iVar4;
      thunk_FUN_007c7250(*(undefined4 *)(iVar3 + 0x90));
      *(undefined4 *)(iVar3 + 0x90) = 0;
      if (iVar4 != 0) {
        pvVar6 = _malloc(iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x90) = pvVar6;
      }
      *(int *)(iVar3 + 0x94) = iVar4;
    }
    local_c = (int *)((int)local_c + local_c[1] + 8);
    iVar3 = *local_c;
  }
  if (local_c < piVar1) {
    do {
      piVar5 = local_c + 2;
      piVar2 = (int *)((int)local_c + local_c[1] + 8);
      param_1[3] = 0;
      param_1[5] = 0;
      if (piVar5 < piVar2) {
        do {
          iVar3 = *piVar5;
          if (iVar3 == 0x446a624f) {
            uVar7 = FUN_005c4670(piVar5 + 2,piVar5[1]);
            if ((char)uVar7 == '\0') {
              return uVar7 & 0xffffff00;
            }
          }
          else if (iVar3 == 0x5267734d) {
            FUN_005c2c40(piVar5 + 2,piVar5[1],0);
          }
          else if (iVar3 == 0x70726353) {
            FUN_005c3610(piVar5 + 2,piVar5[1]);
          }
          piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
        } while (piVar5 < piVar2);
        if (param_1[3] != 0) {
          iVar3 = *(int *)(param_1[3] + 0x18);
          if (iVar3 == 4) {
            FUN_005af9c0();
          }
          else if (iVar3 == 6) {
            FUN_005add30();
          }
          for (iVar3 = *(int *)(param_1[3] + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            if (*(int *)(iVar3 + 0x18) != 0) {
              for (iVar4 = *(int *)(param_1[3] + 0x4c);
                  (iVar4 != 0 && (*(int *)(iVar4 + 0x30) != *(int *)(iVar3 + 0x18)));
                  iVar4 = *(int *)(iVar4 + 4)) {
              }
              *(int *)(iVar3 + 0x18) = iVar4;
            }
          }
          for (iVar3 = *(int *)(param_1[3] + 0x4c);
              (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0x1744b3)); iVar3 = *(int *)(iVar3 + 4)) {
          }
          *(int *)(param_1[3] + 0x54) = iVar3;
          if (iVar3 != 0) {
            FUN_005b7c30();
          }
          *(undefined4 *)(iVar3 + 0x10) = 0;
          if ((char)param_1[2] == '\0') {
            bVar8 = 0;
            local_4 = local_4 & 0xffffff00;
            if (*(int *)(iVar3 + 0x1c) != 0) {
              do {
                FUN_005c07b0(iVar3,local_4,0,param_1[3]);
                bVar8 = bVar8 + 1;
                local_4 = CONCAT31(local_4._1_3_,bVar8);
              } while ((uint)bVar8 < *(uint *)(iVar3 + 0x1c));
            }
          }
          if (param_1[5] == 0) {
            FUN_0050db90(param_1[3]);
          }
          else {
            FUN_005b5420(param_1[3]);
          }
        }
      }
      local_c = (int *)((int)local_c + local_c[1] + 8);
    } while (local_c < piVar1);
    return CONCAT31((int3)((uint)local_c >> 8),1);
  }
LAB_005c4afc:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

