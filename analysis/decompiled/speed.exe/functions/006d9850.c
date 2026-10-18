/* speed.exe 006d9850 FUN_006d9850; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x006d987b) */

uint FUN_006d9850(void)

{
  int iVar1;
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
  iVar1 = cpuid_Version_info(1);
  uVar3 = *(uint *)(iVar1 + 4) & 0xf;
  uVar2 = uVar3;
  if (0xe < uVar3) {
switchD_006d989c_caseD_5:
    DAT_00982910 = 5;
    return uVar2;
  }
  uVar2 = (uint)(&switchD_006d989c::switchdataD_006d98f0)[uVar3];
  switch(uVar3) {
  case 0:
    DAT_00982910 = 0;
    return uVar2;
  default:
    DAT_00982910 = 2;
    return uVar2;
  case 5:
  case 0xc:
  case 0xd:
    goto switchD_006d989c_caseD_5;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    DAT_00982910 = 3;
    return uVar2;
  }
}

