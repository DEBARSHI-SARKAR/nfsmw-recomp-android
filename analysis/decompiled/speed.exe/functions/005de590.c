/* speed.exe 005de590 FUN_005de590; analysis pseudocode, not buildable source.
 * calls 0072ca00 FUN_0072ca00
 * calls 007236e0 FUN_007236e0
 */

void __fastcall FUN_005de590(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(short *)(param_1 + 4) < 0) && (DAT_009a3ba4 != 0)) {
    local_4 = *(undefined4 *)(param_1 + 0x14);
    local_8 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = FUN_0072ca00(&local_8);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar3 + 0xc);
      *(short *)(param_1 + 4) = sVar1;
      uVar2 = FUN_007236e0((int)sVar1);
      *(undefined2 *)(param_1 + 6) = uVar2;
    }
  }
  return;
}

