/* speed.exe 004589f0 FUN_004589f0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 00457cb0 FUN_00457cb0
 */

void FUN_004589f0(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = (uint)param_1[2];
  }
  iVar1 = ((param_1[3] & 0x8000) >> 0xc) + 8 + *param_1 * uVar2;
  FUN_00457cb0();
  DAT_0090dcd4 = DAT_0090dcd4 - iVar1;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,iVar1,0);
  }
  return;
}

