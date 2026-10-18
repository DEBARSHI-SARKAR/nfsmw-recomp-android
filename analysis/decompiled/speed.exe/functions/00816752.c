/* speed.exe 00816752 FUN_00816752; analysis pseudocode, not buildable source.
 * calls 007c9470 _strncmp
 * calls 0085eb3c __SEH_prolog
 * calls 0085eb77 __SEH_epilog
 */

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x008167af) */
/* WARNING: Removing unreachable block (ram,0x0081676e) */

undefined4 FUN_00816752(void)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x81675e;
  local_20 = 0;
  iVar1 = cpuid_basic_info(0);
  local_30 = *(undefined4 *)(iVar1 + 4);
  local_2c = *(undefined4 *)(iVar1 + 8);
  local_28 = *(undefined4 *)(iVar1 + 0xc);
  local_8 = 0xffffffff;
  iVar1 = _strncmp((char *)&local_30,"GenuineIntel",0xc);
  if (((iVar1 == 0) || (iVar1 = _strncmp((char *)&local_30,"AuthenticAMD",0xc), iVar1 == 0)) &&
     (iVar1 = cpuid_Version_info(1), (*(uint *)(iVar1 + 8) & 0x4000000) != 0)) {
    local_20 = 1;
  }
  return local_20;
}

