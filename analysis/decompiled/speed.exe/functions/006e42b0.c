/* speed.exe 006e42b0 FUN_006e42b0; analysis pseudocode, not buildable source.
 * calls 006e3ac0 FUN_006e3ac0
 * calls 004662e0 FUN_004662e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e42b0(void)

{
  DAT_00982adc = FUN_004662e0(4,0x100,"eAnimTextureSlotPool",0);
  *(uint *)(DAT_00982adc + 0x14) = *(uint *)(DAT_00982adc + 0x14) & 0xfffffffd;
  _DAT_00982c90 = FUN_004662e0(0x44,0x1000,"eMeshRender",0);
  *(uint *)(_DAT_00982c90 + 0x14) = *(uint *)(_DAT_00982c90 + 0x14) & 0xfffffffd;
  FUN_006e3ac0(0x1000);
  return;
}

