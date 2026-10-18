/* speed.exe 00832a5c FUN_00832a5c; analysis pseudocode, not buildable source.
 * calls 00832a3e FUN_00832a3e
 * calls 00832634 FUN_00832634
 */

void FUN_00832a5c(int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  uint extraout_ECX;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)FUN_00832634(param_1);
  uVar5 = (uint)*pbVar2;
  if (uVar5 != 0) {
    uVar4 = DAT_009c2bf4 % uVar5;
    uVar1 = *(undefined1 *)(param_1 + 5);
    FUN_00832a3e(uVar4,uVar1,uVar5);
    iVar3 = FUN_00832a3e(uVar4 + 1,uVar1,uVar5);
    iVar3 = iVar3 - extraout_ECX;
    uVar5 = extraout_ECX & 7;
    if (0 < iVar3) {
      pbVar2 = pbVar2 + (extraout_ECX >> 3) + 1;
      do {
        *pbVar2 = *pbVar2 | '\x01' << ((byte)uVar5 & 0x1f);
        uVar5 = uVar5 + 1;
        if (uVar5 == 8) {
          uVar5 = 0;
          pbVar2 = pbVar2 + 1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

