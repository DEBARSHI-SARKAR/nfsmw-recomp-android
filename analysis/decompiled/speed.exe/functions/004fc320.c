/* speed.exe 004fc320 FUN_004fc320; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dc10 FUN_0045dc10
 */

void FUN_004fc320(float *param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = FUN_007c4b80();
  FUN_0045dc10(&local_8,&local_c,iVar1 / 0x168);
  iVar1 = FUN_007c4b80();
  FUN_0045dc10(&param_2,&local_4,iVar1 / 0x168);
  *param_1 = param_2 * local_c * param_4;
  param_1[1] = param_2 * local_8 * param_4;
  param_1[2] = local_4 * param_4;
  return;
}

