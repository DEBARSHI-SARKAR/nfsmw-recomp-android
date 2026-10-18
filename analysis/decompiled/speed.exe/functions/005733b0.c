/* speed.exe 005733b0 FUN_005733b0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514cc0 FUN_00514cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005733b0(int param_1,int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xcc) * _DAT_008933d4;
  if ((*(float *)(param_1 + 0xd4) - fVar1 <= param_3) &&
     (param_3 <= fVar1 + *(float *)(param_1 + 0xd4))) {
    FUN_00514cc0(*(undefined4 *)(param_2 + 0x10));
    return;
  }
  FUN_00514c70(*(undefined4 *)(param_2 + 0x10));
  return;
}

