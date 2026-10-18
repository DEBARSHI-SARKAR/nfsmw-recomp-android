/* speed.exe 0058e630 FUN_0058e630; analysis pseudocode, not buildable source.
 * calls 005fcc60 FUN_005fcc60
 * calls 005fbd90 FUN_005fbd90
 * calls 00627400 FUN_00627400
 * calls 006227d0 FUN_006227d0
 * calls 0056a880 FUN_0056a880
 * calls 0058e5d0 FUN_0058e5d0
 * calls 00460bf0 FUN_00460bf0
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 * calls 004b9080 FUN_004b9080
 * calls 00471b60 FUN_00471b60
 */

undefined4 * __thiscall FUN_0058e630(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008725f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0f30;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 0;
  param_1[0xd] = *(undefined4 *)(param_2 + 8);
  param_1[0xe] = 0;
  FUN_0058e5d0("GLOBAL\\HUDTEXTURESPHOTOFINISH.BIN");
  local_4._0_1_ = 1;
  if (param_1[0xd] == 0) {
    cVar1 = FUN_005fbd90();
    if ((*(int *)(DAT_0091e000 + 0x1964) == 2) && (cVar1 != '\0')) {
      pcVar4 = "PHOTOFINISH_RIVAL";
    }
    else {
      pcVar4 = (char *)FUN_005fcc60();
    }
    uVar2 = FUN_00460bf0(pcVar4);
    param_1[0xe] = uVar2;
    uVar2 = FUN_005251a0(param_1[4],0x286a9cd4);
    FUN_0056a880(param_1[0xe],uVar2);
  }
  param_1[0xc] = DAT_00925b14;
  FUN_00471b60(1,0x3f400000);
  FUN_004b9080(1,0xf,"CinemSlow");
  iVar3 = FUN_00627400(0x44);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar3 != 0) {
    FUN_006227d0(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                 DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,0,0,
                 0x9fe1ee17);
  }
  ExceptionList = local_c;
  return param_1;
}

