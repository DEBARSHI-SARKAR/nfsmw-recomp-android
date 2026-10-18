/* speed.exe 005ef2d0 FUN_005ef2d0; analysis pseudocode, not buildable source.
 * calls 00785430 FUN_00785430
 * calls 005edd60 FUN_005edd60
 * calls 005d0370 FUN_005d0370
 * calls 00782ee0 FUN_00782ee0
 * calls 005e2770 FUN_005e2770
 * calls 005094c0 FUN_005094c0
 * calls 004ff180 FUN_004ff180
 * calls 005db520 FUN_005db520
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_005ef2d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087564e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a3a84;
  iVar4 = 2;
  local_4 = 2;
  if (param_1[0x1d] != 0) {
    FUN_00785430(param_1 + 10);
    param_1[0x1d] = 0;
  }
  param_1[0xe] = param_1[0xe] & 0xfffffeff;
  FUN_005db520();
  *(undefined1 *)(param_1 + 0x31) = 0;
  piVar3 = param_1 + 0x2e;
  do {
    if (*piVar3 != 0) {
      FUN_004ff180();
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        FUN_005094c0();
        FUN_00463ca0(DAT_00916068,iVar1);
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1[0x30] != 0) {
    uVar2 = 0;
    if (*(uint *)(DAT_0091e00c + 700) != 0) {
      piVar3 = *(int **)(DAT_0091e00c + 0x2c4);
      do {
        if (*piVar3 == param_1[0x30]) {
          FUN_005edd60(uVar2);
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)(DAT_0091e00c + 700));
    }
    param_1[0x30] = 0;
  }
  iVar4 = param_1[0x1f];
  local_4._0_1_ = 1;
  if (iVar4 != 0) {
    FUN_005d0370(iVar4,(param_1[0x21] - iVar4 >> 2) * 4,0);
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00782ee0();
  local_4 = 0xffffffff;
  FUN_005e2770();
  ExceptionList = local_c;
  return;
}

