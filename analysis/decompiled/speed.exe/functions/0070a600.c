/* speed.exe 0070a600 FUN_0070a600; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0070a600(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int unaff_ESI;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fVar4 = _DAT_008b21e4;
  if ((DAT_0092d884 != 0) && (piVar7 = (int *)*DAT_0092d87c, piVar7 != (int *)0x0)) {
    (**(code **)(*piVar7 + 4))();
    piVar5 = (int *)FUN_005d59f0(&LAB_00403700);
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar5 + 0x48))();
      fVar1 = *(float *)(iVar6 + 0xbc);
      fVar2 = *(float *)(iVar6 + 0xc0);
      uVar3 = *(undefined4 *)(iVar6 + 0xc4);
      fStack_c = fVar1;
      fStack_8 = fVar2;
      uStack_4 = uVar3;
      piVar7 = (int *)(**(code **)(*piVar7 + 4))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x54))();
      (**(code **)(*piVar7 + 0x34))(&fStack_18);
      *(float *)(unaff_ESI + 0x84) = fVar1;
      *(float *)(unaff_ESI + 0x78) = fVar4;
      *(float *)(unaff_ESI + 0x88) = fVar2;
      *(undefined4 *)(unaff_ESI + 0x8c) = uVar3;
      *(float *)(unaff_ESI + 0x7c) = fStack_18;
      *(float *)(unaff_ESI + 0x80) = fStack_14;
      return (float10)fStack_10 * (float10)fVar4 +
             (float10)fStack_c * (float10)fStack_18 + (float10)fStack_8 * (float10)fStack_14;
    }
  }
  return (float10)fVar4;
}

