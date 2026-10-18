/* speed.exe 004ee1c0 FUN_004ee1c0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 008311aa FUN_008311aa
 * calls 00831a8a FUN_00831a8a
 * calls 004edfd0 FUN_004edfd0
 */

void __fastcall FUN_004ee1c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d296;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004edfd0();
  local_14 = *(int *)(param_1 + 0x2c);
  piVar2 = (int *)FUN_00831667(0x6c);
  local_4 = 0;
  local_10 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0xd8) + 0x94);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (99 < iVar3) {
      iVar3 = 99;
    }
    piVar1 = piVar2 + 1;
    *piVar1 = iVar3;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    if (local_14 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_14;
      if (2 < local_14) {
        iVar3 = 2;
      }
    }
    piVar2[0xd] = iVar3;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    iVar3 = FUN_00831a8a(&DAT_00914824,piVar1,piVar2);
    if (iVar3 < 0) {
      FUN_0083198b(&PTR_DAT_008f0248);
      FUN_00831a8a(&DAT_00914824,piVar1,piVar2);
    }
  }
  *(int **)(param_1 + 0x28) = piVar2;
  local_4 = 0xffffffff;
  local_14 = 0;
  if (*piVar2 != 0) {
    FUN_008311aa(&local_14);
  }
  *(undefined2 *)(param_1 + 0x1c) = (undefined2)local_14;
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228) == 0) &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x18) + 0xd8) + 0xa3) != '\0')) {
    piVar2 = (int *)FUN_00831667(0x28);
    local_4 = 1;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0xd8) + 0x94);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x3c < iVar3) {
        iVar3 = 0x3c;
      }
      piVar1 = piVar2 + 1;
      *piVar1 = iVar3;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 25000;
      piVar2[7] = 0;
      piVar2[8] = 0x7fff;
      piVar2[9] = 0;
      local_10 = piVar2;
      iVar3 = FUN_00831a8a(&DAT_00914814,piVar1,piVar2);
      if (iVar3 < 0) {
        FUN_0083198b(&PTR_s_CAR_TRANNY_008f0260);
        FUN_00831a8a(&DAT_00914814,piVar1,piVar2);
      }
    }
    *(int **)(param_1 + 0x30) = piVar2;
    local_4 = 0xffffffff;
    local_10 = (int *)0x0;
    if (*piVar2 != 0) {
      FUN_008311aa(&local_10);
    }
  }
  ExceptionList = local_c;
  return;
}

