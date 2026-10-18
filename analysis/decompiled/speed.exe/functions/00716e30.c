/* speed.exe 00716e30 FUN_00716e30; analysis pseudocode, not buildable source.
 * calls 006ff8e0 FUN_006ff8e0
 * calls 00714710 FUN_00714710
 * calls 00711950 FUN_00711950
 */

void __fastcall FUN_00716e30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00711950();
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0x3b) < 0x65) {
      if (((uint)param_1[10] >> 3 & 1) == 0) {
        FUN_00714710(iVar1);
        FUN_006ff8e0(0);
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x48))();
      FUN_00714710(iVar1);
      FUN_006ff8e0(0);
    }
  }
  return;
}

