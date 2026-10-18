/* speed.exe 0068e800 FUN_0068e800; analysis pseudocode, not buildable source.
 * calls 00653ca0 FUN_00653ca0
 * calls 00671730 FUN_00671730
 * calls 00671460 FUN_00671460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0068e800(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  int *piStack_24;
  int iStack_20;
  float fStack_1c;
  undefined4 uStack_14;
  float fStack_c;
  float fStack_8;
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  (**(code **)(*piVar3 + 0x3c))(&fStack_c);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  iStack_20 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (iVar4 != 0) {
    piStack_24 = (int *)(param_1 + 0x1b4);
    do {
      iVar4 = *piStack_24;
      FUN_00671460();
      cVar2 = FUN_00671730(uStack_14,*(undefined4 *)(iVar4 + 0xc4));
      if (cVar2 != '\0') {
        fVar1 = (float)piVar3 * *(float *)(iVar4 + 0x3c) +
                fStack_c * *(float *)(iVar4 + 0x40) + fStack_8 * *(float *)(iVar4 + 0x44);
        fStack_1c = _DAT_0089096c;
        if ((fVar1 < _DAT_0089096c) && (fStack_1c = fVar1, fVar1 < _DAT_00890968)) {
          fStack_1c = 0.0;
        }
        fVar7 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 100))(uVar6);
        fVar7 = fVar7 * (float10)fStack_1c + (float10)*(float *)(iVar4 + 0x48);
        if ((float10)_DAT_00890968 <= fVar7) {
          fVar8 = fVar7;
          if (fVar7 <= (float10)_DAT_00890968) goto LAB_0068e8fb;
        }
        else {
          fVar8 = (float10)_DAT_00890968;
LAB_0068e8fb:
          fVar7 = (float10)_DAT_00890968;
        }
        *(float *)(iVar4 + 0x78) = (float)fVar7;
        if ((float10)_DAT_00890968 < fVar8) {
          iStack_20 = iStack_20 + 1;
        }
      }
      piStack_24 = piStack_24 + 1;
      uVar6 = uVar6 + 1;
      uVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    } while (uVar6 < uVar5);
  }
  *(int *)(param_1 + 0xfc) = iStack_20;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0x42340000;
  *(undefined4 *)(param_1 + 300) = 0x42340000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_00653ca0(0);
  FUN_00653ca0(0);
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}

