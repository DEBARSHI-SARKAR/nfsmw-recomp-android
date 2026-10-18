/* speed.exe 007eb3d0 FUN_007eb3d0; analysis pseudocode, not buildable source.
 * calls 007e9430 FUN_007e9430
 * calls 007eb350 FUN_007eb350
 */

uint * __thiscall FUN_007eb3d0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_007e9430("cloned clut element",*(int *)(param_1 + 0xc) + 0x20,0x10,0x20,
                                param_2,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpclone.cpp",
                                0x68);
  FUN_007eb350(puVar1);
  *puVar1 = *puVar1 & 0xfffffbff | 0x400;
  puVar1[1] = 0;
  return puVar1;
}

