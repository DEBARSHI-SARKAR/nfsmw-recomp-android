/* speed.exe 0056e3c0 FUN_0056e3c0; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_0056e3c0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = param_1 + 0xc0;
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      iVar1 = param_1 + 0x84;
    }
    FUN_00460ca0(iVar1,param_2,0x10);
  }
  return;
}

