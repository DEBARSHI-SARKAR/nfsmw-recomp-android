/* speed.exe 0072fba0 FUN_0072fba0; analysis pseudocode, not buildable source.
 * calls 00464050 FUN_00464050
 * calls 00728170 FUN_00728170
 * calls 0072c370 FUN_0072c370
 * calls 00727e60 FUN_00727e60
 * calls 007239b0 FUN_007239b0
 * calls 0072c410 FUN_0072c410
 */

uint __fastcall FUN_0072fba0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  local_4 = 0;
  while (0 < param_1[1]) {
    iVar1 = *param_1;
    iVar3 = param_1[1];
    iVar5 = 0;
    do {
      if (((*(int *)(iVar1 + 0xc) == 3) && (*(char *)(iVar1 + 0xb) == '\0')) &&
         ((iVar5 == 0 || (*(int *)(iVar1 + 0x38) < *(int *)(iVar5 + 0x38))))) {
        iVar5 = iVar1;
      }
      iVar1 = iVar1 + 0x5c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((iVar5 == 0) || (FUN_00727e60(iVar5), *(int *)(iVar5 + 0x54) == 0)) break;
  }
  param_1[0xb] = 0;
  do {
    do {
      FUN_007239b0();
      uVar2 = FUN_00728170(&local_8);
      if (uVar2 == 0) {
LAB_0072fd16:
        iVar1 = param_1[0x6a];
        param_1[0x68] = 0;
        iVar3 = FUN_00464050(7);
        iVar3 = iVar3 - (uVar2 + iVar1);
        if (0 < param_1[1]) {
          iVar1 = param_1[1];
          piVar4 = (int *)(*param_1 + 0xc);
          do {
            if ((*(char *)((int)piVar4 + -1) == '\0') && (*piVar4 != 0)) {
              iVar3 = iVar3 + piVar4[5];
            }
            piVar4 = piVar4 + 0x17;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        param_1[0x68] = iVar3;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      if (0xf < param_1[0xb]) {
        return uVar2 & 0xffffff00;
      }
      FUN_007239b0();
      iVar1 = 0;
      if (param_1[1] < 1) {
LAB_0072fc66:
        iVar1 = 0;
      }
      else {
        iVar3 = *param_1;
        iVar5 = param_1[1];
        do {
          if (((*(int *)(iVar3 + 0xc) == 3) && (*(char *)(iVar3 + 0xb) == '\0')) &&
             ((iVar1 == 0 || (*(int *)(iVar3 + 0x38) < *(int *)(iVar1 + 0x38))))) {
            iVar1 = iVar3;
          }
          iVar3 = iVar3 + 0x5c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar1 == 0) goto LAB_0072fc66;
        FUN_00727e60(iVar1);
        iVar1 = *(int *)(iVar1 + 0x54);
      }
      local_4 = local_4 + iVar1;
    } while (0 < iVar1);
    iVar1 = FUN_00464050(7);
    if (iVar1 < local_8 + 0x4000) {
      do {
        *(undefined1 *)((int)param_1 + 0x191) = 1;
        iVar1 = FUN_0072c410();
        if (iVar1 == 0) break;
        FUN_0072c370(iVar1);
        FUN_00728170(&local_8);
        FUN_007239b0();
        iVar1 = FUN_00464050(7);
      } while (iVar1 < local_8 + 0x4000);
    }
    *(undefined1 *)((int)param_1 + 0x191) = 1;
    iVar1 = FUN_0072c410();
    if (iVar1 == 0) {
      FUN_00728170(&local_8);
      goto LAB_0072fd16;
    }
    FUN_0072c370(iVar1);
  } while( true );
}

