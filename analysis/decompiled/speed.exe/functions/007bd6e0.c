/* speed.exe 007bd6e0 FUN_007bd6e0; analysis pseudocode, not buildable source.
 * calls 007b76c0 FUN_007b76c0
 * calls 005251a0 FUN_005251a0
 * calls 007aed20 FUN_007aed20
 * calls 00515bb0 FUN_00515bb0
 */

void __fastcall FUN_007bd6e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x57] = -0x6b18cfdf;
  uVar1 = FUN_005251a0(param_1[4],0x91c4a50,0x5bc);
  FUN_00515bb0(uVar1);
  uVar1 = FUN_005251a0(param_1[4],0x2d145be3,0x682);
  FUN_00515bb0(uVar1);
  iVar2 = FUN_007aed20(0x2c);
  if (DAT_00905e38 == -1) {
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 5) & 0x1f) != 4)) {
      param_1[0x6f] = *(byte *)(iVar2 + 5) & 0x1f;
    }
  }
  else {
    param_1[0x6f] = DAT_00905e38;
    DAT_00905e38 = -1;
  }
  FUN_007b76c0(iVar2);
                    /* WARNING: Could not recover jumptable at 0x007bd77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

