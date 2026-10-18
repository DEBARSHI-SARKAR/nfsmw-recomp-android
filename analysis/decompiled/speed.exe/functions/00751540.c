/* speed.exe 00751540 FUN_00751540; analysis pseudocode, not buildable source.
 * calls 0074d070 FUN_0074d070
 * calls 007397d0 FUN_007397d0
 */

undefined4 __thiscall FUN_00751540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0xc) == -1) {
    return 0;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = FUN_007397d0(0xffffffff,param_2,param_3);
    return uVar1;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    uVar1 = FUN_007397d0(*(undefined4 *)(DAT_009b09c4 + (uint)*(byte *)(param_1 + 7) * 4),param_2,
                         param_3);
    return uVar1;
  }
  uVar1 = FUN_0074d070();
  uVar1 = FUN_007397d0(uVar1,param_2,param_3);
  return uVar1;
}

