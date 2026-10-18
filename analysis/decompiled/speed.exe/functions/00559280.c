/* speed.exe 00559280 FUN_00559280; analysis pseudocode, not buildable source.
 * calls 0054ece0 FUN_0054ece0
 * calls 00626d70 FUN_00626d70
 * calls 00516b50 FUN_00516b50
 * calls 006e8df0 FUN_006e8df0
 * calls 0050ea10 FUN_0050ea10
 */

undefined1 __fastcall FUN_00559280(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_9;
  
  local_9 = 0;
  if ((DAT_00925e90 != 6) && (*(char *)(DAT_0091cae0 + 1) == '\0')) {
    *(undefined1 *)(*param_1 + 0x281) = 0;
    return 0;
  }
  if (((DAT_0091cf90[300] & 4U) == 0) || (bVar1 = true, *DAT_0091cf90 != '\x02')) {
    bVar1 = false;
  }
  iVar3 = FUN_006e8df0();
  iVar4 = (int)DAT_0091cf90[0xc];
  bVar5 = iVar3 == 1;
  iVar3 = -1;
  if (iVar4 == -1) {
    return 0;
  }
  if (bVar5 || bVar1) {
    iVar3 = (int)DAT_0091cf90[0xd];
  }
  if (iVar4 == 4) {
    *(undefined1 *)(*param_1 + 0x281) = 1;
  }
  else {
    *(undefined1 *)(param_1[iVar4] + 0x281) = 1;
  }
  if (iVar3 != -1) {
    if (iVar3 == 4) {
      *(undefined1 *)(*param_1 + 0x281) = 1;
    }
    else {
      *(undefined1 *)(param_1[iVar3] + 0x281) = 1;
    }
  }
  cVar2 = FUN_00626d70();
  if (cVar2 == '\0') {
    FUN_0054ece0(iVar4);
    local_9 = 1;
  }
  else if (!bVar5 && !bVar1) {
    cVar2 = FUN_00516b50("ControllerUnplugged.fng");
    if (cVar2 == '\0') {
      FUN_0050ea10(iVar4);
    }
  }
  if (iVar3 != -1) {
    cVar2 = FUN_00626d70();
    if (cVar2 == '\0') {
      FUN_0054ece0(iVar3);
      return 1;
    }
    if (!bVar5 && !bVar1) {
      cVar2 = FUN_00516b50("ControllerUnplugged.fng");
      if (cVar2 == '\0') {
        FUN_0050ea10(iVar3);
      }
    }
  }
  return local_9;
}

