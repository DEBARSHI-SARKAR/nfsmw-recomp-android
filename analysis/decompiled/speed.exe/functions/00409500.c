/* speed.exe 00409500 FUN_00409500; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00409500(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  uVar2 = 0;
  if (((iVar1 != 0) && (uVar2 = DAT_0091e000, DAT_0091e000 != 0)) &&
     (*(int *)(DAT_0091e000 + 0x1960) == 1)) {
    iVar1 = (**(code **)(param_1[-0x1c3] + 100))();
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2c) != '\0')) {
      return 1;
    }
    return 0;
  }
  return uVar2 & 0xffffff00;
}

