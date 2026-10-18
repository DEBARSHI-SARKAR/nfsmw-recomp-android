/* speed.exe 00669fb0 FUN_00669fb0; analysis pseudocode, not buildable source.
 * calls 00789190 FUN_00789190
 * calls 00768200 FUN_00768200
 */

uint __fastcall FUN_00669fb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined2 extraout_var;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x60))();
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x4c))();
  uVar3 = FUN_00789190(iVar1,1);
  if ((*(byte *)(iVar2 + 0x30) & 1) != 0) {
    piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
    fVar5 = (float10)FUN_00768200(iVar1);
    fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
    fVar6 = fVar6 + (float10)*(float *)(iVar1 + 4);
    fVar5 = (float10)(float)fVar5;
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                     (ushort)(fVar6 == fVar5) << 0xe);
    if (fVar6 >= fVar5) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

