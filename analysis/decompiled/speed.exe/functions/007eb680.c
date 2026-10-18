/* speed.exe 007eb680 FUN_007eb680; analysis pseudocode, not buildable source.
 * calls 007eb5e0 FUN_007eb5e0
 * calls 007e9430 FUN_007e9430
 */

uint * __thiscall FUN_007eb680(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_007e9430("cloned eagl element",*(int *)(param_1 + 0xc) + 0x10,0x10,0x10,
                                param_2,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpclone.cpp",
                                0xf4);
  FUN_007eb5e0(puVar1);
  *puVar1 = *puVar1 & 0xfffffbff | 0x400;
  puVar1[1] = 0;
  return puVar1;
}

