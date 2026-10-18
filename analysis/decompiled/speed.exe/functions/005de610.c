/* speed.exe 005de610 FUN_005de610; analysis pseudocode, not buildable source.
 * calls 004ff160 FUN_004ff160
 * calls 00503c80 FUN_00503c80
 * calls 00503c50 FUN_00503c50
 * calls 0050cc20 FUN_0050cc20
 */

int __fastcall FUN_005de610(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050cc20(&stack0x00000004,0x8040000);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    FUN_004ff160(param_1,&LAB_005de5f0);
    FUN_00503c50();
    FUN_00503c80(iVar1);
  }
  return iVar1;
}

