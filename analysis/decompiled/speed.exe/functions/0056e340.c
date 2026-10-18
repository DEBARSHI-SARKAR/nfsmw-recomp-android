/* speed.exe 0056e340 FUN_0056e340; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0056e340(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xc0;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    iVar1 = param_1 + 0x84;
  }
  return iVar1;
}

