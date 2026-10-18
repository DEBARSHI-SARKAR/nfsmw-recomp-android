/* speed.exe 00505e80 FUN_00505e80; analysis pseudocode, not buildable source.
 * calls 006cf2b0 FUN_006cf2b0
 * calls 0072ca00 FUN_0072ca00
 * calls 00505380 FUN_00505380
 */

void FUN_00505e80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  short *local_c;
  int local_4;
  
  if ((((DAT_008f2918 != 0) && (DAT_00925e90 == 6)) &&
      (iVar3 = FUN_0072ca00(*(int *)(param_1 + 0x40) + 0x40), iVar3 != 0)) &&
     (local_4 = 0, 0 < *(short *)(iVar3 + 0x10))) {
    local_c = (short *)(iVar3 + 0x12);
    do {
      if (((*(int *)(&DAT_009a3bb0 + *local_c * 4) != 0) &&
          (iVar1 = *(int *)(*(int *)(&DAT_009a3bb0 + *local_c * 4) + 8), iVar1 != 0)) &&
         (iVar4 = FUN_006cf2b0(iVar1 + 0x30,iVar1 + 0x40,0), iVar4 != 0)) {
        for (puVar2 = *(undefined4 **)(iVar1 + 0x58); puVar2 != (undefined4 *)(iVar1 + 0x58);
            puVar2 = (undefined4 *)*puVar2) {
          FUN_00505380(param_1,puVar2,&DAT_00987ab0,0x3f800000,0,param_2,0,0,0x3f800000);
        }
      }
      local_c = local_c + 1;
      local_4 = local_4 + 1;
    } while (local_4 < *(short *)(iVar3 + 0x10));
  }
  return;
}

