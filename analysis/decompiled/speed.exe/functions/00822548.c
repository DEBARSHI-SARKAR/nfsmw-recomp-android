/* speed.exe 00822548 FUN_00822548; analysis pseudocode, not buildable source.
 */

ushort FUN_00822548(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  if (*param_1 < (int)(uint)DAT_009c2064) {
    do {
      uVar1 = *(ushort *)(param_2 + 0x18);
      uVar2 = (&DAT_009c2066)[*param_1] & 0x70c;
      if (((((uVar1 & 0x70c) == 0) || (uVar2 = uVar1 & uVar2, uVar2 != 0)) &&
          ((uVar3 = (&DAT_009c2066)[*param_1] & 0x60, (uVar1 & 0x60) == 0 ||
           (uVar3 = *(ushort *)(param_2 + 0x18) & uVar3, uVar3 != 0)))) && ((uVar2 | uVar3) != 0)) {
        *param_1 = *param_1 + 1;
        return uVar2 | uVar3;
      }
      iVar4 = *param_1 + 1;
      *param_1 = iVar4;
    } while (iVar4 < (int)(uint)DAT_009c2064);
  }
  return 0;
}

