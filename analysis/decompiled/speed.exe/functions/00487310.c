/* speed.exe 00487310 FUN_00487310; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00487310(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_0089096c / param_2;
  *(float *)(param_1 + 0xd0) = param_2;
  *(float *)(param_1 + 0xd4) = fVar1;
  return;
}

