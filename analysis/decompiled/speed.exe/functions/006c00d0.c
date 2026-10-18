/* speed.exe 006c00d0 FUN_006c00d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c00d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0x3f000000;
  param_1[3] = 0x3f7ff972;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1 = param_1 + 9;
  iVar2 = 4;
  do {
    iVar1 = (**(code **)(*DAT_00982bdc + 0x1d8))(DAT_00982bdc,9,param_1);
    if (iVar1 != 0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

