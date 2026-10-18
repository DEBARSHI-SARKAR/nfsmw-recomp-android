/* speed.exe 0060ac20 FUN_0060ac20; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 00627400 FUN_00627400
 * calls 006e8df0 FUN_006e8df0
 * calls 00623a90 FUN_00623a90
 * calls 00573020 FUN_00573020
 * calls 005fbe70 FUN_005fbe70
 * calls 006021b0 FUN_006021b0
 * calls 00701070 FUN_00701070
 * calls 004023c0 FUN_004023c0
 * calls 00641fe0 FUN_00641fe0
 * calls 00642140 FUN_00642140
 * calls 00605690 FUN_00605690
 * calls 00405da0 FUN_00405da0
 * calls 005257f0 FUN_005257f0
 */

void FUN_0060ac20(char param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_50;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087661d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0091e000 != 0) {
    ExceptionList = &local_c;
    FUN_006021b0();
  }
  cVar2 = FUN_00605690();
  if (cVar2 != '\0') {
    ExceptionList = local_c;
    return;
  }
  if (DAT_0091e000 == 0) {
    ExceptionList = local_c;
    return;
  }
  cVar2 = FUN_005fbe70();
  if (cVar2 != '\0') {
    if ((DAT_00993cc8 == 0) || (cVar2 = FUN_00701070(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_1 == '\0') {
      if (bVar1) {
        FUN_004023c0("Event");
        iVar3 = FUN_00405da0(0,0xf,0,0);
        *(undefined4 *)(iVar3 + 4) = local_50;
        FUN_0065faf0();
      }
      iVar3 = FUN_00627400(0x14);
      local_4 = 1;
      if (iVar3 != 0) {
        FUN_00623a90(0,1,0);
        ExceptionList = local_c;
        return;
      }
    }
    else {
      if (bVar1) {
        FUN_004023c0("Event");
        iVar3 = FUN_00405da0(0,0xe,0,0);
        *(undefined4 *)(iVar3 + 4) = local_50;
        FUN_0065faf0();
      }
      iVar3 = FUN_00627400(0xc);
      local_4 = 0;
      if (iVar3 != 0) {
        FUN_00641fe0(0);
        ExceptionList = local_c;
        return;
      }
    }
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(DAT_0091e000 + 0x1960) != 1) {
    ExceptionList = local_c;
    return;
  }
  if ((param_1 != '\0') && (iVar3 = FUN_006e8df0(), iVar3 != 1)) {
    DAT_0091cf41 = 1;
    uVar4 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
    FUN_005257f0("InGamePhotoMaster.fng",0,uVar4,1);
    ExceptionList = local_c;
    return;
  }
  iVar3 = FUN_00627400(0x10);
  local_4 = 2;
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00642140(0,0);
  ExceptionList = local_c;
  return;
}

