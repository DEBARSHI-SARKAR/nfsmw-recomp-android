/* speed.exe 007ea0a0 FUN_007ea0a0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007ea0a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_ECX;
  
  FUN_007e9430("Created Cip Element",0x20,0x10,0x20,param_2,
               "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x23c);
  FUN_007e9ef0(param_1);
  *(undefined1 *)extraout_ECX = 0x7a;
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar3 = *(uint *)(param_1 + 100);
  extraout_ECX[6] = *(uint *)(param_1 + 0x6c);
  extraout_ECX[7] = uVar1;
  extraout_ECX[5] = uVar2;
  extraout_ECX[4] = uVar3;
  extraout_ECX[3] = 0;
  if (extraout_ECX + 8 == (uint *)0x0) {
    *extraout_ECX = *extraout_ECX & 0xfffffbff | 0x400;
    extraout_ECX[2] = 0;
    return extraout_ECX;
  }
  extraout_ECX[2] = (int)(extraout_ECX + 8) - (int)extraout_ECX;
  *extraout_ECX = *extraout_ECX & 0xfffffbff | 0x400;
  return extraout_ECX;
}

