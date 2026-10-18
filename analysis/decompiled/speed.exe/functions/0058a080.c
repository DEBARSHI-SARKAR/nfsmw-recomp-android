/* speed.exe 0058a080 FUN_0058a080; analysis pseudocode, not buildable source.
 * calls 005769c0 FUN_005769c0
 */

undefined4 FUN_0058a080(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_005769c0(param_2);
  return CONCAT31(*(char *)(&DAT_0091cd14 + iVar1 * 2) >> 7,
                  param_3 <= *(char *)(&DAT_0091cd14 + iVar1 * 2) |
                  (byte)(*(uint *)(extraout_ECX + 0xac) >> 0xe) & 1 |
                  *(byte *)(extraout_ECX + 0x90dc) | DAT_00926124);
}

