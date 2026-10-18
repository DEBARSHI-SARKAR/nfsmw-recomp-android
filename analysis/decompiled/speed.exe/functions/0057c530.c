/* speed.exe 0057c530 FUN_0057c530; analysis pseudocode, not buildable source.
 * calls 006cb2a0 FUN_006cb2a0
 * calls 00525a00 FUN_00525a00
 * calls 005672f0 FUN_005672f0
 * calls 005033c0 FUN_005033c0
 * calls 00507e40 FUN_00507e40
 * calls 00663f00 FUN_00663f00
 * calls 00460d20 FUN_00460d20
 * calls 00503360 FUN_00503360
 * calls 004647c0 FUN_004647c0
 * calls 00503380 FUN_00503380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057c530(int param_1)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  FUN_00503380(0);
  *(undefined4 *)(param_1 + 4) = 3;
  FUN_006cb2a0();
  FUN_00525a00();
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXDRAG_BIN_008f7ed8);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXRACE_BIN_008f7edc);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXSPLIT_BIN_008f7ee0);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXDRAGSPLIT_BIN_008f7ee4);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00663f00(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (DAT_0091cf1c != 0) {
    FUN_00663f00(DAT_0091cf1c);
    DAT_0091cf1c = 0;
  }
  if (DAT_0091cefc != 0) {
    FUN_005672f0(0,0);
  }
  iVar1 = FUN_00460d20(&DAT_0091ced8,&DAT_00890978);
  if (iVar1 == 0) {
    if (DAT_0091cf18 != 0) {
      local_4 = DAT_0091cf18;
      FUN_00503360(&local_4,1);
      DAT_0091cf18 = 0;
    }
  }
  else {
    FUN_00503360(&DAT_0091ccfc,5);
    DAT_0091ccfc = 0;
    _DAT_0091cd00 = 0;
    _DAT_0091cd04 = 0;
    _DAT_0091cd08 = 0;
    _DAT_0091cd0c = 0;
    FUN_00507e40(&DAT_0091ced8);
    FUN_004647c0(&DAT_0091ced8,&DAT_00890978);
  }
  FUN_006cb2a0();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  DAT_0091cf24 = 0;
  return;
}

