/* speed.exe 006777e3 FUN_006777e3; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_006777e3(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = (**(code **)(param_1 + 4))();
  if (iVar1 == 0) {
    (**(code **)(*unaff_EBX + 4))();
    return 0;
  }
  return 1;
}

