/* speed.exe 00863230 FUN_00863230; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084b1e0 FUN_0084b1e0
 */

int __fastcall FUN_00863230(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *unaff_EDI;
  
  iVar1 = FUN_0084b1e0(*unaff_EDI,param_1);
  if (0 < iVar1) {
    DVar2 = GetTickCount();
    unaff_EDI[0x53] = DVar2 + unaff_EDI[0x52];
  }
  return iVar1;
}

