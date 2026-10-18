/* speed.exe 006eccd0 FUN_006eccd0; analysis pseudocode, not buildable source.
 * calls 006e89a0 FUN_006e89a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_006eccd0(float *param_1,float param_2,float param_3,float param_4,float param_5,uint param_6)

{
  float fVar1;
  undefined4 extraout_ECX;
  
  DAT_00988ed0 = DAT_00988ed0 + 1;
  fVar1 = _DAT_0089096c;
  if (param_3 < _DAT_0089096c) {
    fVar1 = param_3;
  }
  *param_1 = fVar1;
  param_1[3] = param_2;
  param_1[2] = -param_5;
  param_1[1] = param_4;
  param_1[6] = (float)(param_6 & 0xf);
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = DAT_00901ae0;
  DAT_00901ae0 = (float)((int)DAT_00901ae0 + 1);
  param_1[9] = 0.0;
  FUN_006e89a0();
  return extraout_ECX;
}

