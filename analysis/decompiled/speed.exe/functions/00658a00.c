/* speed.exe 00658a00 FUN_00658a00; analysis pseudocode, not buildable source.
 * calls 00505350 FUN_00505350
 * calls 0072b220 FUN_0072b220
 * calls 0045cd20 __break
 * calls 006cb2a0 FUN_006cb2a0
 * calls 0045ce40 FUN_0045ce40
 * calls 004facb0 FUN_004facb0
 * calls 004647c0 FUN_004647c0
 * calls 0059ac10 FUN_0059ac10
 * calls 0045d650 FUN_0045d650
 */

void FUN_00658a00(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined4 auStack_100 [64];
  
  FUN_006cb2a0();
  piVar1 = (int *)((int)param_1 + param_2);
joined_r0x00658a1f:
  if (piVar1 <= param_1) {
    if (DAT_00925874 == '\0') {
      FUN_0045ce40();
      if (DAT_00915fe4 != 0) {
        FUN_00505350();
      }
      FUN_004facb0();
    }
    return;
  }
  uVar4 = 0;
  for (piVar2 = param_1; piVar2 < piVar1; piVar2 = (int *)((int)piVar2 + piVar2[1] + 8)) {
    uVar6 = uVar4 & 0x8000003f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
    }
    auStack_100[uVar6] = piVar2;
    uVar4 = uVar4 + 1;
  }
  if ((int)uVar4 < 0x41) goto LAB_00658a5d;
  uVar6 = 0x40;
  goto LAB_00658a70;
LAB_00658a5d:
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
LAB_00658a70:
    do {
      uVar4 = uVar4 - 1;
      uVar5 = uVar4 & 0x8000003f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
      }
      piVar1 = (int *)auStack_100[uVar5];
      piVar2 = &DAT_008f7ef8;
      do {
        if (*piVar2 == *piVar1) goto LAB_00658ac5;
        piVar2 = piVar2 + 2;
      } while ((int)piVar2 < 0x8f7f00);
      DAT_00925ef0 = DAT_00925ef0 + 1 & 3;
      FUN_004647c0(&DAT_00925ea0 + DAT_00925ef0 * 0x14,"BCHUNK_0x%08X",*piVar1);
LAB_00658ac5:
      FUN_0045ce40();
      if (*piVar1 != 0) {
        iVar3 = FUN_0045d650(*piVar1);
        if (iVar3 == 0) {
          ppuVar7 = &PTR_FUN_008f7e40;
          while (iVar3 = (*(code *)*ppuVar7)(piVar1), iVar3 == 0) {
            ppuVar7 = ppuVar7 + 1;
            if (0x8f7ea7 < (int)ppuVar7) goto LAB_00658aea;
          }
        }
        else {
          iVar3 = (**(code **)(iVar3 + 0xc))(piVar1);
          if (iVar3 == 0) {
LAB_00658aea:
                    /* WARNING: Subroutine does not return */
            __break();
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  goto joined_r0x00658a1f;
}

