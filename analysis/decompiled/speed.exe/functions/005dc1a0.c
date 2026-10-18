/* speed.exe 005dc1a0 FUN_005dc1a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dc1a0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(int)*(short *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb8) * _DAT_00896ab8;
  fVar2 = _DAT_00890da8;
  if ((_DAT_00890da8 < fVar1) && (fVar2 = fVar1, _DAT_0089096c < fVar1)) {
    *(undefined4 *)(param_1 + 0x449c) = 0x3f800000;
    return;
  }
  *(float *)(param_1 + 0x449c) = fVar2;
  return;
}

