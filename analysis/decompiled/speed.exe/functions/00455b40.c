/* speed.exe 00455b40 FUN_00455b40; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 */

int * __thiscall FUN_00455b40(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1] * 8;
  DAT_0090dcd4 = DAT_0090dcd4 + param_1[1] * -8;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if ((*param_1 != 0) && (iVar1 != 0)) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,iVar1,0);
  }
  if ((param_2 & 1) != 0) {
    DAT_0090dcd4 = DAT_0090dcd4 - 0xc;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,0xc,0);
  }
  return param_1;
}

