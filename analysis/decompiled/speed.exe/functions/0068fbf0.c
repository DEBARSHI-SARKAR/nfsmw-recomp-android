/* speed.exe 0068fbf0 FUN_0068fbf0; analysis pseudocode, not buildable source.
 * calls 00671730 FUN_00671730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0068fbf0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  int *piStack_10;
  int iStack_c;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  iStack_c = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    return;
  }
  piStack_10 = (int *)(param_1 + 0xfc);
  uVar5 = 0;
  do {
    iVar3 = *piStack_10;
    cVar1 = FUN_00671730(uVar2,*(undefined4 *)(iVar3 + 0xc4));
    if (cVar1 != '\0') {
      fVar6 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 100))(uVar5);
      fVar6 = fVar6 + (float10)*(float *)(iVar3 + 0x48);
      if ((float10)_DAT_00890968 <= fVar6) {
        fVar7 = fVar6;
        if (fVar6 <= (float10)_DAT_00890968) goto LAB_0068fc73;
      }
      else {
        fVar7 = (float10)_DAT_00890968;
LAB_0068fc73:
        fVar6 = (float10)_DAT_00890968;
      }
      *(float *)(iVar3 + 0x78) = (float)fVar6;
      if ((float10)_DAT_00890968 < fVar7) {
        iStack_c = iStack_c + 1;
      }
    }
    piStack_10 = piStack_10 + 1;
    uVar5 = uVar5 + 1;
    uVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (uVar4 <= uVar5) {
      *(int *)(param_1 + 0xf4) = iStack_c;
      return;
    }
  } while( true );
}

