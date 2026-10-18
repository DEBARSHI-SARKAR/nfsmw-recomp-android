/* speed.exe 005bbc00 FUN_005bbc00; analysis pseudocode, not buildable source.
 * calls 005b85a0 FUN_005b85a0
 * calls 005b7780 FUN_005b7780
 * calls 005b0cf0 FUN_005b0cf0
 * calls 005b8610 FUN_005b8610
 * calls 005b1360 FUN_005b1360
 * calls 005b0140 FUN_005b0140
 * calls 005b0d40 FUN_005b0d40
 * calls 005b0c90 FUN_005b0c90
 * calls 005b79b0 FUN_005b79b0
 * calls 005b7bb0 FUN_005b7bb0
 * calls 005b7dc0 FUN_005b7dc0
 * calls 005b7880 FUN_005b7880
 */

void __thiscall FUN_005bbc00(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      puVar1 = (uint *)(*(int *)(param_2 + 0x14) + local_8 * 0xc);
      uVar3 = *puVar1;
      if (uVar3 < 0x109) {
        if (uVar3 == 0x108) {
          FUN_005b79b0(param_4,0,0xff);
        }
        else if (uVar3 < 0x102) {
          if (uVar3 == 0x101) {
            if (param_4 != 0) {
              *(bool *)(param_4 + 0x28) = puVar1[1] == 1;
            }
          }
          else if (uVar3 < 3) {
            if (uVar3 == 2) {
              FUN_005b7780(puVar1[1],param_3,param_4,0xffffffff,param_5);
            }
            else if (uVar3 == 0) {
              if ((param_3 != 0) && (iVar4 = FUN_005b1360(puVar1[1]), iVar4 != 0)) {
                FUN_005b7dc0(iVar4);
                *(undefined4 *)(iVar4 + 0x10) = 0;
              }
            }
            else if (uVar3 == 1) {
              uVar3 = puVar1[2];
              if ((uVar3 != 0xfffffffc) && (uVar3 != 0xffffffff)) {
                uVar3 = FUN_005b85a0(uVar3);
              }
              FUN_005b7780(puVar1[1],param_3,param_4,uVar3,param_5);
            }
          }
          else if (uVar3 == 3) {
            FUN_005b7780(puVar1[1],param_3,param_4,0xfffffffb,param_5);
          }
          else if (uVar3 == 0x100) {
            if (puVar1[1] == 0) {
              iVar4 = 0;
LAB_005bbd12:
              if (puVar1[1] != 0) goto switchD_005bbd72_caseD_104;
              bVar7 = iVar4 == 0;
            }
            else {
              iVar4 = FUN_005b85a0(puVar1[1]);
              bVar7 = false;
              if (iVar4 == 0) goto LAB_005bbd12;
            }
            FUN_005b8610(iVar4,!bVar7);
          }
        }
        else {
          switch(uVar3) {
          case 0x102:
            if (*(int *)(param_4 + 0x8c) == 0) {
              FUN_005b0c90(*(undefined4 *)(param_4 + 0x10),0);
            }
            else {
              FUN_005b0c90(*(undefined4 *)(param_4 + 0x10),
                           *(undefined4 *)(*(int *)(param_4 + 0x8c) + 0xc));
            }
            break;
          case 0x103:
            iVar5 = FUN_005b0cf0(*(undefined4 *)(param_4 + 0x10));
            iVar4 = 0;
            if (iVar5 == 0) {
LAB_005bbdc2:
              if (puVar1[1] != 0) {
                iVar4 = FUN_005b85a0(puVar1[1]);
                bVar7 = iVar4 == 0;
                if (!bVar7) goto LAB_005bbde0;
              }
              if (puVar1[1] != 0) break;
              bVar7 = iVar4 == 0;
            }
            else {
              iVar4 = FUN_005b85a0(iVar5);
              bVar7 = false;
              if (iVar4 == 0) goto LAB_005bbdc2;
            }
LAB_005bbde0:
            FUN_005b8610(iVar4,!bVar7);
            break;
          case 0x105:
            FUN_005b79b0(param_4,1,param_5);
            break;
          case 0x106:
            FUN_005b79b0(param_4,1,0xff);
            break;
          case 0x107:
            FUN_005b79b0(param_4,0,param_5);
          }
        }
      }
      else if (uVar3 < 0x2c1) {
        if (uVar3 == 0x2c0) {
          FUN_005b7bb0(*(undefined4 *)(param_4 + 0xc));
        }
        else {
          switch(uVar3) {
          case 0x200:
            FUN_005b7880(3,*(undefined4 *)(param_4 + 0x20),puVar1[1]);
            break;
          case 0x201:
            FUN_005b7880(2,*(undefined4 *)(param_4 + 0x20),puVar1[1]);
            break;
          case 0x202:
            uVar3 = 0;
            do {
              uVar6 = 1 << ((byte)uVar3 & 0x1f);
              if ((param_5 & uVar6) != 0) {
                FUN_005b7880(2,uVar6,puVar1[1]);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 8);
            break;
          case 0x203:
            FUN_005b7880(1,0,0);
            break;
          case 0x204:
            FUN_005b7880(2,0,puVar1[1]);
          }
        }
      }
      else if (uVar3 < 0x301) {
        if (uVar3 == 0x300) {
          if (*(uint *)(*(int *)(param_3 + 0x54) + 0x30) != puVar1[1]) {
            local_8 = FUN_005b0140(local_8);
          }
        }
        else if (uVar3 == 0x2c1) {
          if (*(int *)(param_1 + 0x4144) != 0) {
            iVar4 = *(int *)(param_1 + 0x4144) + -1;
            *(int *)(param_1 + 0x4144) = iVar4;
            iVar4 = iVar4 * 0x100 + 0x4148 + param_1;
            if (iVar4 != 0) {
              FUN_005b7880(3,*(undefined4 *)(param_4 + 0x20),iVar4);
            }
          }
        }
        else if (uVar3 == 0x2c2) {
          FUN_005b0d40();
        }
      }
      else {
        if (uVar3 == 0x301) {
          bVar7 = *(uint *)(*(int *)(param_3 + 0x54) + 0x30) == puVar1[1];
        }
        else {
          bVar7 = uVar3 == 0x500;
        }
        if (bVar7) {
          local_8 = FUN_005b0140(local_8);
        }
      }
switchD_005bbd72_caseD_104:
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return;
}

