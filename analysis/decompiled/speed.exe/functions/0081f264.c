/* speed.exe 0081f264 FUN_0081f264; analysis pseudocode, not buildable source.
 * calls 00822ecf FUN_00822ecf
 */

undefined4 FUN_0081f264(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x90 + DAT_009c21f4;
  FUN_00822ecf(param_1,param_2,
               *(float *)(*(int *)(iVar1 + 100) + param_2 * 4) * *(float *)(iVar1 + 0x48));
  return 0;
}

