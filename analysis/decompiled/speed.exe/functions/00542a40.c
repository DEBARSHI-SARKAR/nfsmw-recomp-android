/* speed.exe 00542a40 FUN_00542a40; analysis pseudocode, not buildable source.
 * calls 00653f60 FUN_00653f60
 * calls 0045ce40 FUN_0045ce40
 * calls 007f7dcb FUN_007f7dcb
 * calls 005b7780 FUN_005b7780
 * calls 007f7c69 FUN_007f7c69
 * calls 007f7c5e FUN_007f7c5e
 * calls 007f7c56 FUN_007f7c56
 * calls 007f7fcd FUN_007f7fcd
 * calls 006e1880 FUN_006e1880
 * calls 006caf50 FUN_006caf50
 */

void __fastcall FUN_00542a40(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086fcfb;
  local_c = ExceptionList;
  if (DAT_00926144 == 0) {
    cVar1 = *(char *)(param_1 + 5);
    cVar2 = *(char *)((int)param_1 + 0x15);
    ExceptionList = &local_c;
    iVar3 = (*DAT_00909e54)(&DAT_00890978,0x94,0,0,DAT_00909e5c);
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007f7dcb(param_1 + 6,param_1[1],cVar1 != '\0',cVar2 == '\0');
    }
    uStack_4 = 0xffffffff;
    param_1[0x50] = iVar3;
    if (iVar3 == 0) {
      param_1[0x47] = 2;
      param_1[0x48] = 2;
      ExceptionList = local_c;
      return;
    }
    iVar3 = FUN_00653f60();
    iVar3 = ((-(uint)(iVar3 != 0) & 0xfffffffc) + 0x14) * 2;
    uVar4 = FUN_006caf50(iVar3);
    uVar4 = FUN_007f7fcd(uVar4,iVar3);
    param_1[0x51] = uVar4;
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      FUN_007f7c69(*param_1);
    }
    param_1[0x46] = param_1[0x46] + 1;
    FUN_007f7c56();
    if (param_1[0x51] == 0) {
      if ((*DAT_0091cadc != -0xd8) && (iVar3 = *(int *)(*DAT_0091cadc + 0xe0), iVar3 != 0)) {
        do {
          FUN_005b7780(0xc3960eb9,0,iVar3,0xffffffff,0);
          iVar3 = *(int *)(iVar3 + 4);
        } while (iVar3 != 0);
        ExceptionList = local_c;
        return;
      }
    }
    else {
      FUN_006e1880(&DAT_0091cb28,*(undefined4 *)(param_1[0x51] + 4),
                   CONCAT31((int3)((uint)param_1[3] >> 8),param_1[3] == 0));
      iVar3 = DAT_0091cb1c;
      if (DAT_0091cb1c != 0) {
        uVar4 = FUN_0045ce40();
        *(undefined4 *)(iVar3 + 0x18) = uVar4;
      }
      param_1[0x47] = 5;
      param_1[0x48] = 5;
      FUN_007f7c5e();
    }
  }
  else if ((*DAT_0091cadc != -0xd8) &&
          (iVar3 = *(int *)(*DAT_0091cadc + 0xe0), ExceptionList = &local_c, iVar3 != 0)) {
    do {
      FUN_005b7780(0xc3960eb9,0,iVar3,0xffffffff,0);
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}

