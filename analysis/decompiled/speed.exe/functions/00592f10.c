/* speed.exe 00592f10 FUN_00592f10; analysis pseudocode, not buildable source.
 * calls 0054e760 FUN_0054e760
 * calls 00516c90 FUN_00516c90
 * calls 00515960 FUN_00515960
 * calls 00589900 FUN_00589900
 * calls 00515990 FUN_00515990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00592f10(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00589900();
  if (param_1[5] == 0) {
    return 0;
  }
  FUN_00515960(&local_4,&local_8);
  cVar1 = FUN_0054e760(local_4,local_8,param_1[5]);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_00515990(&local_c);
  if (_DAT_00890968 <= local_c) {
    if (local_c <= _DAT_00890968) {
      return 1;
    }
    FUN_00516c90(0x18c32a,param_1[6],0);
    uVar2 = 0xffffffff;
    if ((char)param_1[10] != '\0') {
      (**(code **)(*param_1 + 0x38))(0xffffffff);
      return 1;
    }
  }
  else {
    FUN_00516c90(0x39feffd,param_1[6],0);
    uVar2 = 1;
    if ((char)param_1[10] != '\0') {
      (**(code **)(*param_1 + 0x38))();
      return 1;
    }
  }
  (**(code **)(*param_1 + 0x34))(uVar2);
  return 1;
}

