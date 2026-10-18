/* speed.exe 00664cc0 FUN_00664cc0; analysis pseudocode, not buildable source.
 * calls 0065dbc0 FUN_0065dbc0
 * calls 00661420 FUN_00661420
 * calls 006613a0 FUN_006613a0
 * calls 0065ede0 FUN_0065ede0
 * calls 005d0370 FUN_005d0370
 * calls 0065eb90 FUN_0065eb90
 * calls 00662e60 FUN_00662e60
 */

void FUN_00664cc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  int local_4;
  
  iVar1 = DAT_00925980;
  if (param_1 != 0) {
    local_4 = DAT_00925980 + 0x10;
    FUN_0065eb90(&local_8,&param_1);
    if (local_8 != *(int *)(iVar1 + 0x14)) {
      iVar1 = *(int *)(local_8 + 0x20);
      uVar3 = *(undefined4 *)(local_8 + 0x18);
      uVar2 = *(undefined4 *)(local_8 + 0x1c);
      FUN_006613a0(param_1);
      if ((*(int *)(iVar1 + 4) == 0) ||
         (param_1 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x24, param_1 == 0)) {
        uVar3 = FUN_0065dbc0(uVar3,uVar2);
        FUN_0065ede0(uVar3);
        FUN_00661420();
        FUN_005d0370(iVar1,0x10,0);
      }
      FUN_00662e60(&param_1,local_8);
    }
  }
  return;
}

