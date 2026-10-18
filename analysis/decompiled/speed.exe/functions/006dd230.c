/* speed.exe 006dd230 FUN_006dd230; analysis pseudocode, not buildable source.
 * calls 006caf90 FUN_006caf90
 * calls 006d9900 FUN_006d9900
 * calls 006d9850 FUN_006d9850
 */

/* WARNING: Removing unreachable block (ram,0x006dd25b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006dd230(void)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0x00000000,0x10) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_10 < 0) * 0x80
          | (uint)(&stack0x00000000 == &DAT_00000010) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)&local_10 & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0x00000000 < &DAT_00000010) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar3 = uVar4 ^ 0x200000;
  if (((uint)((uVar3 & 0x4000) != 0) * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 |
       (uint)((uVar3 & 0x200) != 0) * 0x200 | (uint)((uVar3 & 0x100) != 0) * 0x100 |
       (uint)((uVar3 & 0x80) != 0) * 0x80 | (uint)((uVar3 & 0x40) != 0) * 0x40 |
       (uint)((uVar3 & 0x10) != 0) * 0x10 | (uint)((uVar3 & 4) != 0) * 4 | (uint)((uVar3 & 1) != 0)
       | (uint)((uVar3 & 0x200000) != 0) * 0x200000 | (uint)((uVar3 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
    local_4 = *puVar1;
    local_10 = puVar1[1];
    local_8 = puVar1[2];
    local_c = puVar1[3];
    if (local_10 == 0x68747541) {
      FUN_006caf90(0x32);
      FUN_006d9900();
    }
    else if (local_10 == 0x69727943) {
      DAT_00982910 = 1;
      DAT_00982918 = 0;
      DAT_0098291c = 0;
    }
    else if (local_10 == 0x756e6547) {
      FUN_006caf90(0x32);
      FUN_006d9850();
    }
    else {
      DAT_00982910 = 5;
      DAT_00982918 = 0;
      DAT_0098291c = 0;
    }
    fVar2 = _DAT_00890968;
    switch(DAT_00982910) {
    case 0:
      goto LAB_006dd2ef;
    case 2:
      if ((float10)_DAT_008affe8 <= (float10)CONCAT44(DAT_0098291c,DAT_00982918)) {
        return ((float10)CONCAT44(DAT_0098291c,DAT_00982918) - (float10)_DAT_008affe8) *
               (float10)_DAT_008affe4;
      }
      break;
    case 3:
    case 4:
      if ((float10)_DAT_008affe8 <= (float10)CONCAT44(DAT_0098291c,DAT_00982918)) {
        return ((float10)CONCAT44(DAT_0098291c,DAT_00982918) - (float10)_DAT_008affe8) *
               (float10)_DAT_008affe0;
      }
      break;
    case 5:
      fVar2 = _DAT_0089096c;
    default:
      return (float10)fVar2;
    }
    return (float10)_DAT_00890968;
  }
LAB_006dd2ef:
  return (float10)_DAT_00890968;
}

