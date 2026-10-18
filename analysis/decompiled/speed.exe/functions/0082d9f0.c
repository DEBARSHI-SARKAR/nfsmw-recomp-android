/* speed.exe 0082d9f0 FUN_0082d9f0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Removing unreachable block (ram,0x0082da90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082d9f0(float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = (int)param_1;
  uVar5 = (int)*(short *)((int)param_1 + 0x28) & 0xff80U | *(byte *)((int)param_1 + 0x2c) & 0x7f;
  uVar5 = uVar5 ^ ((uint)(_DAT_00890968 <=
                         (float)(int)*(short *)((int)param_1 + 0x2a) -
                         (float)(int)*(short *)((int)param_1 + 0x28)) << 7 ^ uVar5) & 0x80;
  iVar3 = DAT_009c2980 - *(int *)((int)param_1 + 0x20);
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar1 = fVar1 / (float)(*(uint *)((int)param_1 + 0x24) & 0xffff);
  if (_DAT_0089096c <= fVar1) {
    (**(code **)(**(int **)((int)param_1 + 300) + 0x40))
              (*(uint *)((int)param_1 + 8) >> 0x1c & 7,(int)*(short *)((int)param_1 + 0x2a));
    *(undefined2 *)((int)param_1 + 0x28) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x2a) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x2c) = 0xffff;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    return;
  }
  param_1 = fVar1;
  if ((char)uVar5 < '\0') {
    param_1 = _DAT_0089096c - fVar1;
  }
  uVar5 = uVar5 & 0x7f;
  if (uVar5 == 1) {
    fVar1 = _DAT_0089096c - param_1;
  }
  else if (uVar5 == 2) {
    fVar1 = _DAT_0089096c - param_1 * param_1;
  }
  else {
    fVar1 = _DAT_00890da8;
    if (uVar5 == 3) {
      fVar1 = (_DAT_0089096c / param_1) * _DAT_008c613c;
    }
  }
  if ((_DAT_00890968 <= fVar1) && (fVar1 < _DAT_0089096c != (fVar1 == _DAT_0089096c))) {
    iVar3 = **(int **)(iVar2 + 300);
    uVar4 = FUN_007c4b80();
    (**(code **)(iVar3 + 0x40))(*(uint *)(iVar2 + 8) >> 0x1c & 7,uVar4);
    return;
  }
  return;
}

