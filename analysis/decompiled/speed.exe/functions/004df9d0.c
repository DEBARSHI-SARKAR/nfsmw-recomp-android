/* speed.exe 004df9d0 FUN_004df9d0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_004df9d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  if (((iVar1 != 3) && (iVar1 != 4)) && (iVar1 != 5)) {
    return 0;
  }
  return 1;
}

