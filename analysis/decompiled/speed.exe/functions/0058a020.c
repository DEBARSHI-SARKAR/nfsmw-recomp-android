/* speed.exe 0058a020 FUN_0058a020; analysis pseudocode, not buildable source.
 * calls 005768a0 FUN_005768a0
 */

byte FUN_0058a020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char extraout_CL;
  
  iVar1 = *(int *)(DAT_0091cf90 + 0x10);
  iVar2 = FUN_005768a0(param_2,param_3);
  return extraout_CL <= *(char *)(&DAT_0091cd14 + iVar2 * 2) |
         (byte)(*(uint *)(iVar1 + 0xac) >> 0xe) & 1 | extraout_CL == '\0' |
         *(byte *)(iVar1 + 0x90dc) | DAT_00926124;
}

