/* speed.exe 00607810 FUN_00607810; analysis pseudocode, not buildable source.
 * calls 006077d0 FUN_006077d0
 */

int FUN_00607810(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  switch(*param_2) {
  case 1:
    return *(int *)(param_1 + 0x10) +
           ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U & param_2[1]) * 0x14;
  case 2:
    return *(int *)(param_1 + 0x10) +
           ((uint)param_2[1] % ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U | 1)) * 0x14;
  case 3:
    iVar1 = FUN_006077d0(param_2[1]);
    return iVar1;
  case 4:
    return *(int *)(param_1 + 0x10) +
           ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U & *(uint *)(param_2[1] + 8)) * 0x14;
  default:
    return *(int *)(param_1 + 0x10) +
           ((uint)param_2[1] % ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U | 1)) * 0x14;
  }
}

