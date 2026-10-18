/* speed.exe 00752fe0 FUN_00752fe0; analysis pseudocode, not buildable source.
 * calls 00752e90 FUN_00752e90
 * calls 00752b60 FUN_00752b60
 * calls 00501800 FUN_00501800
 */

undefined4 FUN_00752fe0(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined1 local_c80 [3200];
  
  if ((*(int *)(param_1 + 0x18) == 2) &&
     (*(int *)(*(int *)(param_1 + 8) * 0xd0 + 0x94 + DAT_009b09d8) != 2)) {
    uVar2 = FUN_00752b60(local_c80,800);
    FUN_00501800(local_c80,uVar2);
  }
  psVar1 = (short *)(*(int *)(param_1 + 0x1c) + 0x14);
  *psVar1 = *psVar1 + -1;
  FUN_00752e90(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}

