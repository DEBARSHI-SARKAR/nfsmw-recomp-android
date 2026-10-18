/* speed.exe 00766130 FUN_00766130; analysis pseudocode, not buildable source.
 */

undefined2 __fastcall FUN_00766130(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x8e);
  uVar1 = (uVar2 == 0) - 1 & uVar2;
  uVar3 = (ushort)DAT_009b3874 - 1;
  if ((int)uVar1 <= (int)((ushort)DAT_009b3874 - 1)) {
    uVar3 = uVar1;
  }
  if (uVar2 == uVar3) {
    uVar2 = (uint)*(short *)(uVar2 * 0x16 + 6 + DAT_009b38c0);
    uVar1 = ((int)uVar2 < 1) - 1 & uVar2;
    uVar3 = (int)(short)DAT_009b3880 - 1U;
    if ((int)uVar1 <= (int)((int)(short)DAT_009b3880 - 1U)) {
      uVar3 = uVar1;
    }
    if (uVar2 == uVar3) {
      return *(undefined2 *)(DAT_009b38c8 + 6 + uVar2 * 8);
    }
  }
  return 0;
}

