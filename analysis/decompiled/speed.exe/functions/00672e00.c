/* speed.exe 00672e00 FUN_00672e00; analysis pseudocode, not buildable source.
 * calls 00672d30 FUN_00672d30
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

void FUN_00672e00(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[7] = 0;
  iVar4 = 0;
  do {
    uVar1 = FUN_00672d30(param_1,iVar4);
    param_2[iVar4] = uVar1;
    puVar2 = (uint *)FUN_00454810(0xcdc136e8,0);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)FUN_006269b0(4);
    }
    uVar3 = 1 << ((byte)iVar4 & 0x1f);
    if ((*puVar2 & uVar3) != 0) {
      param_2[7] = param_2[7] | uVar3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  return;
}

