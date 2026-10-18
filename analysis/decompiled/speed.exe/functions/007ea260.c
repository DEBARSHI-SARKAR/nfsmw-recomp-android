/* speed.exe 007ea260 FUN_007ea260; analysis pseudocode, not buildable source.
 * calls 007ea1f0 FUN_007ea1f0
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007ea260(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_007e9430("Created Clut Element",*(int *)(param_1 + 0x84) + 0x10,0x10,0x10,
                                param_2,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",
                                0x28c);
  FUN_007ea1f0(param_1);
  *puVar1 = *puVar1 & 0xfffffbff | 0x400;
  return puVar1;
}

