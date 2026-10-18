/* speed.exe 006902f0 FUN_006902f0; analysis pseudocode, not buildable source.
 * calls 0068fe20 FUN_0068fe20
 * calls 00671730 FUN_00671730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006902f0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  int iStack_c;
  
  uVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  uVar4 = 0;
  iStack_c = 0;
  piVar5 = (int *)(param_1 + 300);
  do {
    iVar1 = *piVar5;
    FUN_0068fe20();
    cVar2 = FUN_00671730(uVar3,*(undefined4 *)(iVar1 + 0xc4));
    if (cVar2 != '\0') {
      fVar6 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 100))(uVar4);
      fVar6 = fVar6 + (float10)*(float *)(iVar1 + 0x48);
      if (fVar6 < (float10)_DAT_008aabe0 == (fVar6 == (float10)_DAT_008aabe0)) {
        fVar7 = fVar6;
        if (fVar6 <= (float10)_DAT_00890968) goto LAB_0069035a;
      }
      else {
        fVar7 = (float10)_DAT_00890968;
LAB_0069035a:
        fVar6 = (float10)_DAT_00890968;
      }
      *(float *)(iVar1 + 0x78) = (float)fVar6;
      if ((float10)_DAT_00890968 < fVar7) {
        iStack_c = iStack_c + 1;
      }
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    if (3 < uVar4) {
      *(int *)(param_1 + 0x114) = iStack_c;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      DAT_009377fc = 1;
      return;
    }
  } while( true );
}

