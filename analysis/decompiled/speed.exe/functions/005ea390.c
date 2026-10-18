/* speed.exe 005ea390 FUN_005ea390; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005e6180 FUN_005e6180
 * calls 005e61f0 FUN_005e61f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * __thiscall FUN_005ea390(ushort *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  bVar1 = param_2 < _DAT_00890968;
  uVar4 = 0;
  uVar3 = 0;
  iVar5 = 0;
  if (bVar1) {
    param_2 = param_2 * _DAT_00890da8;
  }
  if (_DAT_00890968 < param_2) {
    iVar5 = FUN_005e6180();
    uVar3 = uVar4;
    if (param_2 < (float)iVar5) {
      do {
        uVar3 = uVar4 - 1;
        param_2 = param_2 * _DAT_00890bf8;
        iVar5 = FUN_005e6180();
        uVar4 = uVar3;
      } while (param_2 < (float)iVar5);
    }
    iVar5 = FUN_007c4b80();
    iVar2 = FUN_005e61f0();
    if (iVar2 <= iVar5) {
      do {
        iVar5 = iVar5 / 10;
        uVar3 = uVar3 + 1;
        iVar2 = FUN_005e61f0();
      } while (iVar2 <= iVar5);
    }
  }
  if (bVar1) {
    iVar5 = -iVar5;
  }
  *param_1 = uVar3 & 0x1f | (ushort)(iVar5 << 5);
  return param_1;
}

