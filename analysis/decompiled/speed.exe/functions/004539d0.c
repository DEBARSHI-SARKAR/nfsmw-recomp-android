/* speed.exe 004539d0 FUN_004539d0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 */

void __fastcall FUN_004539d0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = param_1[1] * 0xc;
    DAT_0090dcd4 = DAT_0090dcd4 + param_1[1] * -0xc;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,iVar1,0);
    }
  }
  return;
}

