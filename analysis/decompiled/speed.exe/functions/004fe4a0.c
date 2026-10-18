/* speed.exe 004fe4a0 FUN_004fe4a0; analysis pseudocode, not buildable source.
 * calls 00465900 FUN_00465900
 */

void FUN_004fe4a0(void)

{
  *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) | 4;
  *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) | 4;
  *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) | 4;
  if (*(int *)(DAT_00916068 + 0x2c) != *(int *)(DAT_00916068 + 0x24)) {
    FUN_00465900();
  }
  if (*(int *)(DAT_00916064 + 0x2c) != *(int *)(DAT_00916064 + 0x24)) {
    FUN_00465900();
  }
  if (*(int *)(DAT_00916060 + 0x2c) != *(int *)(DAT_00916060 + 0x24)) {
    FUN_00465900();
    return;
  }
  return;
}

