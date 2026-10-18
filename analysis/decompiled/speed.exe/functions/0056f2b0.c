/* speed.exe 0056f2b0 FUN_0056f2b0; analysis pseudocode, not buildable source.
 * calls 00756e90 FUN_00756e90
 * calls 00747c00 FUN_00747c00
 */

void __fastcall FUN_0056f2b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_00747c00((int)*(short *)(param_1 + iVar2 * 2));
    FUN_00756e90(iVar2,uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x8b);
  return;
}

