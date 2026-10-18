/* speed.exe 005ddf50 FUN_005ddf50; analysis pseudocode, not buildable source.
 * calls 005dde40 FUN_005dde40
 * calls 00654af0 FUN_00654af0
 */

void __thiscall FUN_005ddf50(float *param_1,float param_2)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 1) != '\0') &&
     (fVar1 = param_1[2], param_1[2] = param_2 + fVar1, *param_1 <= param_2 + fVar1)) {
    FUN_005dde40(param_1 + 4);
    FUN_00654af0();
    param_1[2] = param_1[2] - *param_1;
  }
  return;
}

