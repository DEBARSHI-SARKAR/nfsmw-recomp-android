/* speed.exe 00834169 FUN_00834169; analysis pseudocode, not buildable source.
 * calls 00833dd7 FUN_00833dd7
 * calls 00833fc8 FUN_00833fc8
 * calls 00833cd9 FUN_00833cd9
 * calls 00834af6 FUN_00834af6
 */

byte FUN_00834169(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  uVar3 = param_1;
  bVar4 = 0;
  if ((param_1 < 8) && (iVar5 = param_1 * 0xa0, (&DAT_009c2c31)[iVar5] != '\0')) {
    iVar1 = param_1 * 0x28;
    iVar2 = param_1 * 0x28;
    param_1 = *(uint *)(&DAT_009c2c34)[iVar1];
    FUN_00834af6(&param_1,(&DAT_009c2c28)[iVar2],(&DAT_009c2c30)[iVar5],
                 (uint *)(&DAT_009c2c34)[iVar1]);
    FUN_00833cd9(&param_1,(&DAT_009c2c28)[uVar3 * 0x28]);
    FUN_00833dd7((&DAT_009c2c28)[uVar3 * 0x28],(&DAT_009c2c2c)[uVar3 * 0x28],&param_1);
    bVar4 = *(byte *)((&DAT_009c2c2c)[uVar3 * 0x28] + 2) >> 2;
    if ((short)param_1 == (short)*(uint *)(&DAT_009c2a20 + uVar3 * 4)) {
      (&DAT_009c2a24)[uVar3 * 2] = (&DAT_009c2a24)[uVar3 * 2] + 1;
    }
    else {
      *(uint *)(&DAT_009c2a20 + uVar3 * 4) = param_1;
      (&DAT_009c2a24)[uVar3 * 2] = 1;
    }
  }
  FUN_00833fc8(uVar3);
  return bVar4;
}

