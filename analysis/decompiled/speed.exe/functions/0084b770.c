/* speed.exe 0084b770 FUN_0084b770; analysis pseudocode, not buildable source.
 * calls 008621b8 Ordinal_57
 * calls 00862116 Ordinal_111
 * calls 008621b2 Ordinal_52
 * calls 007d6cb0 __security_check_cookie
 * calls 0086212e Ordinal_23
 * calls 008621ac Ordinal_6
 * calls 008621be WSAIoctl
 * calls 00862176 Ordinal_4
 * calls 0086215e Ordinal_3
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084b770(undefined4 *param_1,uint param_2,short *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  undefined1 auStack_110 [268];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_2 != param_4) {
    return 0xffffffff;
  }
  if (*param_3 == 2) {
    psVar4 = param_3;
    puVar5 = param_1;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *(undefined4 *)psVar4;
      psVar4 = psVar4 + 2;
      puVar5 = puVar5 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(char *)puVar5 = (char)*psVar4;
      psVar4 = (short *)((int)psVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar1 = Ordinal_23(2,2,0);
    if (iVar1 != -1) {
      if (0x1ff < DAT_009c36f8) {
        unaff_EDI = 0;
        iVar2 = WSAIoctl(iVar1,0xc8000014,param_3,param_1,&stack0xfffffee0,0x10,&local_4,0,0);
        if (iVar2 < 0) {
          Ordinal_111();
        }
        else {
          param_1[1] = 0;
        }
        if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 1),
                                       *(undefined1 *)((int)param_1 + 5)),
                              *(undefined1 *)((int)param_1 + 6)),*(undefined1 *)((int)param_1 + 7))
            == 0x7f000001) {
          param_1[1] = *(undefined4 *)(param_3 + 2);
        }
      }
      if (CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 1),*(undefined1 *)((int)param_1 + 5)),
                   *(undefined1 *)((int)param_1 + 6)) == 0 && *(char *)((int)param_1 + 7) == '\0') {
        iVar2 = Ordinal_4(iVar1,param_3,param_1);
        if (iVar2 == 0) {
          iVar2 = Ordinal_6(iVar1,&stack0xfffffee0,&local_4);
          if (iVar2 == 0) {
            param_1[1] = unaff_EDI;
          }
        }
      }
      if (CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 1),*(undefined1 *)((int)param_1 + 5)),
                   *(undefined1 *)((int)param_1 + 6)) == 0 && *(char *)((int)param_1 + 7) == '\0') {
        Ordinal_57(auStack_110,0x100);
        iVar2 = Ordinal_52(&stack0xfffffee8);
        if (iVar2 != 0) {
          param_1[1] = *(undefined4 *)**(undefined4 **)(iVar2 + 0xc);
        }
      }
      Ordinal_3(iVar1);
    }
    return 0;
  }
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return 0xfffffffd;
}

