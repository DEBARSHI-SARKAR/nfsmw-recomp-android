/* speed.exe 00759990 FUN_00759990; analysis pseudocode, not buildable source.
 * calls 00757610 FUN_00757610
 * calls 00503360 FUN_00503360
 * calls 00501800 FUN_00501800
 */

undefined4 FUN_00759990(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 local_200 [512];
  
  if (*(int *)(param_1 + 0x54) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x54) + 0xc);
    *psVar1 = *psVar1 + -1;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x58) + 0xc);
    *psVar1 = *psVar1 + -1;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x5c) + 0xc);
    *psVar1 = *psVar1 + -1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x60) + 0xc);
    *psVar1 = *psVar1 + -1;
  }
  iVar2 = FUN_00757610(local_200,0x80,param_1 + 0x54,4);
  if (iVar2 != 0) {
    FUN_00503360(local_200,iVar2);
  }
  if (*(int *)(param_1 + 8) == 2) {
    FUN_00501800(param_1 + 0x20,5);
  }
  return 1;
}

