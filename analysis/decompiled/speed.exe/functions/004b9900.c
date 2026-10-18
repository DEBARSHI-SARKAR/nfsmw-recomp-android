/* speed.exe 004b9900 FUN_004b9900; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 004b8db0 FUN_004b8db0
 * calls 004eb7d0 FUN_004eb7d0
 * calls 007c4b80 FUN_007c4b80
 * calls 00831a8a FUN_00831a8a
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b9900(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b78b;
  local_c = ExceptionList;
  if (((DAT_008f86f8 != 0) && (DAT_0091208c == 0)) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) != 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_004eb7d0(1,0);
      if (_DAT_00890da8 < _DAT_008ee5b8) {
        iVar3 = FUN_007c4b80();
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        iVar2 = iVar3 * iVar2 >> 0xf;
        _DAT_008ee5b8 = -1.0;
      }
      if (param_2 == 0x13) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 0x10) = 0x7fff;
      }
      FUN_004b8db0(*(undefined4 *)(param_1 + 0x28));
      piVar4 = (int *)FUN_00831667(0x14);
      local_4 = 0;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (param_2 < 0) {
          param_2 = 0;
        }
        else if (2000 < param_2) {
          param_2 = 2000;
        }
        piVar1 = piVar4 + 1;
        *piVar1 = param_2;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        piVar4[2] = iVar2;
        piVar4[3] = 0x1000;
        piVar4[4] = 0;
        iVar2 = FUN_00831a8a(&DAT_00914884,piVar1,piVar4);
        if (iVar2 < 0) {
          FUN_0083198b(&PTR_s_PlayCommonSample_008f02b8);
          FUN_00831a8a(&DAT_00914884,piVar1,piVar4);
        }
      }
      local_4 = 0xffffffff;
      *(int **)(param_1 + 0x20) = piVar4;
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          FUN_00831782();
        }
        FUN_00831682(piVar4);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    ExceptionList = local_c;
    return 0;
  }
  return 0xffffffff;
}

