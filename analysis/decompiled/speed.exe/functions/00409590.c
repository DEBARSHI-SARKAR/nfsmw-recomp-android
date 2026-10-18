/* speed.exe 00409590 FUN_00409590; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00409590(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float10 fVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined2 extraout_var;
  float unaff_ESI;
  bool bVar7;
  float10 fVar8;
  float fStack_c;
  float fStack_8;
  
  piVar1 = (int *)(param_1 + 0x4c);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 100))();
  if (*(char *)(uVar4 + 0x2c) != '\0') {
    iVar5 = (**(code **)(*piVar1 + 100))();
    if (((*(int *)(iVar5 + 0x1c) == 0) || (param_2 == 0)) ||
       (iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4), bVar7 = iVar5 == *(int *)(param_2 + 4),
       uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),bVar7), !bVar7)) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x758) + 0x14))();
      if ((char)uVar4 != '\0') {
        piVar6 = (int *)(**(code **)(*piVar1 + 4))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x54))();
        fVar8 = (float10)(**(code **)(*piVar6 + 0x30))();
        fVar3 = (float10)_DAT_00890dd4;
        uVar4 = CONCAT22(extraout_var,
                         (ushort)(fVar8 < fVar3) << 8 | (ushort)(NAN(fVar8) || NAN(fVar3)) << 10 |
                         (ushort)(fVar8 == fVar3) << 0xe);
        if (fVar8 >= fVar3) {
          iVar5 = (**(code **)(*piVar1 + 100))();
          fVar2 = *(float *)(iVar5 + 0x3c);
          uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),
                           (ushort)(fVar2 < _DAT_00890dd0) << 8 |
                           (ushort)(NAN(fVar2) || NAN(_DAT_00890dd0)) << 10 |
                           (ushort)(fVar2 == _DAT_00890dd0) << 0xe);
          if (fVar2 < _DAT_00890dd0 || (fVar2 == _DAT_00890dd0) != 0) {
            piVar6 = (int *)(**(code **)(*piVar1 + 4))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x54))();
            (**(code **)(*piVar6 + 0x34))(&fStack_c);
            iVar5 = (**(code **)(*piVar1 + 100))();
            if (unaff_ESI * *(float *)(iVar5 + 0x30) +
                fStack_c * *(float *)(iVar5 + 0x34) + fStack_8 * *(float *)(iVar5 + 0x38) <
                _DAT_00890dcc) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}

