/* speed.exe 0050d280 FUN_0050d280; analysis pseudocode, not buildable source.
 * calls 0050af20 FUN_0050af20
 * calls 0050d170 FUN_0050d170
 */

void FUN_0050d280(void)

{
  if (DAT_0091606c == '\0') {
    FUN_0050af20();
    *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) | 1;
    *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) | 1;
    *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) | 1;
    *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) & 0xfffffffb;
    *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) & 0xfffffffb;
    *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) & 0xfffffffb;
    FUN_0050d170();
    DAT_0091606c = '\x01';
  }
  return;
}

