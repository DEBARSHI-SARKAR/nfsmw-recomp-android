/* speed.exe 00744c70 FUN_00744c70; analysis pseudocode, not buildable source.
 * calls 00468bc0 FUN_00468bc0
 * calls 004aab60 FUN_004aab60
 * calls 00410d40 FUN_00410d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00744c70(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  uint in_EAX;
  int iVar4;
  undefined2 extraout_var;
  int iVar5;
  float10 fVar6;
  
  if (param_2 == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0x28c);
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      (ushort)(fVar1 < _DAT_00890968) << 8 |
                      (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                      (ushort)(fVar1 == _DAT_00890968) << 0xe);
    if (fVar1 >= _DAT_00890968 && (fVar1 == _DAT_00890968) == 0) {
      iVar4 = FUN_00410d40();
      in_EAX = 0;
      if (iVar4 != 0) {
        fVar6 = (float10)FUN_004aab60(*(int *)(param_1 + 0x34) + 0x30);
        fVar3 = (float10)_DAT_008b2f38;
        in_EAX = CONCAT22(extraout_var,
                          (ushort)(fVar6 < fVar3) << 8 | (ushort)(NAN(fVar6) || NAN(fVar3)) << 10 |
                          (ushort)(fVar6 == fVar3) << 0xe);
        if (fVar6 < fVar3) {
          if (((float10)_DAT_00890bf8 <= fVar6) &&
             (iVar4 = *(int *)(param_1 + 0x30), iVar5 = FUN_00468bc0(), iVar5 != iVar4)) {
            return (uint)(*(int *)(iVar2 + 0x238) == 0);
          }
          return (uint)(*(int *)(iVar2 + 0x234) == 0);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

