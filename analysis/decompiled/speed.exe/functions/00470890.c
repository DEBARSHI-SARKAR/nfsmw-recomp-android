/* speed.exe 00470890 FUN_00470890; analysis pseudocode, not buildable source.
 * calls 00449320 FUN_00449320
 * calls 00502980 FUN_00502980
 * calls 00787580 FUN_00787580
 */

undefined4 * __thiscall FUN_00470890(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_LAB_00894bc8;
  uVar2 = FUN_00787580(0,0,0x1c,0);
  param_1[9] = uVar2;
  FUN_00449320(0x3ccccccd);
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[3] = param_3;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  if (param_2 == -1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  else {
    param_1[6] = &DAT_009195e0 + param_2 * 0x1c;
    iVar1 = *(int *)(&DAT_00919620 + param_2 * 0x70);
    param_1[7] = iVar1;
    *(undefined4 *)(iVar1 + 0xc0) = 0x461c4000;
    param_1[8] = *(undefined4 *)(param_1[7] + 0x2b0);
    if (param_1[5] == 0) {
      param_1[5] = 1;
      if (DAT_00911020 == 0) {
        *(undefined4 *)(param_1[7] + 0x2b0) = param_1[8];
      }
      FUN_00502980(param_1);
      *(undefined4 *)(param_1[7] + 0xbc) = 0x3f000000;
    }
  }
  if ((param_1[3] == 2) || (param_1[3] == 6)) {
    DAT_009a3a70 = DAT_009a3a70 + 1;
  }
  return param_1;
}

