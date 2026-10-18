/* speed.exe 005018f0 FUN_005018f0; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 0045ce70 FUN_0045ce70
 * calls 004fb210 FUN_004fb210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005018f0(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  
  if ((&DAT_009175dc)[param_1 & 0x1fff] == '\0') {
    return 0;
  }
  uVar3 = FUN_0045ce40();
  uVar6 = 0;
  if (param_2 == 0) {
    piVar7 = DAT_0091a0d0;
    if ((int **)DAT_0091a0d0 != &DAT_0091a0d0) {
      do {
        if (((piVar7 != (int *)0x0) &&
            (iVar4 = FUN_004fb210(param_1,piVar7[0x1d],piVar7[3],0,8), iVar4 != 0)) &&
           (*(int *)(iVar4 + 4) != 0)) {
          uVar6 = *(undefined4 *)(iVar4 + 4);
          iVar4 = *piVar7;
          piVar1 = (int *)piVar7[1];
          *piVar1 = iVar4;
          *(int **)(iVar4 + 4) = piVar1;
          piVar2 = DAT_0091a0d0;
          piVar1 = DAT_0091a0d0 + 1;
          DAT_0091a0d0 = piVar7;
          *piVar1 = (int)piVar7;
          piVar7[1] = (int)&DAT_0091a0d0;
          *piVar7 = (int)piVar2;
          break;
        }
        piVar7 = (int *)*piVar7;
      } while ((int **)piVar7 != &DAT_0091a0d0);
    }
  }
  else {
    iVar4 = FUN_004fb210(param_1,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0xc),0,8)
    ;
    if (iVar4 != 0) {
      uVar6 = *(undefined4 *)(iVar4 + 4);
    }
  }
  uVar5 = FUN_0045ce40();
  fVar8 = (float10)FUN_0045ce70(uVar3,uVar5);
  _DAT_00915ff0 = (float)(fVar8 + (float10)_DAT_00915ff0);
  return uVar6;
}

