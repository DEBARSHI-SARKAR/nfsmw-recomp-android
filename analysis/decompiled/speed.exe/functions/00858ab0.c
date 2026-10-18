/* speed.exe 00858ab0 FUN_00858ab0; analysis pseudocode, not buildable source.
 * calls 0085aeb0 FUN_0085aeb0
 * calls 00856dc0 FUN_00856dc0
 * calls 00856d90 FUN_00856d90
 * calls 007d6cb0 __security_check_cookie
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00858ab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  int *local_74;
  int local_70 [4];
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar1 = *(int *)(param_1 + 0x120);
  piVar5 = (int *)(iVar1 + (0x401b - (uint)(0x7f < *(byte *)(iVar1 + 0x4018))));
  iVar3 = (iVar1 - (int)piVar5) + 0x4018 + *(int *)(iVar1 + 0x4010);
  local_74 = piVar5;
  if (0 < *(int *)(iVar1 + 0x80a8)) {
    FUN_0085aeb0(iVar1 + 0x86bc,piVar5,iVar3);
    local_78 = *(undefined1 *)(iVar1 + 0x801b);
    local_77 = *(undefined1 *)(iVar1 + 0x801a);
    local_76 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x8018) >> 8);
    local_75 = *(undefined1 *)(iVar1 + 0x8018);
    FUN_00856d90(local_60);
    FUN_00856dc0(local_60,iVar1 + 0x80ac,*(undefined4 *)(iVar1 + 0x80a8));
    iVar3 = iVar3 + -0x10;
    local_74 = piVar5 + 4;
    FUN_00856dc0(local_60,local_74,iVar3);
    FUN_00856dc0(local_60,&local_78,4);
    FUN_00856e70(local_60,local_70,0x10);
    iVar2 = 4;
    bVar6 = true;
    piVar4 = local_70;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      *(int *)(iVar1 + 0x4010) = iVar3;
      *(int *)(iVar1 + 0x400c) = iVar3;
    }
    else {
      local_74 = (int *)0x0;
    }
  }
  *(int *)(iVar1 + 0x8018) = *(int *)(iVar1 + 0x8018) + 1;
  return local_74;
}

