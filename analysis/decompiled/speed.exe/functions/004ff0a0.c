/* speed.exe 004ff0a0 FUN_004ff0a0; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 */

void FUN_004ff0a0(void)

{
  DAT_00916060 = FUN_004662e0(0x70,0x400,"ParticleSlotPool",0);
  *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916060 + 0x14) = *(uint *)(DAT_00916060 + 0x14) & 0xfffffffd;
  DAT_00916064 = FUN_004662e0(0x90,500,"EmitterSlotPool",0);
  *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916064 + 0x14) = *(uint *)(DAT_00916064 + 0x14) & 0xfffffffd;
  DAT_00916068 = FUN_004662e0(0x80,200,"EmitterGroupSlotPool",0);
  *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) & 0xfffffffe;
  *(uint *)(DAT_00916068 + 0x14) = *(uint *)(DAT_00916068 + 0x14) & 0xfffffffd;
  return;
}

