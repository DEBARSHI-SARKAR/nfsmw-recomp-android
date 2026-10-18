/* speed.exe 0082def0 FUN_0082def0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0082df90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082def0(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = (int)param_1;
  uVar5 = (int)*(short *)((int)param_1 + 0x58) & 0xff80U | *(byte *)((int)param_1 + 0x5c) & 0x7f;
  uVar5 = uVar5 ^ ((uint)(_DAT_00890968 <=
                         (float)(int)*(short *)((int)param_1 + 0x5a) -
                         (float)(int)*(short *)((int)param_1 + 0x58)) << 7 ^ uVar5) & 0x80;
  iVar3 = DAT_009c2980 - *(int *)((int)param_1 + 0x50);
  fVar2 = (float)iVar3;
  if (iVar3 < 0) {
    fVar2 = fVar2 + _DAT_00891214;
  }
  fVar2 = fVar2 / (float)(*(uint *)((int)param_1 + 0x54) & 0xffff);
  if (_DAT_0089096c <= fVar2) {
    (**(code **)(**(int **)((int)param_1 + 300) + 0x50))((int)*(short *)((int)param_1 + 0x5a));
    *(undefined2 *)((int)param_1 + 0x58) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x5a) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x5c) = 0xffff;
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    return;
  }
  param_1 = fVar2;
  if ((char)uVar5 < '\0') {
    param_1 = _DAT_0089096c - fVar2;
  }
  uVar5 = uVar5 & 0x7f;
  if (uVar5 == 1) {
    fVar2 = _DAT_0089096c - param_1;
  }
  else if (uVar5 == 2) {
    fVar2 = _DAT_0089096c - param_1 * param_1;
  }
  else {
    fVar2 = _DAT_00890da8;
    if (uVar5 == 3) {
      fVar2 = (_DAT_0089096c / param_1) * _DAT_008c613c;
    }
  }
  if ((_DAT_00890968 <= fVar2) && (fVar2 < _DAT_0089096c != (fVar2 == _DAT_0089096c))) {
    iVar1 = **(int **)(iVar1 + 300);
    uVar4 = FUN_007c4b80();
    (**(code **)(iVar1 + 0x50))(uVar4);
    return;
  }
  return;
}

