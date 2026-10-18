/* speed.exe 0079f720 FUN_0079f720; analysis pseudocode, not buildable source.
 * calls 00791ff0 FUN_00791ff0
 * calls 007974f0 FUN_007974f0
 * calls 007920b0 FUN_007920b0
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00792060 FUN_00792060
 * calls 00741d40 FUN_00741d40
 * calls 007921a0 FUN_007921a0
 * calls 00797290 FUN_00797290
 * calls 00735f80 FUN_00735f80
 * calls 00792140 FUN_00792140
 * calls 00791f70 FUN_00791f70
 * calls 00797390 FUN_00797390
 * calls 00797450 FUN_00797450
 * calls 0079f3e0 FUN_0079f3e0
 */

void FUN_0079f720(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_410;
  undefined4 local_40c [256];
  int local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_40c[0]._0_1_ = 0;
  local_8 = 0;
  puVar2 = local_40c;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  local_4 = 0;
  local_410 = 0;
  local_c = param_2 << 3;
  FUN_0078a3a0(&local_410,DAT_009b46d4);
  switch((char)DAT_009b46d8 + (char)local_410) {
  case '\0':
    FUN_00797290(local_40c);
    return;
  case '\x01':
    FUN_00797390(local_40c);
    return;
  case '\x02':
    FUN_00791f70(local_40c);
    return;
  case '\x04':
    FUN_00791ff0(local_40c);
    return;
  case '\x05':
    FUN_00735f80(local_40c);
    return;
  case '\x06':
    FUN_00792060(local_40c);
    return;
  case '\a':
    FUN_00797450(local_40c);
    return;
  case '\t':
    FUN_0079f3e0(local_40c);
    return;
  case '\n':
    FUN_00792140(local_40c);
    return;
  case '\f':
    FUN_007974f0(local_40c);
    return;
  case '\r':
    FUN_00741d40(local_40c);
    return;
  case '\x0e':
    FUN_007921a0(local_40c);
    return;
  case '\x0f':
    FUN_007920b0(local_40c);
  }
  return;
}

