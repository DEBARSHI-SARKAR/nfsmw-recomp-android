/* speed.exe 00468bc0 FUN_00468bc0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00468bc0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x94);
  }
  return 0;
}

