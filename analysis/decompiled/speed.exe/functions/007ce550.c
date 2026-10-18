/* speed.exe 007ce550 ___sse2_available_init; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007c9470 _strncmp
 * calls 007ce670 FUN_007ce670
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x007ce5a8) */
/* WARNING: Removing unreachable block (ram,0x007ce595) */
/* Library Function - Single Match
    ___sse2_available_init
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 ___sse2_available_init(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar5;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_18 = DAT_00906980;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  local_28 = local_28 & 0xffffff00;
  uVar5 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x28) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_2c < 0) * 0x80
          | (uint)(&stack0x00000000 == (undefined1 *)0x2c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)&local_2c & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0xfffffffc < (undefined1 *)0x28) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar3 = uVar5 ^ 0x200000;
  if (((uint)((uVar3 & 0x4000) != 0) * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 |
       (uint)((uVar3 & 0x200) != 0) * 0x200 | (uint)((uVar3 & 0x100) != 0) * 0x100 |
       (uint)((uVar3 & 0x80) != 0) * 0x80 | (uint)((uVar3 & 0x40) != 0) * 0x40 |
       (uint)((uVar3 & 0x10) != 0) * 0x10 | (uint)((uVar3 & 4) != 0) * 4 | (uint)((uVar3 & 1) != 0)
       | (uint)((uVar3 & 0x200000) != 0) * 0x200000 | (uint)((uVar3 & 0x40000) != 0) * 0x40000) !=
      uVar5) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
    local_10 = *puVar1;
    local_28 = puVar1[1];
    local_24 = puVar1[2];
    local_20 = puVar1[3];
    puVar2 = (uint *)cpuid_Version_info(1);
    local_c = *puVar2;
    local_8 = puVar2[2];
  }
  DAT_009c5314 = 0;
  DAT_009c5310 = 0;
  if (((local_8 & 0x4000000) != 0) && (iVar4 = FUN_007ce670(), iVar4 != 0)) {
    DAT_009c5314 = 1;
    iVar4 = _strncmp("AuthenticAMD",(char *)&local_28,0xc);
    if (iVar4 == 0) {
      iVar4 = (int)(local_c & 0xf00) >> 8;
      if (iVar4 == 0xf) {
        local_2c = (int)(local_c & 0xff00000) >> 0x14;
      }
      else {
        local_2c = 0;
      }
      local_14 = (uint)(iVar4 + local_2c == 0xf);
    }
    if (local_14 == 0) {
      DAT_009c5310 = 1;
    }
  }
  return 0;
}

