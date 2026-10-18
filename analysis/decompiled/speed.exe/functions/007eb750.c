/* speed.exe 007eb750 FUN_007eb750; analysis pseudocode, not buildable source.
 * calls 007eb6e0 FUN_007eb6e0
 * calls 007e9430 FUN_007e9430
 */

uint * __thiscall FUN_007eb750(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_007e9430("cloned comment element",*(int *)(param_1 + 0xc) + 0x10,0x10,0x10,
                                param_2,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpclone.cpp",
                                0x120);
  FUN_007eb6e0(puVar1);
  *puVar1 = *puVar1 & 0xfffffbff | 0x400;
  puVar1[1] = 0;
  return puVar1;
}

