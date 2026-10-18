/* speed.exe 004b00c0 FUN_004b00c0; analysis pseudocode, not buildable source.
 * calls 004b0040 FUN_004b0040
 */

undefined4 __thiscall
FUN_004b00c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 0xffffffff;
  }
  FUN_004b0040(0,param_2,param_3,param_4);
  *(undefined1 *)(extraout_ECX + 0x4b + *(int *)(extraout_ECX + 0x6c)) = 1;
  return *(undefined4 *)(extraout_ECX + 0x6c);
}

