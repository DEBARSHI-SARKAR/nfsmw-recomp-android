/* speed.exe 007267c0 FUN_007267c0; analysis pseudocode, not buildable source.
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 004fca80 FUN_004fca80
 * calls 0045f340 FUN_0045f340
 * calls 007c4b80 FUN_007c4b80
 * calls 00722140 FUN_00722140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007267c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  for (puVar1 = *(undefined4 **)(param_2 + 8); puVar1 != (undefined4 *)(param_2 + 8);
      puVar1 = (undefined4 *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    iVar6 = thunk_FUN_006cf2b0(piVar2 + 0x18,piVar2 + 0x14,0);
    if (iVar6 != 0) {
      uVar8 = 0x3f800000;
      fVar7 = (float10)FUN_0045f340(piVar2 + 0x40,*(int *)(param_1 + 0x40) + 0x40,0x3f800000);
      iVar6 = FUN_004fca80((float)fVar7,uVar8);
      if (_DAT_008b277c < (float)iVar6) {
        if ((float)iVar6 <= _DAT_008b2780) {
          uVar5 = FUN_007c4b80();
        }
        else {
          uVar5 = 0;
        }
        FUN_00722140(param_1,uVar5);
        iVar6 = *piVar2;
        piVar3 = (int *)piVar2[1];
        *piVar3 = iVar6;
        *(int **)(iVar6 + 4) = piVar3;
        piVar4 = DAT_009aa4d0;
        piVar3 = DAT_009aa4d0 + 1;
        DAT_009aa4d0 = piVar2;
        *piVar3 = (int)piVar2;
        piVar2[1] = (int)&DAT_009aa4d0;
        *piVar2 = (int)piVar4;
      }
    }
  }
  return;
}

