/* speed.exe 006d7a40 FUN_006d7a40; analysis pseudocode, not buildable source.
 * calls 006c9680 FUN_006c9680
 * calls 006c9570 FUN_006c9570
 * calls 006c85f0 FUN_006c85f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_006d7a40(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  if (DAT_008faf14 != 0) {
    local_40 = *param_1;
    local_3c = param_1[1];
    local_38 = (float)param_1[2];
    local_34 = *param_2;
    local_30 = local_34;
    local_2c = local_34;
    iVar2 = FUN_006c9680(&local_40);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      FUN_006c85f0(&local_40);
      local_50 = _DAT_00988000 * _DAT_00890da8;
      local_4c = _DAT_00988004 * _DAT_00890da8;
      local_48 = _DAT_00988008 * _DAT_00890da8;
      local_38 = local_48;
      cVar1 = FUN_006c9570(local_20,&local_50);
      if (cVar1 == '\0') {
        return '\0';
      }
      _DAT_00982d08 = _DAT_00982d08 + 1;
      return cVar1;
    }
  }
  return '\x01';
}

