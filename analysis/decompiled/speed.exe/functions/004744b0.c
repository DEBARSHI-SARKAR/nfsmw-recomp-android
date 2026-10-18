/* speed.exe 004744b0 FUN_004744b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004744b0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = DAT_0092ce9c;
  piVar8 = DAT_0092ce9c;
  if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
    do {
      piVar1 = (int *)*piVar8;
      if ((piVar1 != (int *)0x0) &&
         (cVar5 = (**(code **)(*piVar1 + 0x88))(), piVar7 = DAT_0092ce9c, cVar5 != '\0')) {
        pfVar6 = (float *)(**(code **)(*piVar1 + 0xc))();
        fVar3 = pfVar6[2] - *(float *)(param_1 + 0x20);
        fVar2 = -*pfVar6 - *(float *)(param_1 + 0x24);
        fVar4 = pfVar6[1] - *(float *)(param_1 + 0x28);
        fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
        piVar7 = DAT_0092ce9c;
        if (fVar2 < _DAT_00894d58) {
          return CONCAT31((int3)(CONCAT22((short)((uint)pfVar6 >> 0x10),
                                          (ushort)(fVar2 < _DAT_00894d58) << 8 |
                                          (ushort)(NAN(fVar2) || NAN(_DAT_00894d58)) << 10 |
                                          (ushort)(fVar2 == _DAT_00894d58) << 0xe) >> 8),1);
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar7 + DAT_0092cea4);
  }
  return (uint)piVar7 & 0xffffff00;
}

