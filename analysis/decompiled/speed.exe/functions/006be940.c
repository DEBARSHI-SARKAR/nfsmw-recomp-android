/* speed.exe 006be940 FUN_006be940; analysis pseudocode, not buildable source.
 * calls 007e7d64 D3DXVec4Transform
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006be940(int *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  float local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_3;
  iVar1 = *param_1;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = 0x3f800000;
  D3DXVec4Transform();
  local_30[0] = _DAT_0089096c / local_30[0];
  *param_2 = ((float)local_30 * local_30[0] + _DAT_0089096c) * (float)DAT_00982be4 * _DAT_008933d4;
  param_2[1] = ((float)&local_20 * local_30[0] - _DAT_0089096c) * (float)DAT_00982be8 *
               _DAT_00891068;
  param_2[2] = local_30[0] * (float)(iVar1 + 0x80);
  return;
}

