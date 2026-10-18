/* speed.exe 0085c770 FUN_0085c770; analysis pseudocode, not buildable source.
 * calls 00846010 FUN_00846010
 * calls 008646a0 FUN_008646a0
 * calls 00864480 FUN_00864480
 * calls 007d6cb0 __security_check_cookie
 * calls 00864500 FUN_00864500
 * calls 008645d0 FUN_008645d0
 * calls 00864870 FUN_00864870
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0085c770(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  undefined2 local_58 [2];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44 [63];
  undefined1 local_5;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = DAT_00906980;
  if ((unaff_ESI[0xb] & *(uint *)(&DAT_0090d4d0 + param_2 * 4)) != 0) {
    iVar4 = 0;
    if (0 < (int)unaff_ESI[100]) {
      piVar2 = unaff_ESI + 0x8a;
      do {
        if (piVar2[-2] == 1) {
          return;
        }
        if (*piVar2 == 1) {
          return;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 0x2c;
      } while (iVar4 < (int)unaff_ESI[100]);
    }
    *(undefined2 *)((int)unaff_EDI + 6) = 1;
    iVar4 = FUN_00864870(unaff_ESI[0xe],0x69646c65,0,0);
    if (iVar4 != 0) {
      if ((int)unaff_ESI[0x35] < param_1) {
        piVar2 = unaff_ESI + 0x1d;
        piVar3 = unaff_EBX + 0x12;
      }
      else {
        piVar3 = unaff_ESI + 0x1d;
        piVar2 = unaff_EBX + 0x12;
      }
      FUN_00846010(local_44,0x40,"%s-%s-%s-%08x",piVar2,piVar3,&DAT_008c7aa0 + iVar1 * 5,
                   unaff_ESI[0x36]);
      local_5 = 0;
      if (iVar1 == 0) {
        iVar4 = unaff_ESI[0x61];
      }
      else {
        iVar4 = unaff_ESI[0x62];
      }
      if (iVar4 != 0) {
        FUN_00864500(unaff_ESI[0xe],iVar4,local_44);
        return;
      }
      if (iVar1 != 0) {
        FUN_00864480(unaff_ESI[0xe],6000,local_44);
        return;
      }
      FUN_00864480(unaff_ESI[0xe],unaff_ESI[10],local_44);
      return;
    }
    FUN_008645d0(unaff_ESI[0xe]);
    iVar4 = FUN_008646a0(unaff_ESI[0xe],&param_2,local_58);
    if (iVar4 != 0) {
      local_4c = *unaff_EDI;
      if (iVar4 < 1) {
        *unaff_EDI = 5;
      }
      else {
        unaff_EBX[1] = param_2;
        *unaff_EBX = param_2;
        *(undefined2 *)(unaff_EDI + 1) = local_58[0];
        *unaff_EDI = 0;
      }
      local_48 = *unaff_EDI;
      if (local_4c != local_48) {
        local_54 = param_1;
        local_50 = iVar1;
        unaff_ESI[0x5f] = 1;
        (*(code *)*unaff_ESI)();
        unaff_ESI[0x5f] = 0;
      }
    }
  }
  return;
}

