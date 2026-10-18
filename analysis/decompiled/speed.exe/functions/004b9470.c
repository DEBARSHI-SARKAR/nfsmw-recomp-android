/* speed.exe 004b9470 FUN_004b9470; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 008311aa FUN_008311aa
 * calls 0083198b FUN_0083198b
 * calls 004eb7d0 FUN_004eb7d0
 * calls 00831782 FUN_00831782
 * calls 00831a8a FUN_00831a8a
 * calls 00831682 FUN_00831682
 * calls 004647c0 FUN_004647c0
 */

undefined4 __thiscall FUN_004b9470(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086b736;
  local_c = ExceptionList;
  if (DAT_008f86f8 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_004eb7d0(2,0);
    uVar3 = (**(code **)(**(int **)(param_1 + 0xfc) + 8))((*(int **)(param_1 + 0xfc))[8]);
    FUN_004647c0(&DAT_00911e9c," %s, 0x%x ",uVar3);
    iVar5 = (int)param_2;
    iVar4 = (int)param_2 + 0x17;
    PTR_s_CSISSOUND_008ee560 = &DAT_00911e9c;
    if ((((iVar4 < 0x67) || (0x76 < iVar4)) || (iVar4 == 0x6e)) || (iVar4 == 0x6f)) {
      piVar6 = (int *)FUN_00831667(0x14);
      uStack_4 = 1;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (2000 < iVar5) {
          iVar5 = 2000;
        }
        piVar1 = piVar6 + 1;
        *piVar1 = iVar5;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        piVar6[2] = iVar2;
        piVar6[3] = 0x1000;
        piVar6[4] = 0;
        param_2 = piVar6;
        iVar4 = FUN_00831a8a(&DAT_0091493c,piVar1,piVar6);
        if (iVar4 < 0) {
          FUN_0083198b(&PTR_s_PlayFrontEndSample_008f02c0);
          FUN_00831a8a(&DAT_0091493c,piVar1,piVar6);
        }
      }
      *(int **)(param_1 + 0x24) = piVar6;
      uStack_4 = 0xffffffff;
      param_2 = (int *)0x0;
      if (*piVar6 != 0) {
        FUN_008311aa(&param_2);
      }
      piVar6 = *(int **)(param_1 + 0x24);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 != 0) {
          FUN_00831782();
        }
        FUN_00831682(piVar6);
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x28);
      if (piVar6 != (int *)0x0) {
        if (*piVar6 != 0) {
          FUN_00831782();
        }
        FUN_00831682(piVar6);
      }
      iVar4 = FUN_00831667(0x14);
      uStack_4 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (500 < iVar5) {
          iVar5 = 500;
        }
        piVar6 = (int *)(iVar4 + 4);
        *piVar6 = iVar5;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        *(int *)(iVar4 + 8) = iVar2;
        *(undefined4 *)(iVar4 + 0xc) = 0x1000;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        param_2 = (int *)iVar4;
        iVar5 = FUN_00831a8a(&DAT_009148f8,piVar6,iVar4);
        if (iVar5 < 0) {
          FUN_0083198b(&PTR_s_PlayFrontEndSample_RS_008f02c8);
          FUN_00831a8a(&DAT_009148f8,piVar6,iVar4);
          *(int *)(param_1 + 0x28) = iVar4;
          ExceptionList = local_c;
          return 0;
        }
      }
      *(int *)(param_1 + 0x28) = iVar4;
    }
  }
  ExceptionList = local_c;
  return 0;
}

