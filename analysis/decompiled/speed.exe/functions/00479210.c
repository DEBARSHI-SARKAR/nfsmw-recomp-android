/* speed.exe 00479210 FUN_00479210; analysis pseudocode, not buildable source.
 */

void FUN_00479210(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  *param_2 = -param_1[1];
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  return;
}

