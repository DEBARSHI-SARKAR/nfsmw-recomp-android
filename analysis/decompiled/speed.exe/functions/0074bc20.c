/* speed.exe 0074bc20 FUN_0074bc20; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0073e3e0 FUN_0073e3e0
 * calls 0073e090 FUN_0073e090
 * calls 0073dbe0 FUN_0073dbe0
 * calls 0073e180 FUN_0073e180
 * calls 00454810 FUN_00454810
 * calls 007c4b80 FUN_007c4b80
 * calls 0073e110 FUN_0073e110
 * calls 0073dcb0 FUN_0073dcb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0074bc20(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  
  iVar3 = FUN_007c4b80();
  fVar1 = (float)iVar3;
  if (DAT_009885c8 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d8) = 0xbf800000;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar3 = *(int *)(param_1 + 0x1c8);
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  if (((*(float *)(param_1 + 0x1d8) < fVar1) && (*(int *)(param_1 + 0x1d8) != -0x40800000)) ||
     ((*(int *)(param_1 + 0x1e8) == 0 && (param_4 != 0)))) {
    FUN_0073e3e0();
  }
  fVar2 = _DAT_00890968;
  *(uint *)(param_1 + 0x1e8) = (uint)param_4;
  *(float *)(param_1 + 0x1d8) = fVar1;
  if (*(float *)(*(int *)(param_1 + 0x1c8) + 4) == fVar2) {
    _param_4 = 0.0;
  }
  else {
    fVar5 = (float10)FUN_0073dbe0(fVar1);
    _param_4 = (float)fVar5;
  }
  fVar1 = _DAT_0089096c - _param_4;
  FUN_0073e090(param_1 + 0x10,fVar1,_param_4,&LAB_0073d970);
  FUN_0073e090(param_1 + 0x50,fVar1,_param_4,&LAB_0073d990);
  FUN_0073e110(param_1 + 0x90,fVar1,_param_4,&LAB_0073d980);
  FUN_0073e110((undefined4 *)(param_1 + 0x94),fVar1,_param_4,&LAB_0073d9a0);
  FUN_0073e180(param_1 + 0xa0,fVar1,_param_4,&LAB_0073d9b0);
  FUN_0073e110((undefined4 *)(param_1 + 0x98),fVar1,_param_4,&LAB_0073d9c0);
  FUN_0073e090(param_1 + 0xb0,fVar1,_param_4,&LAB_0073d9d0);
  FUN_0073e110(param_1 + 0x170,fVar1,_param_4,&LAB_0073d9e0);
  if (*(float *)(*(int *)(param_1 + 0x1c0) + 4) == _DAT_00890968) {
    fVar5 = (float10)_DAT_00890968;
  }
  else {
    fVar5 = (float10)FUN_0073dbe0(*(undefined4 *)(param_1 + 0x1d8));
  }
  *(float *)(param_1 + 0x174) = (float)fVar5;
  if (*(float *)(*(int *)(param_1 + 0x1cc) + 4) == _DAT_00890968) {
    fVar5 = (float10)_DAT_00890968;
  }
  else {
    fVar5 = (float10)FUN_0073dbe0(*(undefined4 *)(param_1 + 0x1d8));
  }
  *(float *)(param_1 + 0x174) = (float)(fVar5 + (float10)*(float *)(param_1 + 0x174));
  if (*(float *)(*(int *)(param_1 + 0x1c4) + 4) == _DAT_00890968) {
    local_c = 0.0;
  }
  else {
    fVar5 = (float10)FUN_0073dbe0(*(undefined4 *)(param_1 + 0x1d8));
    local_c = (float)fVar5;
  }
  fVar5 = (float10)FUN_0073dcb0();
  *(float *)(param_1 + 0x17c) = (float)fVar5;
  fVar5 = (float10)FUN_0073dcb0();
  local_10 = 0.0;
  param_3 = 0.0;
  if (_DAT_00890968 < *(float *)(param_1 + 0x17c)) {
    pfVar4 = (float *)FUN_00454810(0xd0b003f4,0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = (float *)FUN_006269b0(4);
    }
    fVar1 = *(float *)(param_1 + 0x17c) * *pfVar4;
    local_10 = _DAT_00890968;
    if ((_DAT_00890968 < fVar1) && (local_10 = fVar1, _DAT_0089096c < fVar1)) {
      local_10 = _DAT_0089096c;
    }
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (_DAT_00890968 < (float)fVar5) {
    pfVar4 = (float *)FUN_00454810(0xd0b003f4,0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = (float *)FUN_006269b0(4);
    }
    fVar1 = (float)fVar5 * *pfVar4;
    param_3 = _DAT_00890968;
    if ((_DAT_00890968 < fVar1) && (param_3 = fVar1, _DAT_00890d3c < fVar1)) {
      param_3 = _DAT_00890d3c;
    }
    *(float *)(param_1 + 0x180) = param_3;
  }
  if (local_10 < param_3) {
    local_10 = param_3;
  }
  if (local_10 < local_c) {
    local_10 = local_c;
  }
  *(float *)(param_1 + 0x178) = local_10;
  if (_DAT_00890968 <= *(float *)(param_1 + 0x1dc)) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x1dc);
  }
  if (_DAT_00890968 <= *(float *)(param_1 + 0x1e0)) {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1e0);
  }
  return;
}

