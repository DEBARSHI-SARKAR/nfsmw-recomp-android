/* speed.exe 007a1400 FUN_007a1400; analysis pseudocode, not buildable source.
 * calls 00792510 FUN_00792510
 * calls 007a0650 FUN_007a0650
 * calls 007a0680 FUN_007a0680
 * calls 007a06b0 FUN_007a06b0
 * calls 0078a3a0 FUN_0078a3a0
 * calls 007a0d10 FUN_007a0d10
 * calls 007a0540 FUN_007a0540
 * calls 0079fb60 FUN_0079fb60
 * calls 007a11d0 FUN_007a11d0
 * calls 007a1230 FUN_007a1230
 */

void FUN_007a1400(undefined4 param_1,undefined4 *param_2,uint param_3)

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
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  local_4 = 0;
  local_410 = 0;
  local_c = param_3 << 3;
  FUN_0078a3a0(&local_410,DAT_009b46d4);
  if ((byte)((char)DAT_009b46d8 + (char)local_410) < 0x10) {
    switch((char)DAT_009b46d8 + (char)local_410) {
    case '\x01':
      FUN_007a06b0(local_40c,param_1);
      return;
    case '\x02':
      FUN_007a0540(local_40c,param_1);
      return;
    case '\x03':
      FUN_00792510(local_40c,param_1);
      return;
    case '\x05':
      FUN_007a0650(local_40c,param_1);
      return;
    case '\a':
      FUN_007a0d10(local_40c,param_1);
      return;
    case '\b':
      FUN_007a11d0(param_1,1);
      return;
    case '\v':
      FUN_007a1230(local_40c,param_1);
      return;
    case '\r':
      FUN_007a0680(local_40c,param_1);
      return;
    case '\x0f':
      FUN_0079fb60(local_40c,param_1);
    }
  }
  return;
}

