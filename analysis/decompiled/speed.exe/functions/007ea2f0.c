/* speed.exe 007ea2f0 FUN_007ea2f0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007ea2f0(int param_1,undefined4 param_2)

{
  uint *extraout_ECX;
  
  FUN_007e9430("Created Comment Element",*(int *)(param_1 + 0x90) + 0x11,0x10,0x10,param_2,
               "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x2af);
  FUN_007e9ef0(param_1);
  *(undefined1 *)extraout_ECX = 0x6f;
  if (extraout_ECX + 4 == (uint *)0x0) {
    extraout_ECX[2] = 0;
    extraout_ECX[3] = 0;
    *extraout_ECX = *extraout_ECX & 0xfffffbff | 0x400;
    return extraout_ECX;
  }
  extraout_ECX[3] = *(int *)(param_1 + 0x90) + 1;
  *extraout_ECX = *extraout_ECX & 0xfffffbff | 0x400;
  extraout_ECX[2] = (int)(extraout_ECX + 4) - (int)extraout_ECX;
  return extraout_ECX;
}

