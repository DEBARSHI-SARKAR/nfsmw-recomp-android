/* speed.exe 006d9900 FUN_006d9900; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x006d992b) */

uint FUN_006d9900(void)

{
  uint *puVar1;
  uint uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar3;
  undefined1 local_c [12];
  
  uVar3 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0x00000000,0xc) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_c < 0) * 0x80 |
          (uint)(&stack0x00000000 == (undefined1 *)0xc) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)local_c & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0x00000000 < (undefined1 *)0xc) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar2 = uVar3 ^ 0x200000;
  if (((uint)((uVar2 & 0x4000) != 0) * 0x4000 | (uint)((uVar2 & 0x800) != 0) * 0x800 |
       (uint)((uVar2 & 0x200) != 0) * 0x200 | (uint)((uVar2 & 0x100) != 0) * 0x100 |
       (uint)((uVar2 & 0x80) != 0) * 0x80 | (uint)((uVar2 & 0x40) != 0) * 0x40 |
       (uint)((uVar2 & 0x10) != 0) * 0x10 | (uint)((uVar2 & 4) != 0) * 4 | (uint)((uVar2 & 1) != 0)
       | (uint)((uVar2 & 0x200000) != 0) * 0x200000 | (uint)((uVar2 & 0x40000) != 0) * 0x40000) ==
      uVar3) {
    return 0;
  }
  puVar1 = (uint *)cpuid_Version_info(1);
  uVar2 = *puVar1 >> 8 & 0xf;
  if (3 < uVar2) {
    if (uVar2 < 6) {
      DAT_00982910 = 0;
      return uVar2;
    }
    if (uVar2 == 6) {
      DAT_00982910 = 4;
      return 6;
    }
  }
  DAT_00982910 = 5;
  return uVar2;
}

