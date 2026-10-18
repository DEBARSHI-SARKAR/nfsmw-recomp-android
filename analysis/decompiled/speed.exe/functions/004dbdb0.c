/* speed.exe 004dbdb0 FUN_004dbdb0; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004dbdb0(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cb1b;
  local_c = ExceptionList;
  if (*(int *)(param_1[5] + 0x34) != 0) {
    ExceptionList = &local_c;
    if (param_1[4] != 0) {
      ExceptionList = &local_c;
      *(undefined4 *)(param_1[4] + 0x3c) = 1;
    }
    if ((DAT_00904ff9 == '\0') && (DAT_009b0894 == 0)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    piVar3 = (int *)param_1[10];
    param_1[0xb] = (uint)bVar2;
    local_10 = param_1;
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar3);
    }
    FUN_004b8db0(param_1);
    piVar3 = (int *)FUN_00831667(0x5c);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar4 = param_1[0xb];
      piVar1 = piVar3 + 1;
      *piVar1 = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (3 < iVar4) {
        iVar4 = 3;
      }
      piVar3[5] = iVar4;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      piVar3[0xe] = 0;
      piVar3[0xf] = 0;
      piVar3[0x10] = 0;
      piVar3[0x11] = 0;
      piVar3[0x12] = 0;
      piVar3[0x13] = 25000;
      piVar3[0x14] = 0;
      piVar3[0x15] = 0x7fff;
      piVar3[0x16] = 0;
      local_10 = piVar3;
      iVar4 = FUN_00831a8a(&DAT_009147dc,piVar1,piVar3);
      if (iVar4 < 0) {
        FUN_0083198b(&PTR_s_FX_SKID_008f02f8);
        FUN_00831a8a(&DAT_009147dc,piVar1,piVar3);
      }
    }
    param_1[10] = (int)piVar3;
    local_4 = 0xffffffff;
    local_10 = (int *)0x0;
    if (*piVar3 != 0) {
      FUN_008311aa(&local_10);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  ExceptionList = local_c;
  return;
}

