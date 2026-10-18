/* speed.exe 007ea190 FUN_007ea190; analysis pseudocode, not buildable source.
 * calls 007ea130 FUN_007ea130
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007ea190(int param_1,undefined4 param_2)

{
  uint *extraout_ECX;
  
  FUN_007e9430("Created HotSpots Element",
               *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c) * 4 + 0x20,0x10,0x20,param_2,
               "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x265);
  FUN_007ea130(param_1);
  *extraout_ECX = *extraout_ECX & 0xfffffbff | 0x400;
  return extraout_ECX;
}

