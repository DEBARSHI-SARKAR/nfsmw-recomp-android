/* speed.exe 00733200 FUN_00733200; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00733200(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1144);
  if ((((iVar1 != 4) && (iVar1 != 6)) && (iVar1 != 0)) && (iVar1 != 5)) {
    return 1;
  }
  return 0;
}

