/* speed.exe 0070a840 FUN_0070a840; analysis pseudocode, not buildable source.
 * calls 0070a600 FUN_0070a600
 * calls 00708390 FUN_00708390
 * calls 004100a0 FUN_004100a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070a840(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = DAT_00993cc8;
  if (*(short *)(DAT_00993cc8 + 0x148) < 1) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffee;
    *(int *)(param_1 + 0x30) = DAT_00925ae8;
    return;
  }
  fVar4 = (float10)FUN_0070a600();
  if (((float10)_DAT_0089107c <= fVar4) && ((*(byte *)(param_1 + 0x4c) & 0x10) == 0)) {
    *(int *)(param_1 + 0x30) = DAT_00925ae8;
  }
  if ((DAT_00993f40 & 1) == 0) {
    DAT_00993f40 = DAT_00993f40 | 1;
    _DAT_00993f34 = DAT_008a2fb4;
    _DAT_00993f38 = DAT_008a2fb8;
    _DAT_00993f3c = DAT_008a2fbc;
  }
  if ((DAT_00993f40 & 2) == 0) {
    DAT_00993f40 = DAT_00993f40 | 2;
    _DAT_00993f28 = DAT_008a2fb4;
    _DAT_00993f2c = DAT_008a2fb8;
    _DAT_00993f30 = DAT_008a2fbc;
  }
  if ((fVar4 < (float10)_DAT_0089107c) && ((*(byte *)(param_1 + 0x4c) & 0x11) == 0)) {
    *(float *)(param_1 + 0x40) = (float)fVar4;
    _DAT_00993f34 = *(float *)(param_1 + 0x84);
    _DAT_00993f38 = *(float *)(param_1 + 0x88);
    _DAT_00993f3c = *(float *)(param_1 + 0x8c);
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    _DAT_00993f28 = *(float *)(iVar2 + 0x10c);
    _DAT_00993f2c = *(float *)(iVar2 + 0x110);
    _DAT_00993f30 = *(float *)(iVar2 + 0x114);
    DAT_00993f24 = '\0';
  }
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 & 1) != 0) {
    if (((float10)_DAT_008b21e8 < fVar4) && ((uVar1 & 0x10) == 0)) {
      if (fVar4 <= (float10)*(float *)(param_1 + 0x40)) {
        *(float *)(param_1 + 0x40) = (float)fVar4;
        DAT_00993f24 = DAT_00993f24 + '\x01';
      }
      else {
        *(uint *)(param_1 + 0x4c) = uVar1 & 0xfffffffe;
        *(int *)(param_1 + 0x30) = DAT_00925ae8;
        DAT_00993f24 = '\0';
        _DAT_00993f28 = DAT_008a2fb4;
        _DAT_00993f2c = DAT_008a2fb8;
        _DAT_00993f30 = DAT_008a2fbc;
      }
    }
    if (((fVar4 < (float10)_DAT_008b21e8 != (fVar4 == (float10)_DAT_008b21e8)) &&
        (*(char *)(*(int *)(iVar2 + 0x184) + 0xb1) <= DAT_00993f24)) &&
       ((*(byte *)(param_1 + 0x4c) & 0x10) == 0)) {
      local_c = *(undefined4 *)(iVar2 + 0x10c);
      local_8 = *(undefined4 *)(iVar2 + 0x110);
      local_4 = *(undefined4 *)(iVar2 + 0x114);
      fVar4 = (float10)FUN_004100a0(&DAT_00993f28,&local_c);
      if (fVar4 <= (float10)*(float *)(*(int *)(iVar2 + 0x184) + 0x4c)) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x10;
        *(int *)(param_1 + 0x30) = DAT_00925ae8;
      }
      else {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
        *(int *)(param_1 + 0x30) = DAT_00925ae8;
        DAT_00993f24 = '\0';
        _DAT_00993f28 = DAT_008a2fb4;
        _DAT_00993f2c = DAT_008a2fb8;
        _DAT_00993f30 = DAT_008a2fbc;
      }
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x10) != 0) {
      if (_DAT_008b21e8 <
          _DAT_00993f34 * *(float *)(param_1 + 0x78) +
          _DAT_00993f38 * *(float *)(param_1 + 0x7c) + _DAT_00993f3c * *(float *)(param_1 + 0x80)) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffee;
        *(int *)(param_1 + 0x30) = DAT_00925ae8;
        DAT_00993f24 = 0;
        return;
      }
      if ((*(float *)(*(int *)(iVar2 + 0x184) + 0xa4) <
           (float)(DAT_00925ae8 - *(int *)(param_1 + 0x30)) * _DAT_00890984) &&
         (piVar3 = (int *)FUN_00708390(1,1), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xcc))();
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffee;
        *(int *)(param_1 + 0x30) = DAT_00925ae8;
        DAT_00993f24 = 0;
        return;
      }
    }
  }
  return;
}

